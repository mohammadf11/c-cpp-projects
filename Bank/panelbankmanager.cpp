#include "panelbankmanager.h"
#include "login.h"
#include "manage.h"

panelbankmanager::panelbankmanager(int n, int m)
{
    idn = n;
    idm = m;
    back = new QPushButton("صفحه قبل");
    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    loan_push = new QPushButton("مدیریت درخواست وام");
    manageaccount = new QPushButton("مدیریت درخواست ایجاد حساب ها");
    layout = new QVBoxLayout;
    loan_push->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    manageaccount->setStyleSheet("QPushButton:enabled { background-color: rgb(51,153,255); }\n");
    layout->addWidget(manageaccount);
    layout->addWidget(loan_push);

    layout->addWidget(back);
    setLayout(layout);
    setGeometry(300, 200, 300, 280);
    connect(back, SIGNAL(clicked()), this, SLOT(backpage()));
    connect(manageaccount, SIGNAL(clicked()), this, SLOT(check_creat()));
    connect(loan_push, SIGNAL(clicked()), this, SLOT(ckeck_loan()));
}
void panelbankmanager::backpage()
{
    login *login_page = new login;
    close();
    login_page->show();
}
void panelbankmanager::check_creat()
{
    info.information_read();
    QVector<Account> _Account;

    bool tmp = true;
    for (int i = 0; i < info.Create_an_account.size(); i++)
    {
        if (info.informationbank[idn].manager[0].get_City() == info.Create_an_account[i].get_City() && info.informationbank[idn].manager[0].get_name_bank() == info.Create_an_account[i].get_name_bank() && info.informationbank[idn].manager[0].get_branch() == info.Create_an_account[i].get_branch())
        {
            _Account.push_back(info.Create_an_account[i]);
            tmp = false;
        }
    }
    if (tmp)

        QMessageBox::warning(this, " ","در خواستی وجود ندارد");

    else
    {
        close();
        manage_creat_account *page = new manage_creat_account(_Account, 0, idn, idm);
        page->show();
    }
}
void panelbankmanager::ckeck_loan(){
    info.information_read();
    QVector<loan> _loan;

    bool tmp = true;
    for (int i = 0; i < info.Apply_loan.size(); i++)
    {
        if (info.informationbank[idn].manager[0].get_City() == info.Apply_loan[i].get_City() && info.informationbank[idn].manager[0].get_name_bank() == info.Apply_loan[i].get_name_bank() && info.informationbank[idn].manager[0].get_branch() == info.Apply_loan[i].get_branch())
        {
            _loan.push_back(info.Apply_loan[i]);
            tmp = false;
        }
    }
    if (tmp)
        QMessageBox::warning(this, " ","در خواستی وجود ندارد");

    else
    {
        close();
        manage_loan *page = new manage_loan(_loan, 0, idn, idm);
        page->show();
    }

}
