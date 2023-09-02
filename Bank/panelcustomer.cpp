#include "panelcustomer.h"
#include "information.h"
#include "login.h"
#include "newaccount.h"
#include"apply_for_a_loan_page.h"
#include "money_transfer_page.h"
#include "visit_account.h"

panelcustomer::panelcustomer(int n)
{
    id = n;
    info.information_read();
    account_page = new QPushButton("مشاهده ی حساب ها");
    Money_transfer = new QPushButton("انتقال وجه");
    back = new QPushButton("صفحه قبل");
    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    addaccount = new QPushButton("باز کردن حساب جدید");
    loans = new QPushButton("درخواست وام");
    layout = new QVBoxLayout;
    loans->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    addaccount->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    Money_transfer->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    account_page->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    layout->addWidget(addaccount);
    layout->addWidget(loans);
    layout->addWidget(Money_transfer);
    layout->addWidget(account_page);
    layout->addWidget(back);
    setLayout(layout);

    setGeometry(300, 200, 300, 280);
    connect(back, SIGNAL(clicked()), this, SLOT(backpage()));
    connect(addaccount, SIGNAL(clicked()), this, SLOT(addaccountpage()));
    connect(loans, SIGNAL(clicked()), this, SLOT(Apply_for_a_loan()));
     connect(Money_transfer, SIGNAL(clicked()), this, SLOT(Money_transfer_page_()));
     connect(account_page, SIGNAL(clicked()), this, SLOT(visit()));
     setGeometry(400,200,350,350);
}
void panelcustomer::visit(){

    if(info.informationcustomer[id].Account.size() == 1){
        QMessageBox::warning(this,"  ", "حسابی وجود ندارد" );
    }
    else{
        close();
    visit_account *page = new visit_account(id , 1);
    page->show();
    }
}
void panelcustomer::backpage()
{
    login *login_page = new login;
    close();
    login_page->show();
}
void panelcustomer::addaccountpage()
{
    newaccount *accountpage = new newaccount(id);
    accountpage->show();
    close();
}
void panelcustomer::Apply_for_a_loan(){
    Apply_for_a_loan_page *loan_page = new Apply_for_a_loan_page(id);
    loan_page->show();
    close();

}
void panelcustomer::Money_transfer_page_(){
    close();
    Money_transfer_page *page = new Money_transfer_page(id);
    page->show();
}
