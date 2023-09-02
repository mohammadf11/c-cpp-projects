#include "newbankpage.h"
#include "information.h"
#include "login.h"

newbankpage::newbankpage(QWidget *parent) : QWidget(parent)
{
    lName_bank = new QLineEdit;
    lbranch = new QLineEdit;
    National_Code = new QLineEdit;
    National_Code->setPlaceholderText("کدملی");
    lCity = new QLineEdit;
    lusername = new QLineEdit;
    lpassword = new QLineEdit;
    lname = new QLineEdit;
    lfamily = new QLineEdit;
    leamil = new QLineEdit;
    lage = new QLineEdit;
    gender = new QComboBox;
    banklayout = new QVBoxLayout;
    managerlayout = new QVBoxLayout;
    bankinformationlayout = new QVBoxLayout;
    bankgroup = new QGroupBox("اطلاعات بانک");
    managergroup = new QGroupBox("اطلاعات مدیر اصلی بانک");

    lpassword->setEchoMode(QLineEdit::Password);

    bankgroup->setAlignment(Qt::AlignRight);
    managergroup->setAlignment(Qt::AlignRight);

    confirmation = new QPushButton("تاییداطلاعات");
    back = new QPushButton("صفحه قبل");
    forpush = new QHBoxLayout;
    lName_bank->setPlaceholderText("نام بانک");
    lbranch->setPlaceholderText("شماره شعبه بانک");

    lCity->setPlaceholderText("شهر بانک");

    lusername->setPlaceholderText("نام کاربری");
    lpassword->setPlaceholderText(" رمز");
    lname->setPlaceholderText("نام");
    lfamily->setPlaceholderText("نام خانوادگی");
    leamil->setPlaceholderText(" ایمیل");
    lage->setPlaceholderText(" سن");
    gender->addItem("مرد ");
    gender->addItem("زن ");
    gender->setStyleSheet("QComboBox {"
                          "   padding-left: 300px;"
                          "}");
    banklayout->addWidget(lName_bank);

    banklayout->addWidget(lCity);

    banklayout->addWidget(lbranch);

    managerlayout->addWidget(lname);
    managerlayout->addWidget(lfamily);
    managerlayout->addWidget(National_Code);
    managerlayout->addWidget(lusername);
    managerlayout->addWidget(lpassword);
    managerlayout->addWidget(leamil);
    managerlayout->addWidget(lage);
    managerlayout->addWidget(gender);
    bankgroup->setLayout(banklayout);
    managergroup->setLayout(managerlayout);
    bankinformationlayout->addWidget(bankgroup);
    bankinformationlayout->addWidget(managergroup);
    forpush->addWidget(confirmation);
    forpush->addWidget(back);

    bankinformationlayout->addLayout(forpush);
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");

    setLayout(bankinformationlayout);
    connect(confirmation, SIGNAL(clicked()), this, SLOT(check()));
    connect(back, SIGNAL(clicked()), this, SLOT(backpage()));
}
void newbankpage::backpage()
{
    login *login_page = new login;
    close();
    login_page->show();
}
void newbankpage::check()
{
    info.information_read();
    bool tmp = true;
    if (lname->text().length() * lfamily->text().length() * leamil->text().length() * National_Code->text().length() * lusername->text().length() * lpassword->text().length() * lage->text().length() * lName_bank->text().length() * lbranch->text().length() * lCity->text().length() == 0)
    {
        QMessageBox::warning(this, " ","پر کردن تمام اطلاعات اجباری می باشد.");
        tmp = false;
        show();
    }
    for (int i = 0; i < info.informationcustomer.size() && tmp; i++)
    {
        for (int j = 0; j < info.informationcustomer[i].Account.size(); j++)
        {
            QString str_username = QString::fromUtf8(info.informationcustomer[i].Account[j].get_Username().c_str());
            if (lusername->text() == str_username)
            {
                QMessageBox::warning(this, " ","نام کاربری قبلا انتخاب شده است . لطفا نام کاربری دیگری انتخاب کنید");
                tmp = false;
                break;
            }
        }
    }

    for (int i = 0; i < info.informationcustomer.size() && tmp; i++)
    {
        for (int j = 0; j < info.informationcustomer[i].Account.size(); j++)
        {
            QString str_email = QString::fromUtf8(info.informationcustomer[i].Account[j].get_Email().c_str());
            if (leamil->text() == str_email)
            {
                QMessageBox::warning(this, " ","ایمیل قبلا انتخاب شده است . لطفا ایمیل دیگری انتخاب کنید");
                tmp = false;
                break;
            }
        }
    }

    for (int i = 0; i < info.informationbank.size() && tmp; i++)
    {
        for (int j = 0; j < info.informationbank[i].manager.size(); j++)
        {

            QString str_username = QString::fromUtf8(info.informationbank[i].manager[j].get_Username().c_str());
            if (lusername->text() == str_username)
            {
                QMessageBox::warning(this, " ","نام کاربری قبلا انتخاب شده است . لطفا نام کاربری دیگری انتخاب کنید");
                tmp = false;
                break;
            }
        }
    }

    for (int i = 0; i < info.informationbank.size() && tmp; i++)
    {
        for (int j = 0; j < info.informationbank[i].manager.size(); j++)
        {
            QString str_email = QString::fromUtf8(info.informationbank[i].manager[j].get_Email().c_str());
            if (leamil->text() == str_email)
            {
                QMessageBox::warning(this, " ","ایمیل قبلا انتخاب شده است . لطفا ایمیل دیگری انتخاب کنید");
                tmp = false;
                break;
            }
        }
    }
    for (int i = 0; i < info.informationcustomer.size() && tmp; i++)
    {
            QString str_email = QString::fromUtf8(info.informationcustomer[i].Account[0].get_National_Code().c_str());
            if (National_Code->text() == str_email)
            {
                QMessageBox::warning(this, " ","کد ملی قبلا استفاده شده است");
                tmp = false;
                break;
            }
    }
    for (int i = 0; i < info.informationbank.size() && tmp; i++)
    {
        for (int j = 0; j < info.informationbank[i].manager.size(); j++)
        {
            QString str_email = QString::fromUtf8(info.informationbank[i].manager[j].get_National_Code().c_str());
            if (National_Code->text() == str_email)
            {
                QMessageBox::warning(this, " ","کد ملی قبلا استفاده شده است");
                tmp = false;
                break;
            }
        }
    }
    for (int i = 0; i < info.informationbank.size() && tmp; i++)
    {
        QString str_namebank = QString::fromUtf8(info.informationbank[i].manager[0].get_name_bank().c_str());
        QString str_branh = QString::fromUtf8(info.informationbank[i].manager[0].get_branch().c_str());
        QString str_city = QString::fromUtf8(info.informationbank[i].manager[0].get_City().c_str());
        if (str_namebank == lName_bank->text() && str_branh == lbranch->text() && str_city == lCity->text())
        {
            QMessageBox msgBox;
            msgBox.setText("این بانک در سامانه وجود دارد.\nبرای اضافه کردن مدیر جدید می توانید از قسمت اضافه کردن مدیر جدبد استفاده کنید");
            msgBox.exec();
            tmp = false;
            break;
        }
    }

    if (tmp == false)
        show();

    if (tmp)
    {
        bank _bank;
        manager _manager;
        info.informationbank.push_back(_bank);
        info.informationbank[info.informationbank.size() - 1].manager.push_back(_manager);
        info.informationbank[info.informationbank.size() - 1].manager[0].set_name(lname->text());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_Family(lfamily->text());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_National_Code(National_Code->text());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_Username(lusername->text());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_Password(lpassword->text());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_age(lage->text());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_gender(gender->currentText());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_Email(leamil->text());
        info.informationbank[info.informationbank.size() - 1].manager[0].set_City(lCity->text());

        info.informationbank[info.informationbank.size() - 1].manager[0].set_branch(lbranch->text());

        info.informationbank[info.informationbank.size() - 1].manager[0].set_name_bank(lName_bank->text());

        info.information_Write();
        close();
        login *login_page = new login;
        close();
        login_page->show();
    }
}
