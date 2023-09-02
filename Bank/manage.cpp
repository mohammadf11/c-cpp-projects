#include "manage.h"
#include"panelbankmanager.h"

manage_creat_account::manage_creat_account(QVector<Account> _Account, int n, int _id_bank_manager, int _id_manager)

{
    id = n;
    id_bank_manager = _id_bank_manager;
    id_manager = _id_manager;
    Accounts = _Account;
    QString str_name = QString::fromUtf8(Accounts[n].get_name().c_str());
    QString str_family = QString::fromUtf8(Accounts[n].get_Family().c_str());
    QString str_eamil = QString::fromUtf8(Accounts[n].get_Email().c_str());
    QString str_National_Code = QString::fromUtf8(Accounts[n].get_National_Code().c_str());
    QString str_age = QString::fromUtf8(Accounts[n].get_age().c_str());
    QString str_gender = QString::fromUtf8(Accounts[n].get_gender().c_str());
    QString str_Account_type = QString::fromUtf8(Accounts[n].get_Account_type().c_str());
    QString str_Bank_account_money = QString::number(Accounts[n].get_Bank_account_money());

    lname = new QLineEdit(str_name);
    lfamily = new QLineEdit(str_family);
    leamil = new QLineEdit(str_eamil);
    lNational_Code = new QLineEdit(str_National_Code);
    lage = new QLineEdit(str_age);
    lgender = new QLineEdit(str_gender);
    lAccount_type = new QLineEdit(str_Account_type);
    lBank_account_money = new QLineEdit(str_Bank_account_money);

    name = new QLabel("نام :");
    family = new QLabel("نام خانوادگی :");
    eamil = new QLabel("ایمیل :");
    National_Code = new QLabel("کد ملی :");
    age = new QLabel("سن :");
    gender = new QLabel("جنسیت :");
    Account_type = new QLabel("نوع حساب :");
    Bank_account_money = new QLabel("بودجه :");
    mainlayout = new QFormLayout;
    layout = new QVBoxLayout;

    mainlayout->addRow(lname, name);
    mainlayout->addRow(lfamily, family);
    mainlayout->addRow(lNational_Code, National_Code);
    mainlayout->addRow(leamil, eamil);
    mainlayout->addRow(lage, age);
    mainlayout->addRow(lgender, gender);
    mainlayout->addRow(lBank_account_money, Bank_account_money);
    mainlayout->addRow(lAccount_type, Account_type);
    accept = new QPushButton("موافقت با درخواست");
    Refuse = new QPushButton("مخالفت با درخواست");
    next = new QPushButton("درخواست بعدی");
    back = new QPushButton("درخواست قبلی");
    panel = new QPushButton("بازگشت به پنل مدیر");
    forpush = new QHBoxLayout;
    fornext_back = new QHBoxLayout;
    if (Accounts.size() == 1)
        fornext_back->addWidget(panel);
    else
    {
        if (n == 0)
        {
            fornext_back->addWidget(next);
            fornext_back->addWidget(panel);
        }
        else if (n == Accounts.size() - 1)
            fornext_back->addWidget(back);
        else
        {
            fornext_back->addWidget(next);
            fornext_back->addWidget(back);
        }
    }
    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    next->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    panel->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    accept->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    Refuse->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    forpush->addWidget(Refuse);
    forpush->addWidget(accept);
    layout->addLayout(mainlayout);
    layout->addLayout(forpush);
    layout->addLayout(fornext_back);

    setLayout(layout);
    lname->setAlignment(Qt::AlignRight);
    lfamily->setAlignment(Qt::AlignRight);
    leamil->setAlignment(Qt::AlignRight);
    lBank_account_money->setAlignment(Qt::AlignRight);
    lNational_Code->setAlignment(Qt::AlignRight);
    lage->setAlignment(Qt::AlignRight);

    connect(accept, SIGNAL(clicked()), this, SLOT(check_accept()));
    connect(Refuse, SIGNAL(clicked()), this, SLOT(check_Refuse()));
    connect(next, SIGNAL(clicked()), this, SLOT(check_next()));
    connect(back, SIGNAL(clicked()), this, SLOT(check_back()));
    connect(panel, SIGNAL(clicked()), this, SLOT(check_panel()));
    setGeometry(400,200,300,300);
}
void manage_creat_account::check_panel()
{
    close();
    panelbankmanager *panelpage = new panelbankmanager(id_bank_manager, id_manager);

    panelpage->show();
}

