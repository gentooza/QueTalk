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

#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QString>

class Preferences
{
public:
    Preferences();
    void load();
    void save();

    // General
    QString language;
    bool hideOffline;
    bool showResources;
    bool showSingleResource;
    int rosterIconSize;
    bool closeToTray;
    bool closeToTrayNotice;

    // Account
    QString jid;
    QString password;
    QString host;
    int port;
    bool storePassword;
    bool autoLogin;

    // ChatWindow
    bool enterToSendMessage;

    // Mainwindow
    QByteArray mainWindowGeometry;
    QByteArray mainWindowState;
};

#endif // PREFERENCES_H
