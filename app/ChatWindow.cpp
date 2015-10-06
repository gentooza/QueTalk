/*
 * Copyright (C) 2010 Rei
 *
 * Author:
 *	Rei
 *
 * Source:
 *	http://github.com/chloerei/qtalk
 *
 * This file is a part of QTalk.
 *
 * QTalk is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QTalk is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QTalk.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "ChatWindow.h"
#include <QTime>
#include <QDomDocument>
#include "XmppMessage.h"

#include <QCloseEvent>
#include <QTimer>
#include <MessageEdit.h>
#include <QStatusBar>
#include <QPushButton>
#include "ContactInfoDialog.h"
#include <QFileDialog>
#include <QDesktopServices>
#include <QStandardPaths>
#include <QBuffer>
#include <QImageReader>

#include "QXmppRpcIq.h"
#include "QXmppClient.h"
#include "QXmppMessage.h"
#include "QXmppUtils.h"
#include "QXmppRosterIq.h"
#include "QXmppRosterManager.h"

ChatWindow::ChatWindow(QString jid, QXmppClient *client, QWidget *parent) :
    QMainWindow(parent),
    m_jid(jid),
    m_client(client),
    m_selfState(QXmppMessage::Active),
    m_pausedTimer(new QTimer),
    m_inactiveTimer(new QTimer),
    m_goneTimer(new QTimer),
    m_statusBar(new QStatusBar),
    m_sendButton(new QPushButton),
    m_sendTip(new QLabel)
{
    ui.setupUi(this);

    setWindowTitle(QString(tr("Contact: %1")).arg(m_jid));

    m_editor = new MessageEdit();
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(m_editor);
    layout->setMargin(0);
    ui.editorWarpwidget->setLayout(layout);
    m_editor->setFocus();

    m_sendButton->setText(tr("Send"));
    m_sendButton->setFixedHeight(m_statusBar->sizeHint().height());
    m_statusBar->addPermanentWidget(m_sendTip);
    m_statusBar->addPermanentWidget(m_sendButton);
    m_statusBar->setSizeGripEnabled(false);
    setStatusBar(m_statusBar);

    // init ui
    //QXmppRoster::QXmppRosterEntry entry = m_client->getRoster().getRosterEntry(jidToBareJid(m_jid));
    //gentooza 20150929 qxmpp 0.9.2 QXmppRoster to QXmppRosterIq and modified QXmppClient
    QXmppRosterIq::Item  entry= m_client->rosterManager().getRosterEntry(QXmppUtils::jidToBareJid(m_jid));

    ui.name->setText(entry.name());
    ui.jid->setText(m_jid);
    //if (m_client->getRoster().getResources(jidToBareJid(m_jid)).isEmpty())
    //gentooza 20150929 qxmpp 0.9.2 QXmppRoster to QXmppRosterIq and modified QXmppClient
    if (m_client->rosterManager().getResources(QXmppUtils::jidToBareJid(m_jid)).isEmpty())
        ui.photo->setPixmap(QPixmap(":/images/user-identity-grey-100.png"));
    else
        ui.photo->setPixmap(QPixmap(":/images/user-identity-100.png"));

    connect(m_sendButton, SIGNAL(clicked()),
            this, SLOT(sendMessage()));
    connect(m_editor, SIGNAL(textChanged()),
            this, SLOT(sendComposing()));
    connect(m_pausedTimer, SIGNAL(timeout()),
            this, SLOT(pausedTimeout()));
    connect(m_inactiveTimer, SIGNAL(timeout()),
            this, SLOT(inactiveTimeout()));
    connect(m_goneTimer, SIGNAL(timeout()),
            this, SLOT(goneTimeout()));
    connect(ui.detailButton, SIGNAL(clicked()),
            this, SLOT(openContactInfoDialog()) );

    // action
    connect(ui.actionSendFile, SIGNAL(triggered()),
            this, SLOT(sendFileSlot()) );

    setAttribute(Qt::WA_QuitOnClose, false);
    setAttribute(Qt::WA_DeleteOnClose, true);
}

void ChatWindow::appendMessage(const QXmppMessage &o_message)
{
    XmppMessage message(o_message);
    changeState(message.state());
    if (!message.body().isEmpty()){
        //QString bareJid = jidToBareJid(message.from()); 
        ui.messageBrowser->append(QString("%1 %2").arg(message.from()).arg(QTime::currentTime().toString()));
        if (message.html().isEmpty()) {
            ui.messageBrowser->append(message.body());
        } else {
            ui.messageBrowser->append(message.html());
        }

        if (!isActiveWindow()) {
            // notice new message
            activateWindow();
        }
    }

}

void ChatWindow::readPref(Preferences *pref)
{
    if (pref->enterToSendMessage) {
        m_sendButton->setShortcut(QKeySequence("Return"));
        m_sendTip->setText("Enter");
    } else {
        m_sendButton->setShortcut(QKeySequence("Ctrl+Return"));
        m_sendTip->setText("Ctrl+Enter");
    }
    m_editor->setIgnoreEnter(pref->enterToSendMessage);
}

void ChatWindow::setVCard(QXmppVCardIq vCard)
{
    m_vCard = vCard;
    if (!vCard.photo().isEmpty())
        {
          //gentooza 20150930 QXmppVCardIq has no photoAsImage() method anymore
          QBuffer buffer;
          buffer.setData(vCard.photo());
          buffer.open(QIODevice::ReadOnly);
          QImageReader imageReader(&buffer);
          QImage myImage = imageReader.read();
          //ui.photo->setPixmap(QPixmap::fromImage(vCard.photoAsImage()));
	  ui.photo->setPixmap(QPixmap::fromImage(myImage));
        }
}

void ChatWindow::sendMessage()
{
    if (m_editor->toPlainText().isEmpty())
        return;
 //gentooza 20150930 no getConfiguration anymore
    XmppMessage message(m_client->configuration().jid()/*m_client->getConfiguration().jid()*/,
                        m_jid,
                        m_editor->toPlainText());
    message.setHtml(m_editor->toHtml());
    m_client->sendPacket(message);
    //gentooza 20150930 no getConfiguration anymore
    //QString c_bareJid = m_client->getConfiguration().jidBare();
    QString c_bareJid = m_client->configuration().jidBare();
    ui.messageBrowser->append(QString("%1 %2").arg(c_bareJid).arg(QTime::currentTime().toString()));
    ui.messageBrowser->append(m_editor->toHtml());
    m_editor->clear();
    m_selfState = QXmppMessage::Active;
}

