QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 console

INCLUDEPATH += C:\boost_1_76_0




# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    apply_for_a_loan_page.cpp \
    bank.cpp \
    customer.cpp \
    customerinformation.cpp \
    information.cpp \
    login.cpp \
    main.cpp \
    manage.cpp \
    money_transfer_page.cpp \
    newaccount.cpp \
    newbankpage.cpp \
    newmanager.cpp \
    panelbankmanager.cpp \
    panelcustomer.cpp \
    person.cpp \
    visit_account.cpp

HEADERS += \
    apply_for_a_loan_page.h \
    bank.h \
    customer.h \
    customerinformation.h \
    information.h \
    login.h \
    manage.h \
    money_transfer_page.h \
    newaccount.h \
    newbankpage.h \
    newmanager.h \
    panelbankmanager.h \
    panelcustomer.h \
    person.h \
    visit_account.h

FORMS += \
    login.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