void manage_creat_account::check_back()
{

    close();
    manage_creat_account *page = new manage_creat_account(Accounts, id - 1, id_bank_manager, id_manager);
    page->show();
}
void manage_creat_account::check_next()
{
    close();
    manage_creat_account *page = new manage_creat_account(Accounts, id + 1, id_bank_manager, id_manager);
    page->show();
}
void manage_creat_account::check_accept()
{
    info.information_read();
    int max = info.informationcustomer[0].Account[0].get_account_number();
    for (int i = 0; i < info.informationcustomer.size(); i++)
    {
        for (int j = 0; j < info.informationcustomer[i].Account.size(); j++)
        {
            if (info.informationcustomer[i].Account[j].get_account_number() > max)

                max = info.informationcustomer[i].Account[j].get_account_number();
        }
    }
    Accounts[id].set_account_number(max + 1);
    Accounts[id].set_money(Accounts[id].get_Bank_account_money());


    time_t zaman = time(NULL);
    struct tm *locall = localtime(&zaman);
    Accounts[id].set_Opening_time(zaman);
    Accounts[id].set_string_Opening_time(asctime(locall));


    for (int i = 0; i < info.informationcustomer.size(); i++)
    {
        if (info.informationcustomer[i].Account[0].get_Username() == Accounts[id].get_Username())
        {
            info.informationcustomer[i].Account.push_back(Accounts[id]);
            break;
        }
    }
    for (int i = 0; i < info.Create_an_account.size(); i++)
    {
        if (Accounts[id] == info.Create_an_account[i])
        {
            info.Create_an_account.erase(info.Create_an_account.begin() + i);
            break;
        }
    }
    Accounts.erase(Accounts.begin() + id);
    info.information_Write();
    if (Accounts.size() == 0)
        check_panel();
    else
    {
        if (id == Accounts.size())
            check_back();

        else
        {
            close();
            manage_creat_account *page = new manage_creat_account(Accounts, id, id_bank_manager, id_manager);
            page->show();
        }
    }
}
void manage_creat_account::check_Refuse()
{
    info.information_read();
    for (int i = 0; i < info.Create_an_account.size(); i++)
    {
        if (Accounts[id] == info.Create_an_account[i]){
          info.Create_an_account.erase(info.Create_an_account.begin() + i);
          break;
        }
    }

    Accounts.erase(Accounts.begin() + id);
    info.information_Write();
    if (Accounts.size() == 0)
        check_panel();
    else
    {
        if (id == Accounts.size())
            check_back();

        else
        {
            close();
            manage_creat_account *page = new manage_creat_account(Accounts, id, id_bank_manager, id_manager);
            page->show();
        }
    }
}
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////
///////////////////////////////////

manage_loan::manage_loan(QVector<loan> _laon, int n, int _id_bank_manager, int _id_manager)

