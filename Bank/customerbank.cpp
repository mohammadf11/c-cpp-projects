#include "customerbank.h"

customerbank::customerbank(QWidget *parent) : QWidget(parent)
{

    lName_bank = new QLineEdit;
    lbranch = new QLineEdit;
    lRegion = new QLineEdit;
    lCity = new QLineEdit;
    lName_bank->setPlaceholderText("نام بانک");
    lbranch->setPlaceholderText("شماره شعبه بانک");
    lCity->setPlaceholderText("شهر بانک");
    lRegion->setPlaceholderText("منطقه بانک");

    customerbanklayout = new QVBoxLayout;

    confirmation = new QPushButton("تایید");
    confirmation->setStyleSheet("QPushButton:enabled { background-color: rgb(255,0,0); }\n");
    Account = new QComboBox;
    gendergroup = new QGroupBox;
    gendergroup->setTitle("نوع حساب");
    Account->addItem("                                                               حساب کوتاه مدت");
    Account->addItem("                                                                 حساب بلند مدت");
    Account->addItem("                                                                         حساب ویژه");
    genderlayout = new QVBoxLayout;
    genderlayout->addWidget(Account);
    gendergroup->setLayout(genderlayout);

    customerbanklayout->addWidget(lName_bank);
    customerbanklayout->addWidget(lCity);
    customerbanklayout->addWidget(lRegion);
    customerbanklayout->addWidget(lbranch);
    gendergroup->setAlignment(Qt::AlignRight);
    gendergroup->setMaximumSize(QSize(320, 60));
    customerbanklayout->addWidget(gendergroup);

    customerbanklayout->addWidget(confirmation);

    setLayout(customerbanklayout);
    setGeometry(400, 250, 300, 350);
}
