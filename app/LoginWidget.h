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

#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <Preferences.h>

namespace Ui {
    class LoginWidget;
}

class LoginWidget : public QWidget {
    Q_OBJECT
public:
    explicit LoginWidget(QWidget *parent = 0);
    ~LoginWidget();

public slots:
    void lock();
    void unlock();
    void showState(QString);
    void readData(Preferences *pref);
    void writeData(Preferences *pref);

private slots:
    void clickedLogin();
    void getHost();

signals:
    void login();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::LoginWidget *ui;
};

#endif // LOGINWINDOW_H