{
    id = n;
    id_bank_manager = _id_bank_manager;
    id_manager = _id_manager;
    loans = _laon;
     info.information_read();
    QString str_name = QString::fromUtf8(info.informationcustomer[loans[n].get_id_cumstomer()].Account[0].get_name().c_str());
    QString str_family = QString::fromUtf8(info.informationcustomer[loans[n].get_id_cumstomer()].Account[0].get_Family().c_str());
    QString str_National_Code = QString::fromUtf8(info.informationcustomer[loans[n].get_id_cumstomer()].Account[0].get_National_Code().c_str());
    QString str_Received_account_number = QString::number(loans[n].get_Received_account_number());
    QString str_Payment_account_number = QString::number(loans[n].get_Payment_account_number());
    QString str_Installment_period=QString::number(loans[n].get_Installment_period());
    QString str_budget = QString::number(loans[n].get_budget());

    lname = new QLineEdit(str_name);
    lfamily = new QLineEdit(str_family);
    lNational_Code = new QLineEdit(str_National_Code);
     lReceived_account_number = new QLineEdit(str_Received_account_number);
     lPayment_account_number = new QLineEdit(str_Payment_account_number);
     lInstallment_period = new QLineEdit(str_Installment_period);
     lbudget = new QLineEdit(str_budget);


    name = new QLabel("نام :");
    family = new QLabel("نام خانوادگی :");
    Received_account_number = new QLabel("شماره حساب پرداخت اقساط :");
    National_Code = new QLabel("کد ملی :");
    Payment_account_number = new QLabel("شماره حساب واریز شدن پول :");
    Installment_period = new QLabel("مدت زمان پرداخت اقساط :");
    budget = new QLabel("مبلغ درخواستی وام :");

    mainlayout = new QFormLayout;
    layout = new QVBoxLayout;

    mainlayout->addRow(lname, name);
    mainlayout->addRow(lfamily, family);
    mainlayout->addRow(lNational_Code, National_Code);
    mainlayout->addRow(lbudget, budget);
    mainlayout->addRow(lInstallment_period, Installment_period);
    mainlayout->addRow(lReceived_account_number, Received_account_number);
    mainlayout->addRow(lPayment_account_number, Payment_account_number);
    accept = new QPushButton("موافقت با درخواست");
    Refuse = new QPushButton("مخالفت با درخواست");
    next = new QPushButton("درخواست بعدی");
    back = new QPushButton("درخواست قبلی");
    panel = new QPushButton("بازگشت به پنل مدیر");
    forpush = new QHBoxLayout;
    fornext_back = new QHBoxLayout;
    if (loans.size() == 1)
    {
        fornext_back->addWidget(panel);
    }
    else
    {
        if (n == 0)
        {
            fornext_back->addWidget(next);
            fornext_back->addWidget(panel);
        }
        else if (n == loans.size() - 1)
            fornext_back->addWidget(back);
        else
        {
            fornext_back->addWidget(next);
            fornext_back->addWidget(back);
        }
    }
    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    next->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    panel->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    accept->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    Refuse->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    forpush->addWidget(Refuse);
    forpush->addWidget(accept);
    layout->addLayout(mainlayout);
    layout->addLayout(forpush);
    layout->addLayout(fornext_back);

    setLayout(layout);
    lname->setAlignment(Qt::AlignRight);
    lfamily->setAlignment(Qt::AlignRight);
    lNational_Code->setAlignment(Qt::AlignRight);
    lReceived_account_number->setAlignment(Qt::AlignRight);
    lPayment_account_number ->setAlignment(Qt::AlignRight);
    lInstallment_period ->setAlignment(Qt::AlignRight);
    lbudget ->setAlignment(Qt::AlignRight);


    connect(accept, SIGNAL(clicked()), this, SLOT(check_accept()));
    connect(Refuse, SIGNAL(clicked()), this, SLOT(check_Refuse()));
    connect(next, SIGNAL(clicked()), this, SLOT(check_next()));
    connect(back, SIGNAL(clicked()), this, SLOT(check_back()));
    connect(panel, SIGNAL(clicked()), this, SLOT(check_panel()));
    setGeometry(400,200,300,300);
}
void manage_loan::check_panel()
{

    close();
    panelbankmanager *panelpage = new panelbankmanager(id_bank_manager, id_manager);

    panelpage->show();
}

void manage_loan::check_back()
{

    close();
    manage_loan *page = new manage_loan(loans, id - 1, id_bank_manager, id_manager);
    page->show();
}
void manage_loan::check_next()
{
    close();
    manage_loan *page = new manage_loan(loans, id + 1, id_bank_manager, id_manager);
    page->show();
}
void manage_loan::check_accept()
{
    info.information_read();

    time_t zaman = time(NULL);
    struct tm *locall = localtime(&zaman);
    loans[id].set_Deposit_time(QString::number(zaman));
    loans[id].set_str_Deposit_time(asctime(locall));
    loans[id].set_Deposit_time_1(QString::number(zaman));
    info.informationcustomer[loans[id].get_id_cumstomer()].loans.push_back(loans[id]);
    for(int  i =0 ; i <info.informationcustomer[loans[id].get_id_cumstomer()].Account.size() ; i++ ){
        if(info.informationcustomer[loans[id].get_id_cumstomer()].Account[i].get_account_number() == loans[id].get_Received_account_number()){
            info.informationcustomer[loans[id].get_id_cumstomer()].Account[i].set_money(loans[id].get_budget() + info.informationcustomer[loans[id].get_id_cumstomer()].Account[i].get_money());
            break;
    }
}
    for (int i = 0; i < info.Apply_loan.size(); i++)
    {
        if (loans[id] == info.Apply_loan[i])
        {
          info.Apply_loan.erase(info.Apply_loan.begin() + i);
            break;
        }
    }

    loans.erase(loans.begin() + id);
    info.information_Write();
    if (loans.size() == 0)
        check_panel();
    else
    {
        if (id == loans.size())
            check_back();

        else
        {
            close();
            manage_loan *page = new manage_loan(loans, id, id_bank_manager, id_manager);
            page->show();
        }
    }
}
void manage_loan::check_Refuse()
{
    info.information_read();
    for (int i = 0; i < info.Apply_loan.size(); i++)
    {
        if (loans[id] == info.Apply_loan[i]){
       info.Apply_loan.erase(info.Apply_loan.begin() + i);
       break;

    }
    }

    loans.erase(loans.begin() + id);
    info.information_Write();
    if (loans.size() == 0)
        check_panel();
    else
    {
        if (id == loans.size())
            check_back();

        else
        {
            close();
            manage_loan *page = new manage_loan(loans, id, id_bank_manager, id_manager);
            page->show();
        }
    }
}
