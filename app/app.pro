


TEMPLATE = app
TARGET = release/QueTalk
QT += network xml core widgets gui


INCLUDEPATH += ../lib/qxmpp/src/client ../lib/qxmpp/src/base
#static linking qxmpp
QXMPP_LIB+=../lib/qxmpp/src/libqxmpp.a

LIBS += $$QXMPP_LIB
PRE_TARGETDEPS += $$QXMPP_LIB



# Input

RESOURCES = application.qrc

TRANSLATIONS = translations/qtalk_zh_CN.ts

SOURCES += main.cpp \
           MainWindow.cpp \
           ChatWindow.cpp \
           XmppMessage.cpp \
           RosterModel.cpp \
           UnreadMessageWindow.cpp \
           UnreadMessageModel.cpp \
           LoginWidget.cpp \
           PreferencesDialog.cpp \
           PrefAccount.cpp \
           Preferences.cpp \
           PrefWidget.cpp \
           PrefGeneral.cpp \
           CloseNoticeDialog.cpp \
           PrefChatWindow.cpp \
           MessageEdit.cpp \
           ContactInfoDialog.cpp \
           TransferManagerWindow.cpp \
           TransferManagerModel.cpp \
           AddContactDialog.cpp \
           InfoEventStackWidget.cpp \
           InfoEventSubscribeRequest.cpp
HEADERS += MainWindow.h \
           ChatWindow.h \
           XmppMessage.h \
           RosterModel.h  \
           UnreadMessageWindow.h \
           UnreadMessageModel.h \
           LoginWidget.h \
           PreferencesDialog.h \
           PrefAccount.h \
           Preferences.h \
           PrefWidget.h \
           PrefGeneral.h \
           CloseNoticeDialog.h \
           PrefChatWindow.h \
           MessageEdit.h \
           ContactInfoDialog.h \
           TransferManagerWindow.h \
           TransferManagerModel.h \
           AddContactDialog.h \
           InfoEventStackWidget.h \
           InfoEventSubscribeRequest.h
FORMS   += MainWindow.ui \
           UnreadMessageWindow.ui \
           LoginWidget.ui \
           ChatWindow.ui \
           PreferencesDialog.ui \
           PrefAccount.ui \
           PrefGeneral.ui \
           CloseNoticeDialog.ui \
           PrefChatWindow.ui \
           ContactInfoDialog.ui \
           TransferManagerWindow.ui \
           AddContactDialog.ui \
           InfoEventStackWidget.ui \
           InfoEventSubscribeRequest.ui

!isEmpty(TRANSLATIONS) {
  isEmpty(QMAKE_LRELEASE) {
    win32:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]\lrelease.exe
    else:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]/lrelease
 }
  isEmpty(TS_DIR):TS_DIR = translations
  TSQM.name = lrelease ${QMAKE_FILE_IN}
  TSQM.input = TRANSLATIONS
  TSQM.output = $$TS_DIR/${QMAKE_FILE_BASE}.qm
  TSQM.commands = $$QMAKE_LRELEASE ${QMAKE_FILE_IN}
  TSQM.CONFIG = no_link
  QMAKE_EXTRA_COMPILERS += TSQM
  PRE_TARGETDEPS += compiler_TSQM_make_all
} else:message(No translation files in project)
