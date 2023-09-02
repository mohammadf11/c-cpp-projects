#include "login.h"
#include "newmanager.h"
#include "customerinformation.h"
#include "panelcustomer.h"
#include "panelbankmanager.h"
#include "information.h"
#include "newbankpage.h"
login::login(QWidget *parent) : QWidget(parent)
{
    info.information_read();

    for(int i= 0 ;  i < info.informationcustomer.size() ; i++){
        for(int j = 0 ; j < info.informationcustomer[i].Account.size() ;j++){
            info.informationcustomer[i].Account[j].get_money();        }
    }
    info.information_Write();
    ok = new QPushButton("ورود");
    customerpush = new QPushButton("ثبت نام مشتری");
    addmanager = new QPushButton("اضافه کردن مدیر جدید");
    addbank = new QPushButton("اضافه کردن بانک جدید ");
    leduse = new QLineEdit();
    ledpas = new QLineEdit;
    page1layout = new QGridLayout;

    leduse->setPlaceholderText("نام کاربری ");
    ledpas->setPlaceholderText("رمز ");
    page1layout->addWidget(leduse, 3, 2);
    page1layout->addWidget(ledpas, 4, 2);

    page1layout->addWidget(ok, 5, 2);
    ok->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    customerpush->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    addmanager->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    addbank->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");

    page1layout->addWidget(customerpush, 6, 2);
    page1layout->addWidget(addmanager, 7, 2);
    page1layout->addWidget(addbank, 8, 2);
    ledpas->setEchoMode(QLineEdit::Password);
    setLayout(page1layout);
   setGeometry(400, 200, 300, 280);

    connect(ok, SIGNAL(clicked()), this, SLOT(check()));
    connect(customerpush, SIGNAL(clicked()), this, SLOT(pagecustomerinformation()));
    connect(addmanager, SIGNAL(clicked()), this, SLOT(pagenewmanager()));
    connect(addbank, SIGNAL(clicked()), this, SLOT(addbankpage()));
}
//***************************************
//***************************************
void login::addbankpage()
{
    newbankpage *newpage = new newbankpage;
    newpage->show();
    close();
}
void login::check()
{
    info.information_read();
    bool tmp = false;
    for (int i = 0; i < info.informationbank.size() && !tmp; i++)
    {
        for (int j = 0; j < info.informationbank[i].manager.size(); j++)
        {
            QString str_username = QString::fromUtf8(info.informationbank[i].manager[j].get_Username().c_str());
            QString str_password = QString::fromUtf8(info.informationbank[i].manager[j].get_Password().c_str());

            if (str_username == leduse->text() && str_password == ledpas->text())
            {
                tmp = true;
                close();
                panelbankmanager *newpage = new panelbankmanager(i, j);
                newpage->show();

                tmp = true;
            }
        }
    }
 int m  = 1 ;
    for (int i = 0; i < info.informationcustomer.size() && !tmp; i++)
    {
        QString str_username = QString::fromUtf8(info.informationcustomer[i].Account[0].get_Username().c_str());
        QString str_password = QString::fromUtf8(info.informationcustomer[i].Account[0].get_Password().c_str());

        if (str_username == leduse->text() && str_password == ledpas->text())
        {
            info.file_block_user_read();
            for(int j = 0 ; j < info.user_blocks.size() ; j++){
                if(info.user_blocks[j] == i){

                  m = 0 ;
                    QMessageBox::warning(this, " ","حساب شما مسدود میباشد. لطفا به بانک مراجه کنید.");
                    leduse->setText("");
                    ledpas->setText("");


                }
            }
            if(m){

            panelcustomer *newpage = new panelcustomer(i);
            newpage->show();
            close();
            tmp = true;
        }
        }

    }
    if(m){
    if (!tmp)
      QMessageBox::warning(this, " ","نام کاربری یا رمز عبور شما صحیح نمیباشد.");
    }

}
//***************************************
//***************************************
void login::pagecustomerinformation()
{
    customerinformation *_pagecustomerinformation = new customerinformation;
    _pagecustomerinformation->show();
    close();
}
void login::pagenewmanager()
{
    newmanager *_newmanager = new newmanager;
    _newmanager->show();
    close();
}
