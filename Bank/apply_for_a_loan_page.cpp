
#include "apply_for_a_loan_page.h"
#include"information.h"
#include"panelcustomer.h"

Apply_for_a_loan_page::Apply_for_a_loan_page(int n)
{
    id = n;
    loaninfo = new QGroupBox("اطلاعات وام");
    loaninfo->setAlignment(Qt::AlignRight);
    lName_bank = new QLineEdit;
    lbranch = new QLineEdit;
    lCity = new QLineEdit;
    budget = new QLineEdit;
    lReceived_account_number = new QLineEdit ;
    lPayment_account_number = new QLineEdit;


    lName_bank->setPlaceholderText("نام بانک");
    lbranch->setPlaceholderText("شماره شعبه بانک");
    lCity->setPlaceholderText("شهر بانک");
    budget->setPlaceholderText("مبلغ وام");
    lReceived_account_number->setPlaceholderText("شماره حساب واریز شدن پول");
    lPayment_account_number->setPlaceholderText("شماره حساب پرداخت اقساط ");
    back = new QPushButton(" صفحه قبل");
    loanlayout = new QVBoxLayout;
    confirmation = new QPushButton("تایید اطلاعات");
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    time = new QComboBox;
    typeloan = new QGroupBox;
    typeloan->setTitle("نوع وام");
    time->addItem("شش ماهه");
    time->addItem("یک ساله");
    time->addItem("دو ساله");
    time->addItem("پنج ساله");
    time->addItem("ده ساله");
    time->setStyleSheet("QComboBox {"
                            "   padding-left: 195px;"
                            "}");
    typeloanlayout = new QVBoxLayout;
    typeloanlayout->addWidget(time);
    typeloan->setLayout(typeloanlayout);

    loanlayout->addWidget(lName_bank);
    loanlayout->addWidget(lCity);
    loanlayout->addWidget(lbranch);
    loanlayout->addWidget(budget);
    loanlayout->addWidget(lReceived_account_number);
    loanlayout->addWidget(lPayment_account_number);
    forpush = new QHBoxLayout;
    forpush->addWidget(confirmation);
    forpush->addWidget(back);


    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");

    typeloan->setAlignment(Qt::AlignRight);
    typeloan->setMaximumSize(QSize(320, 60));
    loanlayout->addWidget(typeloan);
    main_layout = new QVBoxLayout;
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    loaninfo->setLayout(loanlayout);
    main_layout->addWidget(loaninfo);
    main_layout->addLayout(forpush);
    setLayout(main_layout);
    setGeometry(400, 200, 300, 300);

    connect(confirmation, SIGNAL(clicked()), this, SLOT(check()));
    connect(back, SIGNAL(clicked()), this, SLOT(backpage()));

}
void Apply_for_a_loan_page::check(){
    info.information_read();
    bool tmp = true;
    if (lCity->text().length() * lbranch->text().length() * lName_bank->text().length() * lReceived_account_number->text().length() * lPayment_account_number->text().length()*budget->text().length() == 0)
    {
        QMessageBox::warning(this, " ","پر کردن تمام اطلاعات اجباری می باشد.");
        tmp = false;
    }

    if (info.informationbank.size() == 0 && tmp)
    {
        QMessageBox::warning(this,"  ", "چنین بانکی در سامانه وجود ندارد.");
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
                QMessageBox::warning(this,"  ", "چنین بانکی در سامانه وجود ندارد." );
                tmp = false;
                break;
            }
        }
    }
    int tmp1 = 0 ,tmp2 = 0;
    for(int i = 1 ;  i < info.informationcustomer[id].Account.size()&&tmp ; i++){

        if(info.informationcustomer[id].Account[i].get_account_number() == lReceived_account_number->text().toInt())
        tmp1 = 1;
         if(info.informationcustomer[id].Account[i].get_account_number() == lPayment_account_number->text().toInt())
         tmp2 =1;
    }
    if(!(tmp1 * tmp2) && tmp){
        QMessageBox::warning(this,"  ", "شماره حساب وارد شده صحیح نمی باشد."  );
        tmp = false;
    }
    for(int  i = 0 ; i < info.Apply_loan.size()&&tmp; i++){
        QString str_namebank = QString::fromUtf8(info.Apply_loan[i].get_name_bank().c_str());
        QString str_branh = QString::fromUtf8(info.Apply_loan[i].get_branch().c_str());
        QString str_city = QString::fromUtf8(info.Apply_loan[i].get_City().c_str());
        if(str_city == lCity->text() && str_branh == lbranch->text() && str_namebank == lName_bank->text() ){
            tmp = false;
            QMessageBox::warning(this,"  ", "شما از این بانک قبلا درخواست وام کرده اید.");
        }


    }
    for(int i = 0 ; i < info.informationcustomer[id].loans.size() && tmp; i++){
    QString str_namebank = QString::fromUtf8(info.informationcustomer[id].loans[i].get_name_bank().c_str());
    QString str_branh = QString::fromUtf8(info.informationcustomer[id].loans[i].get_branch().c_str());
    QString str_city = QString::fromUtf8(info.informationcustomer[id].loans[i].get_City().c_str());
    if(str_city == lCity->text() && str_branh == lbranch->text() && str_namebank == lName_bank->text() ){
        tmp = false;
        QMessageBox::warning(this,"  ", "شما در حال حاضر از این بانک  یک وام دارید. ");
         }
     }


    if (tmp == false)
        show();

    else{
        loan _loan;
        _loan.set_City(lCity->text());
        _loan.set_name_bank(lName_bank->text());
        _loan.set_branch(lbranch->text());
        _loan.set_Payment_account_number(lPayment_account_number->text());
        _loan.set_Received_account_number(lReceived_account_number->text());
        _loan.set_budget(budget->text());

        if(time->currentText() == "شش ماهه")
        _loan.set_Installment_period("6");

        else if(time->currentText() == "یک ساله")
        _loan.set_Installment_period("12");

       else if(time->currentText() == "دو ساله")
        _loan.set_Installment_period("24");

        else if(time->currentText() == "پنج ساله")
        _loan.set_Installment_period("60");

        else if(time->currentText() == "ده ساله")
        _loan.set_Installment_period("120");


        _loan.set_id_cumstomer(QString::number(id));
        _loan.set_Deposit_time("0");
        _loan.set_str_Deposit_time("0");
        info.Apply_loan.push_back(_loan);
        info.information_Write();
        close();
        backpage();

    }

}
void Apply_for_a_loan_page::backpage()
{
    panelcustomer *back_page = new panelcustomer(id);
    close();
    back_page->show();
}
