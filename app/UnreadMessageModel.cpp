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

#include "UnreadMessageModel.h"
#include <QTextStream>

#include "QXmppUtils.h"
//gentooza 20151006 QXmppUtils fixed!
UnreadMessageModel::UnreadMessageModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

void UnreadMessageModel::add(const QXmppMessage &message)
{
    m_messageStore[QXmppUtils::jidToBareJid(message.from())] << message;
    //modification to reset() function, to match qt5, I don't know what really reset() does, to improve
    QTextStream newclass;
    newclass.reset();
//////////
}

QList<QXmppMessage> UnreadMessageModel::take(QString jid)
{
    QString resource = QXmppUtils::jidToResource(jid);
    QString bareJid = QXmppUtils::jidToBareJid(jid);
    QList<QXmppMessage> results;

    if (resource.isEmpty()) {
        results = m_messageStore.take(bareJid);
    } else {
        QList<QXmppMessage> mid = m_messageStore.take(bareJid);
        foreach (QXmppMessage message, mid) {
            if (QXmppUtils::jidToResource(message.from()) == resource) {
                results << message;
            } else {
                add(message);
            }
        }
    }
    if (m_messageStore.isEmpty()) {
        emit messageCleared();
    } else {
        qDebug("no empty");
    }
     //modification to reset() function, to match qt5, I don't know what really reset() does, to improve
    QTextStream newclass;
    newclass.reset();
//////////
    return results;
}

int UnreadMessageModel::rowCount(const QModelIndex &parent) const
{
    if (parent != QModelIndex())
        return 0;
    return m_messageStore.keys().count();
}

QVariant UnreadMessageModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole) {
        return m_messageStore.keys().at(index.row());
    }
    return QVariant();
}

bool UnreadMessageModel::hasUnread(const QString &jid) const
{
    return m_messageStore.contains(QXmppUtils::jidToBareJid(jid));
}

bool UnreadMessageModel::hasAnyUnread() const
{
    return !m_messageStore.isEmpty();
}

QString UnreadMessageModel::jidAt(const QModelIndex &index) const
{
    return m_messageStore.keys().at(index.row());
}

QList<QString> UnreadMessageModel::bareJids() const
{
    return m_messageStore.keys();
}
