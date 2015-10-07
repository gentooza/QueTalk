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

#include <QtWidgets/QApplication>
#include "MainWindow.h"
#include <QSettings>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QCoreApplication::setOrganizationName("chloerei");
    QCoreApplication::setOrganizationDomain("chloerei.com");
    QCoreApplication::setApplicationName("qtalk");

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
