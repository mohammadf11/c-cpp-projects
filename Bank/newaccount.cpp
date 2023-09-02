#include "newaccount.h"
#include "information.h"
#include "panelcustomer.h"



newaccount::newaccount(int n)
{
    id = n;
    Accountinfo = new QGroupBox("اطلاعات حساب"); //ا
    Accountinfo->setAlignment(Qt::AlignRight);
    lName_bank = new QLineEdit;
    lbranch = new QLineEdit;
    lCity = new QLineEdit;
    budget = new QLineEdit;

    lName_bank->setPlaceholderText("نام بانک");
    lbranch->setPlaceholderText("شماره شعبه بانک");
    lCity->setPlaceholderText("شهر بانک");
    budget->setPlaceholderText("بودجه");
    back = new QPushButton("صفحه قبل");

    Accountlayout = new QVBoxLayout;

    confirmation = new QPushButton("تایید اطلاعات");
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    Accountt = new QComboBox;
    Accounttype = new QGroupBox;
    Accounttype->setTitle("نوع حساب");
    Accountt->addItem("حساب کوتاه مدت");
    Accountt->addItem("حساب بلند مدت");
    Accountt->addItem("حساب ویژه");
    Accountt->setStyleSheet("QComboBox {"
                            "   padding-left: 195px;"
                            "}");
    typeaccountlayout = new QVBoxLayout;
    typeaccountlayout->addWidget(Accountt);
    Accounttype->setLayout(typeaccountlayout);

    Accountlayout->addWidget(lName_bank);
    Accountlayout->addWidget(lCity);
    Accountlayout->addWidget(lbranch);
    Accountlayout->addWidget(budget);
    forpush = new QHBoxLayout;
    forpush->addWidget(confirmation);
    forpush->addWidget(back);


    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");

    Accounttype->setAlignment(Qt::AlignRight);
    Accounttype->setMaximumSize(QSize(320, 60));
    Accountlayout->addWidget(Accounttype);
    main_layout = new QVBoxLayout;
    pagecustomerinformationlayout = new QVBoxLayout;

    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    Accountinfo->setLayout(Accountlayout);
    main_layout->addWidget(Accountinfo);
    main_layout->addLayout(forpush);
    setLayout(main_layout);
    setGeometry(400, 200, 300, 300);

    connect(confirmation, SIGNAL(clicked()), this, SLOT(check()));
    connect(back, SIGNAL(clicked()), this, SLOT(backpage()));
}
void newaccount::backpage()
{
    panelcustomer *back_page = new panelcustomer(id);
    close();
    back_page->show();
}
void newaccount::check()
{
    info.information_read();
    bool tmp = true;
    if (lCity->text().length() * lbranch->text().length() * lName_bank->text().length() * budget->text().length() == 0)
    {
        QMessageBox::warning(this, " ","پر کردن تمام اطلاعات اجباری می باشد.");
        tmp = false;
        show();
    }

    if (info.informationbank.size() == 0 && tmp)
    {
        QMessageBox::warning(this, " ","چنین بانکی در سامانه وجود ندارد");
        tmp = false;
    }
    for (int i = 0; i < info.informationbank.size() && tmp; i++)
    {
        QString str_namebank = QString::fromUtf8(info.informationbank[i].manager[0].get_name_bank().c_str());
        QString str_branh = QString::fromUtf8(info.informationbank[i].manager[0].get_branch().c_str());
        QString str_city = QString::fromUtf8(info.informationbank[i].manager[0].get_City().c_str());
        if (str_namebank == lName_bank->text() && str_branh == lbranch->text() && str_city == lCity->text())
            break;
        else
        {
            if (info.informationbank.size() - 1 == i)
            {
                QMessageBox::warning(this, " ","چنین بانکی در سامانه وجود ندارد");
                tmp = false;
                break;
            }
        }
    }

    if (tmp == false)
        show();

    if (tmp)
    {
        info.information_read();

        Account _Account;
        _Account.set_name(QString::fromUtf8(info.informationcustomer[id].Account[0].get_name().c_str()));

        _Account.set_Family(QString::fromUtf8(info.informationcustomer[id].Account[0].get_Family().c_str()));
        _Account.set_National_Code(QString::fromUtf8(info.informationcustomer[id].Account[0].get_National_Code().c_str()));
        _Account.set_Username(QString::fromUtf8(info.informationcustomer[id].Account[0].get_Username().c_str()));
        _Account.set_Password(QString::fromUtf8(info.informationcustomer[id].Account[0].get_Password().c_str()));
        _Account.set_age(QString::fromUtf8(info.informationcustomer[id].Account[0].get_age().c_str()));
        _Account.set_gender(QString::fromUtf8(info.informationcustomer[id].Account[0].get_gender().c_str()));
        _Account.set_Email(QString::fromUtf8(info.informationcustomer[id].Account[0].get_Email().c_str()));
        _Account.set_City(lCity->text());

        _Account.set_branch(lbranch->text());

        _Account.set_name_bank(lName_bank->text());

        _Account.set_Account_type(Accountt->currentText());

        _Account.set_Opening_time(0);

        _Account.set_string_Opening_time("0\n");

        _Account.set_Bank_account_money(budget->text());


        if (Accountt->currentText() == "حساب کوتاه مدت")
            _Account.set_Interest_Rates("10");

        else if (Accountt->currentText() == "حساب بلند مدت")
            _Account.set_Interest_Rates("30");

        else
            _Account.set_Interest_Rates("50");

        _Account.set_money(0);




        info.Create_an_account.push_back(_Account);
        info.information_Write();

        backpage();
    }
}
