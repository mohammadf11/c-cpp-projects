#include "money_transfer_page.h"
#include"information.h"
#include "panelcustomer.h"

Money_transfer_page::Money_transfer_page(int n )
{

    id = n ;
    forpush = new QHBoxLayout;
    confirmation = new QPushButton ;
    back = new QPushButton ;
    lAccount1 = new QLineEdit;
    lAccount2 = new QLineEdit;
    lmoney = new QLineEdit;
    group = new QGroupBox;
    layout = new QVBoxLayout;
    back = new QPushButton("صفحه قبل");
    confirmation = new QPushButton("تایید اطلاعات");
    back->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");


    lAccount1->setPlaceholderText(" شماره حساب واریز کننده وجه");
    lAccount2->setPlaceholderText(" شماره حساب دریافت کننده وجه");
    lmoney->setPlaceholderText("مبلغ وجه ");


    forpush->addWidget(confirmation);
    forpush->addWidget(back);

    layout->addWidget(lAccount1);
    layout->addWidget(lAccount2);
    layout->addWidget(lmoney);
    layout->addLayout(forpush);
    setLayout(layout);
   connect(confirmation , SIGNAL(clicked()) , this , SLOT(check_info()));
   connect(back , SIGNAL(clicked()) , this , SLOT(backpage()));
   setGeometry(400 ,200 , 300, 300);



}
void Money_transfer_page::check_info(){
    info.information_read();
    bool tmp = true;
    int  id_account;
    int id_account_2;
    int id_customer_2;
    if(lAccount1->text().length() * lAccount2->text().length() * lmoney->text().length() == 0){
        tmp  = false;
        QMessageBox::warning(this, " "," لطفا تمام اطلاعات را کامل کنید");
    }
    if(lAccount1->text() == lAccount2->text() && tmp){
        tmp = false;
         QMessageBox::warning(this, " "," دو شماره حساب مشابه اند .این کار مجاز نیست");
    }
    for(int i = 0 ; i < info.informationcustomer[id].Account.size()&& tmp ; i++){
        if(lAccount1->text().toInt() == info.informationcustomer[id].Account[i].get_account_number()){
            id_account = i;
            break;
        }
            else{
                if(info.informationcustomer[id].Account.size()- 1 == i){
                    tmp = false;
                        QMessageBox::warning(this, " "," چنین شماره حسابی در حساب های شما برای برداشت وجه وجود ندارد");

                }

            }
        }

  int m = 1;
    for(int i = 0 ; i < info.informationcustomer.size()&& tmp ; i++){
        for(int j =0 ; j < info.informationcustomer[i].Account.size() ;j++)
           {
            if(lAccount2->text().toInt() == info.informationcustomer[i].Account[j].get_account_number()){
                id_customer_2 = i;
                id_account_2 = j;
                 m  = 0;
                break;
            }
            else{
                if(i == info.informationcustomer.size() - 1  && j == info.informationcustomer[i].Account.size()  -1 && m) {
                    tmp = false;
                QMessageBox::warning(this, " "," حساب مقصد وجود ندارد");
                }

            }


        }
    }
    if(tmp){
       if(info.informationcustomer[id].Account[id_account].get_money() < lmoney->text().toDouble()){
             QMessageBox::warning(this, " "," بودجه حساب کافی نمی باشد");
             tmp = false;
       }
       info.file_block_user_read();
       for(int  i = 0 ; i < info.user_blocks.size() ; i++){
           if(info.user_blocks[i] == id_customer_2){
               QMessageBox::warning(this, " "," حساب مقصد مسدود می باشد");
               tmp = false;
           }
       }
       if(!tmp){
           show();
       }
       else{

         info.informationcustomer[id].Account[id_account].set_money(info.informationcustomer[id].Account[id_account].get_money() - lmoney->text().toDouble());
          info.informationcustomer[id_customer_2].Account[id_account_2].set_money(info.informationcustomer[id_customer_2].Account[id_account_2].get_money() + lmoney->text().toDouble());
          info.information_Write();

          QMessageBox::warning(this, " "," انتقال وجه با موفقیت انجام شد");
          close();
          backpage();


       }



    }

}
void Money_transfer_page::backpage()
{
    panelcustomer *back_page = new panelcustomer(id);
    close();
    back_page->show();
}

