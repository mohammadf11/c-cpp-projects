#include "visit_account.h"
#include"information.h"
#include "panelcustomer.h"

visit_account::visit_account(int n , int m)
{
    id = n;
    id_account = m;
    info.information_read();
    QString str_name = QString::fromUtf8(info.informationcustomer[n].Account[m].get_name().c_str());
    QString str_family = QString::fromUtf8(info.informationcustomer[n].Account[m].get_Family().c_str());
    QString str_eamil = QString::fromUtf8(info.informationcustomer[n].Account[m].get_Email().c_str());
    QString str_National_Code = QString::fromUtf8(info.informationcustomer[n].Account[m].get_National_Code().c_str());
    QString str_age = QString::fromUtf8(info.informationcustomer[n].Account[m].get_age().c_str());
    QString str_gender = QString::fromUtf8(info.informationcustomer[n].Account[m].get_gender().c_str());
    QString str_Account_type = QString::fromUtf8(info.informationcustomer[n].Account[m].get_Account_type().c_str());
    QString str_Bank_account_money = QString::number(info.informationcustomer[n].Account[m].get_money());
    QString str_acount_num = QString::number(info.informationcustomer[n].Account[m].get_account_number());

    lname = new QLineEdit(str_name);
    lfamily = new QLineEdit(str_family);
    leamil = new QLineEdit(str_eamil);
    lNational_Code = new QLineEdit(str_National_Code);
    lage = new QLineEdit(str_age);
    lgender = new QLineEdit(str_gender);
    lAccount_type = new QLineEdit(str_Account_type);
    lBank_account_money = new QLineEdit(str_Bank_account_money);
    laccount_num = new QLineEdit(str_acount_num);

    name = new QLabel("نام :");
    family = new QLabel("نام خانوادگی :");
    eamil = new QLabel("ایمیل :");
    National_Code = new QLabel("کد ملی :");
    age = new QLabel("سن :");
    gender = new QLabel("جنسیت :");
    Account_type = new QLabel("نوع حساب :");
    Bank_account_money = new QLabel("بودجه :");
    account_num = new QLabel("شماره حساب");
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
    mainlayout->addRow(laccount_num ,account_num );
    next = new QPushButton(" بعدی");
    back = new QPushButton(" قبلی");
    panel = new QPushButton("بازگشت به پنل مدیر");
    forpush = new QHBoxLayout;
    fornext_back = new QHBoxLayout;
    if (info.informationcustomer[n].Account.size() == 2)
        fornext_back->addWidget(panel);
    else
    {
        if (m == 1)
        {
            fornext_back->addWidget(next);
            fornext_back->addWidget(panel);
        }
        else if (m == info.informationcustomer[n].Account.size() - 1)
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
    laccount_num->setAlignment(Qt::AlignRight);

    connect(next, SIGNAL(clicked()), this, SLOT(check_next()));
    connect(back, SIGNAL(clicked()), this, SLOT(check_back()));
    connect(panel, SIGNAL(clicked()), this, SLOT(check_panel()));
    setGeometry(400,200,300,300);

}
void visit_account::check_panel()
{
    close();
    panelcustomer *panelpage = new panelcustomer(id);
    panelpage->show();
}

void visit_account::check_back()
{

    close();
    visit_account *page = new visit_account(id , id_account  - 1);
    page->show();
}
void visit_account::check_next()
{
    close();
    visit_account *page = new visit_account(id , id_account + 1);
    page->show();
}
