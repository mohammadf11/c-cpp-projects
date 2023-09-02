#include "customerinformation.h"
#include <string>
#include <qmessagebox.h>
#include "information.h"
#include "login.h"

customerinformation::customerinformation(QWidget *parent) : QWidget(parent)
{

    customerinfo = new QGroupBox("اطلاعات کاربر");

    customerinfo->setAlignment(Qt::AlignRight);

    National_Code = new QLineEdit;

    National_Code->setPlaceholderText("کدملی");

    customerbanklayout = new QVBoxLayout;

    confirmation = new QPushButton("تایید اطلاعات");
    back = new QPushButton("صفحه قبل");
    forpush = new QHBoxLayout;
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");

    lusername = new QLineEdit;
    lpassword = new QLineEdit;
    lname = new QLineEdit;
    lfamily = new QLineEdit;
    leamil = new QLineEdit;
    lage = new QLineEdit;
    gender = new QComboBox;
    main_layout = new QVBoxLayout;
    pagecustomerinformationlayout = new QVBoxLayout;

    lusername->setPlaceholderText("نام کاربری");
    lpassword->setPlaceholderText(" رمز");
    lname->setPlaceholderText("نام");
    lfamily->setPlaceholderText(" خانوادگی");
    leamil->setPlaceholderText("ایمیل");
    lage->setPlaceholderText(" سن");

    gender->addItem("مرد");
    gender->addItem("زن");
    gender->setStyleSheet("QComboBox {"
                          "   padding-left: 300px;"
                          "}");
    pagecustomerinformationlayout->addWidget(lname);
    pagecustomerinformationlayout->addWidget(lfamily);
    pagecustomerinformationlayout->addWidget(National_Code);

    pagecustomerinformationlayout->addWidget(lusername);
    pagecustomerinformationlayout->addWidget(lpassword);
    pagecustomerinformationlayout->addWidget(leamil);
    pagecustomerinformationlayout->addWidget(lage);
    pagecustomerinformationlayout->addWidget(gender);

    lpassword->setEchoMode(QLineEdit::Password);
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");

    customerinfo->setLayout(pagecustomerinformationlayout);
    main_layout->addWidget(customerinfo);
    forpush->addWidget(confirmation);
    forpush->addWidget(back);

    main_layout->addLayout(forpush);
    setLayout(main_layout);
    setGeometry(300, 200, 200, 420);

    connect(confirmation, SIGNAL(clicked()), this, SLOT(check()));
    connect(back, SIGNAL(clicked()), this, SLOT(backpage()));
}
void customerinformation::backpage()
{
    login *login_page = new login;
    close();
    login_page->show();
}
void customerinformation::check()
{
    info.information_read();

    bool tmp = true;
    if (lname->text().length() * lfamily->text().length() * leamil->text().length() * National_Code->text().length() * lusername->text().length() * lpassword->text().length() * lage->text().length() == 0)
    {
        QMessageBox::warning(this, " ","پر کردن تمام اطلاعات اجباری می باشد.");
        tmp = false;
    }

    for (int i = 0; i < info.informationcustomer.size() && tmp; i++)
    {

            QString str_username = QString::fromUtf8(info.informationcustomer[i].Account[0].get_Username().c_str());
            if (lusername->text() == str_username)
            {
                QMessageBox::warning(this, " ","نام کاربری قبلا انتخاب شده است . لطفا نام کاربری دیگری انتخاب کنید");
                tmp = false;
                break;
            }

    }

    for (int i = 0; i < info.informationcustomer.size() && tmp; i++)
    {
            QString str_email = QString::fromUtf8(info.informationcustomer[i].Account[0].get_Email().c_str());
            if (leamil->text() == str_email)
            {
                QMessageBox::warning(this, " ","ایمیل قبلا انتخاب شده است . لطفا ایمیل دیگری انتخاب کنید");
                tmp = false;
                break;
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

    if (tmp == false)
    {
        show();
    }

    if (tmp)
    {
        customer _custmer;
        Account _Account;
        info.informationcustomer.push_back(_custmer);
        info.informationcustomer[info.informationcustomer.size() - 1].Account.push_back(_Account);
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_name(lname->text());

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Family(lfamily->text());
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_National_Code(National_Code->text());
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Username(lusername->text());
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Password(lpassword->text());
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_age(lage->text());
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_gender(gender->currentText());
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Email(leamil->text());
        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_City("0");

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_branch("0");

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_name_bank("0");

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Account_type("0");
        time_t zaman = time(NULL);
        struct tm *locall = localtime(&zaman);


        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Opening_time(zaman);

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_string_Opening_time(asctime(locall));

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Bank_account_money("0");

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_Interest_Rates("0");

        info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_money(0);


        if (info.informationcustomer.size() == 1)
            info.informationcustomer[0].Account[0].set_account_number(0);
        else
        {
            int max = info.informationcustomer[0].Account[0].get_account_number();
            for (int i = 0; i < info.informationcustomer.size() - 1; i++)
            {
                for (int j = 0; j < info.informationcustomer[i].Account.size(); j++)
                {
                    if (info.informationcustomer[i].Account[j].get_account_number() > max)
                    {
                        max = info.informationcustomer[i].Account[j].get_account_number();
                    }
                }
            }
            info.informationcustomer[info.informationcustomer.size() - 1].Account[0].set_account_number(max + 1);
        }

        info.information_Write();

        close();
        login *login_page = new login;
        close();
        login_page->show();
    }
}
