/*
 * QueTalk! - xmpp client for PC and Ubuntu Touch platforms
 *
 * Copyright (C) 2010 Rei, 2015 Joaquín Cuéllar
 *
 * Author:
 *	Joaquín Cuéllar
 *
 * Source:
 *	http://github.com/gentooza/quetalk
 *
 * This file is a part of QueTalk!. forked from qtalk (Rei, http://github.com/chloerei/qtalk)
 *
 * QueTalk! is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QueTalk! is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QTalk.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef InfoEventStackWidget_H
#define InfoEventStackWidget_H

#include <QWidget>

namespace Ui {
    class InfoEventStackWidget;
}

class QXmppClient;
class QTimeLine;

class InfoEventStackWidget : public QWidget {
    Q_OBJECT
public:
    explicit InfoEventStackWidget(QXmppClient *client, QWidget *parent = 0);
    ~InfoEventStackWidget();
    void addSubscribeRequest(const QString &bareJid);
    void setAnimeVisible(bool visible);
    int count() const;
    bool isEmpty() const;

protected:
    void changeEvent(QEvent *e);

signals:
    void countChanged(int count);
    void infoEventCleared();

private slots:
    void previousSlot();
    void nextSlot();
    void closeSlot();
    void animeSlot(qreal amount);
    void destorySlot();

private:
    Ui::InfoEventStackWidget *ui;
    QXmppClient *m_client;
    QTimeLine *m_timeLine;

    void updatePage();
};

#endif // InfoEventStackWidget_H