void ChatWindow::changeState(QXmppMessage::State state)
{
    QString stateStr;
    switch (state) {
        case QXmppMessage::None :
            stateStr = tr("None");
            break;
        case QXmppMessage::Active :
            stateStr = tr("Active");
            break;
        case QXmppMessage::Inactive :
            stateStr = tr("Inactive");
            break;
        case QXmppMessage::Gone :
            stateStr = tr("Gone");
            break;
        case QXmppMessage::Composing :
            stateStr = tr("Composing");
            break;
        case QXmppMessage::Paused :
            stateStr = tr("Paused");
            break;
        default:
            break;
    }
    m_statusBar->showMessage(QString("State: %1").arg(stateStr));
}

void ChatWindow::sendComposing()
{
    // reset timer
    m_pausedTimer->start(30000);
    m_inactiveTimer->start(120000);
    m_goneTimer->start(600000);

    changeSelfState(QXmppMessage::Composing);
}

void ChatWindow::changeSelfState(QXmppMessage::State state)
{
    if (m_selfState != state) {
        m_selfState = state;
	//Gentooza 20150930 QXmppUtils class
//        QString resource = jidToResource(m_jid);
//        QString bareJid = jidToBareJid(m_jid);
        QString resource = QXmppUtils::jidToResource(m_jid);
        QString bareJid = QXmppUtils::jidToBareJid(m_jid);
    //gentooza 20150930 no getConfiguration anymore
        XmppMessage message(m_client->configuration().jid(),
                            m_jid);
        message.setState(state);
        if (resource.isEmpty()) {
            // if breaJid at less have one resource
            //gentooza 20150929 qxmpp 0.9.2 QXmppRoster to QXmppRosterIq and modified QXmppClient
            //if (!m_client->getRoster().getAllPresencesForBareJid(bareJid).isEmpty()) {
            if (!m_client->rosterManager().getAllPresencesForBareJid(bareJid).isEmpty()) {
                m_client->sendPacket(message);
            }
        } else {
            // if resource no unavable
            //gentooza 20150929 qxmpp 0.9.2 QXmppRoster to QXmppRosterIq and modified QXmppClient
            //if (!m_client->getRoster().getPresence(bareJid, resource).from().isEmpty()) {
            if (!m_client->rosterManager().getPresence(bareJid, resource).from().isEmpty()) {
                m_client->sendPacket(message);
            }
        }
    }
}

void ChatWindow::closeEvent(QCloseEvent *event)
{
    changeSelfState(QXmppMessage::Gone);
    event->accept();
}

void ChatWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui.retranslateUi(this);
        break;
    default:
        break;
    }
}

void ChatWindow::pausedTimeout()
{
    changeSelfState(QXmppMessage::Paused);
    m_pausedTimer->stop();
}
void ChatWindow::inactiveTimeout()
{
    changeSelfState(QXmppMessage::Inactive);
    m_inactiveTimer->stop();
}
void ChatWindow::goneTimeout()
{
    changeSelfState(QXmppMessage::Gone);
    m_goneTimer->stop();
}

void ChatWindow::openContactInfoDialog()
{
    emit viewContactInfo(m_jid);
}

void ChatWindow::sendFileSlot()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Select File"),
                                                    QStandardPaths::displayName(QStandardPaths::DesktopLocation));
// antes con qt4: QDesktopServices::storageLocation(QDesktopServices::DesktopLocation));

    if (fileName.isEmpty())
        return;
    emit sendFile(m_jid, fileName);
}
