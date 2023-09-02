#include <customer.h>
#include <QVector>

class information
{
public:
    QVector<bank> informationbank;
    QVector<customer> informationcustomer;
    QVector<Account> Create_an_account;
    QVector<loan> Apply_loan;
    QVector<int>user_blocks;

    void information_bankread()
    {
        ifstream infile;
        infile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_bank.txt", ios::in);
        if (infile.is_open())
        {

            for (int i = 0; infile.good(); i++)
            {
                informationbank.resize(i + 1);

                string size;
                getline(infile, size);
                QString _size = QString::fromUtf8(size.c_str());
                for (int j = 0; j < 11 * _size.toDouble(); j++)
                {
                    informationbank[i].manager.resize((j / 11) + 1);
                    string _str;
                    getline(infile, _str);
                    QString str = QString::fromUtf8(_str.c_str());
                    if (j % 11 == 0)
                        informationbank[i].manager[j / 11].set_name(str);
                    if (j % 11 == 1)
                        informationbank[i].manager[j / 11].set_Family(str);
                    if (j % 11 == 2)
                        informationbank[i].manager[j / 11].set_National_Code(str);
                    if (j % 11 == 3)
                        informationbank[i].manager[j / 11].set_Username(str);
                    if (j % 11 == 4)
                        informationbank[i].manager[j / 11].set_Password(str);
                    if (j % 11 == 5)
                        informationbank[i].manager[j / 11].set_Email(str);
                    if (j % 11 == 6)
                        informationbank[i].manager[j / 11].set_age(str);
                    if (j % 11 == 7)
                        informationbank[i].manager[j / 11].set_gender(str);
                    if (j % 11 == 8)
                        informationbank[i].manager[j / 11].set_name_bank(str);
                    if (j % 11 == 9)
                        informationbank[i].manager[j / 11].set_City(str);
                    if (j % 11 == 10)
                        informationbank[i].manager[j / 11].set_branch(str);
                }
            }
            infile.close();
            for (int i = 0; i < informationbank.size(); i++)
            {
                for (int j = informationbank[i].manager.size() - 1; j >= 0; j--)
                {

                    if (informationbank[i].manager[j].get_Username().length() == 0)
                        informationbank[i].manager.pop_back();
                }
                for (int i = informationbank.size() - 1; i >= 0; i--)
                {
                    if (informationbank[i].manager.size() == 0)
                        informationbank.pop_back();
                }
            }
        }
    }
    ///**********************************
    ///**********************************
    void information_customerread()
    {
        ifstream infile;
        infile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_customer.txt", ios::in);
        if (infile.is_open())
        {

            for (int i = 0; infile.good(); i++)
            {
                informationcustomer.resize(i + 1);

                string size;
                getline(infile, size);
                QString _size = QString::fromUtf8(size.c_str());
                for (int j = 0; j < 18 * _size.toDouble(); j++)
                {
                    informationcustomer[i].Account.resize((j / 18) + 1);

                    string _str;
                    getline(infile, _str);
                    QString str = QString::fromUtf8(_str.c_str());
                    if (j % 18 == 0)
                        informationcustomer[i].Account[j / 18].set_name(str);
                    else if (j % 18 == 1)
                        informationcustomer[i].Account[j / 18].set_Family(str);

                    else if (j % 18 == 2)
                        informationcustomer[i].Account[j / 18].set_National_Code(str);
                    else if (j % 18 == 3)
                        informationcustomer[i].Account[j / 18].set_Username(str);
                    else if (j % 18 == 4)
                        informationcustomer[i].Account[j / 18].set_Password(str);
                    else if (j % 18 == 5)
                        informationcustomer[i].Account[j / 18].set_Email(str);
                    else if (j % 18 == 6)
                        informationcustomer[i].Account[j / 18].set_age(str);
                    else if (j % 18 == 7)
                        informationcustomer[i].Account[j / 18].set_gender(str);
                    else if (j % 18 == 8)
                        informationcustomer[i].Account[j / 18].set_Account_type(str);
                    else if (j % 18 == 9)
                        informationcustomer[i].Account[j / 18].set_Bank_account_money(str);
                    else if (j % 18 == 10)
                        informationcustomer[i].Account[j / 18].set_Interest_Rates(str);
                    else if (j % 18 == 11)
                        informationcustomer[i].Account[j / 18].set_Opening_time(str.toDouble());
                    else if (j % 18 == 12)
                        informationcustomer[i].Account[j / 18].set_string_Opening_time(str + "\n");
                    else if (j % 18 == 13)
                        informationcustomer[i].Account[j / 18].set_name_bank(str);
                    else if (j % 18 == 14)
                        informationcustomer[i].Account[j / 18].set_City(str);
                    else if (j % 18 == 15)
                        informationcustomer[i].Account[j / 18].set_branch(str);
                    else if (j % 18 == 16)
                        informationcustomer[i].Account[j / 18].set_account_number(str.toInt());
                    else if (j % 18 == 17)
                        informationcustomer[i].Account[j / 18].set_money(str.toDouble());



                    }
                }
        }


            for (int i = 0; i < informationcustomer.size(); i++)
            {
                for (int j = informationcustomer[i].Account.size() - 1; j >= 0; j--)
                {

                    if (informationcustomer[i].Account[j].get_Username().length() == 0)
                        informationcustomer[i].Account.pop_back();
                }
                for (int i = informationcustomer.size() - 1; i >= 0; i--)
                {
                    if (informationcustomer[i].Account.size() == 0)
                        informationcustomer.pop_back();
                }
            }

    }

    //**************************************
    //**************************************
    void information_bankwrite()
    {
        ofstream outfile;
        outfile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_bank.txt", ios::out);
        if (outfile.is_open())
        {
            for (int i = 0; i < informationbank.size(); i++)
            {
                outfile << informationbank[i].manager.size() << "\n";
                for (int j = 0; j < 11 * informationbank[i].manager.size(); j++)
                {

                    if (j % 11 == 0)
                        outfile << informationbank[i].manager[j / 11].get_name() << "\n";
                    if (j % 11 == 1)
                        outfile << informationbank[i].manager[j / 11].get_Family() << "\n";
                    if (j % 11 == 2)
                        outfile << informationbank[i].manager[j / 11].get_National_Code() << "\n";
                    if (j % 11 == 3)
                        outfile << informationbank[i].manager[j / 11].get_Username() << "\n";
                    if (j % 11 == 4)
                        outfile << informationbank[i].manager[j / 11].get_Password() << "\n";
                    if (j % 11 == 5)
                        outfile << informationbank[i].manager[j / 11].get_Email() << "\n";
                    if (j % 11 == 6)
                        outfile << informationbank[i].manager[j / 11].get_age() << "\n";
                    if (j % 11 == 7)
                        outfile << informationbank[i].manager[j / 11].get_gender() << "\n";
                    if (j % 11 == 8)
                        outfile << informationbank[i].manager[j / 11].get_name_bank() << "\n";
                    if (j % 11 == 9)
                        outfile << informationbank[i].manager[j / 11].get_City() << "\n";
                    if (j % 11 == 10)
                        outfile << informationbank[i].manager[j / 11].get_branch() << "\n";
                }
            }
        }
    }
    //**************************************
    //**************************************
    void information_customerwrite()
    {
        ofstream outfile;
        outfile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_customer.txt", ios::out);
        if (outfile.is_open())
        {
            for (int i = 0; i < informationcustomer.size(); i++)
            {
                outfile << informationcustomer[i].Account.size() << "\n";

                for (int j = 0; j < 18 * informationcustomer[i].Account.size(); j++)
                {

                    if (j % 18 == 0)
                        outfile << informationcustomer[i].Account[j / 18].get_name() << "\n";
                    else if (j % 18 == 1)
                        outfile << informationcustomer[i].Account[j / 18].get_Family() << "\n";
                    else if (j % 18 == 2)
                        outfile << informationcustomer[i].Account[j / 18].get_National_Code() << "\n";
                    else if (j % 18 == 3)
                        outfile << informationcustomer[i].Account[j / 18].get_Username() << "\n";
                    else if (j % 18 == 4)
                        outfile << informationcustomer[i].Account[j / 18].get_Password() << "\n";
                    else if (j % 18 == 5)
                        outfile << informationcustomer[i].Account[j / 18].get_Email() << "\n";
                    else if (j % 18 == 6)
                        outfile << informationcustomer[i].Account[j / 18].get_age() << "\n";
                    else if (j % 18 == 7)
                        outfile << informationcustomer[i].Account[j / 18].get_gender() << "\n";
                    else if (j % 18 == 8)
                        outfile << informationcustomer[i].Account[j / 18].get_Account_type() << "\n";
                    else if (j % 18 == 9)
                        outfile << informationcustomer[i].Account[j / 18].get_Bank_account_money() << "\n";
                    else if (j % 18 == 10)
                        outfile << informationcustomer[i].Account[j / 18].get_Interest_Rates() << "\n";
                    else if (j % 18 == 11)
                    {
                        outfile.precision(dbl::max_digits10);
                        outfile << informationcustomer[i].Account[j / 18].get_Opening_time() << "\n";
                    }
                    else if (j % 18 == 12)
                        outfile << informationcustomer[i].Account[j / 18].get_string_Opening_time();
                    else if (j % 18 == 13)
                        outfile << informationcustomer[i].Account[j / 18].get_name_bank() << "\n";
                    else if (j % 18 == 14)
                        outfile << informationcustomer[i].Account[j / 18].get_City() << "\n";
                    else if (j % 18 == 15)
                        outfile << informationcustomer[i].Account[j / 18].get_branch() << "\n";
                    else if (j % 18 == 16)
                        outfile << informationcustomer[i].Account[j / 18].get_account_number() << "\n";
                    else if (j % 18 == 17)
                        outfile << informationcustomer[i].Account[j / 18].get_money() << "\n";


                }
            }
        }
    }
    ///
    ///
    void information_customerloanwrite()
    {
        ofstream outfile;
        outfile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_customerloan.txt", ios::out);
        if (outfile.is_open())
        {
            for (int i = 0; i < informationcustomer.size(); i++)
            {
                outfile << informationcustomer[i].loans.size() << "\n";

                for (int j = 0; j < 11 * informationcustomer[i].loans.size(); j++)
                {

                    if (j % 11 == 0)
                        outfile << informationcustomer[i].loans[j / 11].get_name_bank() << "\n";
                    else if (j % 11 == 1)
                        outfile << informationcustomer[i].loans[j / 11].get_City() << "\n";
                    else if (j % 11 == 2)
                        outfile << informationcustomer[i].loans[j / 11].get_branch() << "\n";
                    else if (j % 11 == 3)
                        outfile << informationcustomer[i].loans[j / 11].get_Payment_account_number() << "\n";
                    else if (j % 11 == 4)
                        outfile << informationcustomer[i].loans[j / 11].get_Received_account_number() << "\n";
                    else if (j % 11 == 5)
                        outfile << informationcustomer[i].loans[j / 11].get_budget() << "\n";
                    else if (j % 11 == 6)
                        outfile << informationcustomer[i].loans[j / 11].get_Deposit_time() << "\n";
                    else if (j % 11 == 7)
                        outfile << informationcustomer[i].loans[j / 11].get_str_Deposit_time() << "\n";
                    else if (j % 11 == 8)
                        outfile << informationcustomer[i].loans[j / 11].get_id_cumstomer() << "\n";
                    else if (j % 11 == 9)
                        outfile << informationcustomer[i].loans[j / 11].get_Installment_period() << "\n";
                    else if (j % 11 == 10)
                        outfile << informationcustomer[i].loans[j / 11].get_Deposit_time_1() << "\n";
            }
        }
    }
}
    //////
    ///
    ///
    void information_customerloanread()
    {
        ifstream infile;
        infile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_customerloan.txt", ios::in);
        if (infile.is_open())
        {

            for (int i = 0; i < informationcustomer.size(); i++)
            {

                string size;
                getline(infile, size);
                QString _size = QString::fromUtf8(size.c_str());
                for (int j = 0; j < 11 * _size.toDouble(); j++)
                {
                    informationcustomer[i].loans.resize((j / 11) + 1);

                    string _str;
                    getline(infile, _str);
                    QString str = QString::fromUtf8(_str.c_str());
                    if (j % 11 == 0)
                        informationcustomer[i].loans[j / 11].set_name_bank(str);
                    else if (j % 11 == 1)
                        informationcustomer[i].loans[j / 11].set_City(str);

                    else if (j % 11 == 2)
                        informationcustomer[i].loans[j / 11].set_branch(str);
                    else if (j % 11 == 3)
                        informationcustomer[i].loans[j / 11].set_Payment_account_number(str);
                    else if (j % 11 == 4)
                        informationcustomer[i].loans[j / 11].set_Received_account_number(str);
                    else if (j % 11 == 5)
                        informationcustomer[i].loans[j / 11].set_budget(str);
                    else if (j % 11 == 6)
                        informationcustomer[i].loans[j / 11].set_Deposit_time(str);
                    else if (j % 11 == 7)
                        informationcustomer[i].loans[j / 11].set_str_Deposit_time(str);
                    else if (j % 11 == 8)
                        informationcustomer[i].loans[j / 11].set_id_cumstomer(str);
                    else if (j % 11 == 9)
                        informationcustomer[i].loans[j / 11].set_Installment_period(str);
                    else if (j % 11 == 10)
                        informationcustomer[i].loans[j / 11].set_Deposit_time_1(str);
            }
            for (int i = 0; i < informationcustomer.size(); i++)
            {
                for (int j = informationcustomer[i].loans.size() - 1; j >= 0; j--)
                {

                    if (informationcustomer[i].loans[j].get_name_bank().length() == 0)
                        informationcustomer[i].loans.pop_back();
                }
            }
        }
    }
    }
    ////
    ///
    ///
    void information_Accountread()
    {
        ifstream infile;
        infile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_Account.txt", ios::in);
        if (infile.is_open())
        {
            for (int i = 0; infile.good(); i++)
            {
                if (i % 18 == 0)
                {
                    Create_an_account.resize((i / 17) + 1);
                    Create_an_account[i / 18].set_name("");
                    Create_an_account[i / 18].set_Family("");
                    Create_an_account[i / 18].set_National_Code("");
                    Create_an_account[i / 18].set_Username("");
                    Create_an_account[i / 18].set_Password("");
                    Create_an_account[i / 18].set_Email("");
                    Create_an_account[i / 18].set_age("");
                    Create_an_account[i / 18].set_gender("");
                    Create_an_account[i / 18].set_Account_type("");
                    Create_an_account[i / 18].set_Bank_account_money("");
                    Create_an_account[i / 18].set_Interest_Rates("");
                    Create_an_account[i / 18].set_Opening_time(0);
                    Create_an_account[i / 18].set_string_Opening_time("");
                    Create_an_account[i / 18].set_name_bank("");
                    Create_an_account[i / 18].set_City("");
                    Create_an_account[i / 18].set_branch("");
                    Create_an_account[i / 18].set_account_number(0);
                }
                string _str;
                getline(infile, _str);
                QString str = QString::fromUtf8(_str.c_str());
                if (i % 18 == 0)
                    Create_an_account[i / 18].set_name(str);
                else if (i % 18 == 1)
                    Create_an_account[i / 18].set_Family(str);

                else if (i % 18 == 2)
                    Create_an_account[i / 18].set_National_Code(str);
                else if (i % 18 == 3)
                    Create_an_account[i / 18].set_Username(str);
                else if (i % 18 == 4)
                    Create_an_account[i / 18].set_Password(str);
                else if (i % 18 == 5)
                    Create_an_account[i / 18].set_Email(str);
                else if (i % 18 == 6)
                    Create_an_account[i / 18].set_age(str);
                else if (i % 18 == 7)
                    Create_an_account[i / 18].set_gender(str);
                else if (i % 18 == 8)
                    Create_an_account[i / 18].set_Account_type(str);
                else if (i % 18 == 9)
                    Create_an_account[i / 18].set_Bank_account_money(str);
                else if (i % 18 == 10)
                    Create_an_account[i / 18].set_Interest_Rates(str);
                else if (i % 18 == 11)
                    Create_an_account[i / 18].set_Opening_time(str.toDouble());
                else if (i % 18 == 12)
                    Create_an_account[i / 18].set_string_Opening_time(str + "\n");
                else if (i % 18 == 13)
                    Create_an_account[i / 18].set_name_bank(str);
                else if (i % 18 == 14)
                    Create_an_account[i / 18].set_City(str);
                else if (i % 18 == 15)
                    Create_an_account[i / 18].set_branch(str);
                else if (i % 18 == 16)
                    Create_an_account[i / 18].set_account_number(str.toInt());
                else if (i % 18 == 17)
                     Create_an_account[i / 18].set_money(0);

            }
            for (int i = Create_an_account.size() - 1; i >= 0; i--)
            {
                if (Create_an_account[i].get_Username().length() == 0)
                    Create_an_account.pop_back();
            }
        }
    }

    ////
    ///
    void information_Accountwrite()
    {
        ofstream outfile;
        outfile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_Account.txt", ios::out);
        if (outfile.is_open() && Create_an_account.size() != 0)
        {
            for (int i = 0; i < 18 * Create_an_account.size(); i++)
            {

                if (i % 18 == 0)
                    outfile << Create_an_account[i / 18].get_name() << "\n";
                else if (i % 18 == 1)
                    outfile << Create_an_account[i / 18].get_Family() << "\n";
                else if (i % 18 == 2)
                    outfile << Create_an_account[i / 18].get_National_Code() << "\n";
                else if (i % 18 == 3)
                    outfile << Create_an_account[i / 18].get_Username() << "\n";
                else if (i % 18 == 4)
                    outfile << Create_an_account[i / 18].get_Password() << "\n";
                else if (i % 18 == 5)
                    outfile << Create_an_account[i / 18].get_Email() << "\n";
                else if (i % 18 == 6)
                    outfile << Create_an_account[i / 18].get_age() << "\n";
                else if (i % 18 == 7)
                    outfile << Create_an_account[i / 18].get_gender() << "\n";
                else if (i % 18 == 8)
                    outfile << Create_an_account[i / 18].get_Account_type() << "\n";
                else if (i % 18 == 9)
                    outfile << Create_an_account[i / 18].get_Bank_account_money() << "\n";
                else if (i % 18 == 10)
                    outfile << Create_an_account[i / 18].get_Interest_Rates() << "\n";
                else if (i % 18 == 11)
                {
                    outfile.precision(dbl::max_digits10);
                    outfile << Create_an_account[i / 18].get_Opening_time() << "\n";
                }
                else if (i % 18 == 12)
                    outfile << Create_an_account[i / 18].get_string_Opening_time();
                else if (i % 18 == 13)
                    outfile << Create_an_account[i / 18].get_name_bank() << "\n";
                else if (i % 18 == 14)
                    outfile << Create_an_account[i / 18].get_City() << "\n";
                else if (i % 18 == 15)
                    outfile << Create_an_account[i / 18].get_branch() << "\n";
                else if (i % 18 == 16)
                    outfile << Create_an_account[i / 18].get_account_number() << "\n";
                else if (i % 18 == 17)
                    outfile << 0 << "\n";

            }
        }
    }
    void information_loanwrite()
    {
        ofstream outfile;
        outfile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_loan.txt", ios::out);
        if (outfile.is_open() && Apply_loan.size() != 0)
        {
            for (int i = 0; i < 10 * Apply_loan.size(); i++)
            {

                if (i % 10 == 0)
                    outfile << Apply_loan[i / 10].get_name_bank() << "\n";
                else if (i % 10 == 1)
                    outfile << Apply_loan[i / 10].get_City() << "\n";
                else if (i % 10 == 2)
                    outfile << Apply_loan[i / 10].get_branch() << "\n";
                else if (i % 10 == 3)
                    outfile << Apply_loan[i / 10].get_budget() << "\n";
                else if (i % 10 == 4)
                    outfile << Apply_loan[i / 10].get_Received_account_number() << "\n";
                else if (i % 10 == 5)
                    outfile << Apply_loan[i / 10].get_Payment_account_number() << "\n";
                else if (i % 10 == 6)
                    outfile << Apply_loan[i / 10].get_Installment_period() << "\n";
                else if (i % 10 == 7)
                    outfile << Apply_loan[i / 10].get_Deposit_time() << "\n";
                else if (i % 10 == 8)
                    outfile << Apply_loan[i / 10].get_str_Deposit_time() << "\n";
                else if (i % 10 == 9)
                    outfile << Apply_loan[i / 10].get_id_cumstomer() << "\n";

            }
        }
    }
    void information_loanread()
    {
        ifstream infile;
        infile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_loan.txt", ios::in);
        if (infile.is_open())
        {
            for (int i = 0; infile.good(); i++)
            {
                if (i % 10 == 0)
                {
                    Apply_loan.resize((i / 10) + 1);
                    Apply_loan[i / 10].set_name_bank("");
                    Apply_loan[i / 10].set_City("");
                    Apply_loan[i / 10].set_branch("");
                    Apply_loan[i / 10].set_budget("");
                    Apply_loan[i / 10].set_Received_account_number("");
                    Apply_loan[i / 10].set_Payment_account_number("");
                    Apply_loan[i / 10].set_Installment_period("");
                    Apply_loan[i / 10].set_Deposit_time("");
                    Apply_loan[i / 10].set_str_Deposit_time("");
                    Apply_loan[i / 10].set_id_cumstomer("");
                }
                string _str;
                getline(infile, _str);
                QString str = QString::fromUtf8(_str.c_str());
                if (i % 10 == 0)
                    Apply_loan[i / 10].set_name_bank(str);
                else if (i % 10 == 1)
                    Apply_loan[i / 10].set_City(str);

                else if (i % 10 == 2)
                    Apply_loan[i / 10].set_branch(str);
                else if (i % 10 == 3)
                    Apply_loan[i / 10].set_budget(str);
                else if (i % 10 == 4)
                    Apply_loan[i / 10].set_Received_account_number(str);
                else if (i % 10 == 5)
                    Apply_loan[i / 10].set_Payment_account_number(str);
                else if (i % 10 == 6)
                    Apply_loan[i / 10].set_Installment_period(str);
                else if (i % 10 == 7)
                    Apply_loan[i / 10].set_Deposit_time(str);
                else if (i % 10 == 8)
                    Apply_loan[i / 10].set_str_Deposit_time(str);
                else if (i % 10 == 9)
                    Apply_loan[i / 10].set_id_cumstomer(str);

            }
            for (int i = Apply_loan.size() - 1; i >= 0; i--)
            {
                if (Apply_loan[i].get_name_bank().length() == 0)
                    Apply_loan.pop_back();
            }
        }
    }
    void file_block_user_write()
    {
        ofstream outfile;
        outfile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_user_block.txt", ios::out);
        if (outfile.is_open())
        {

           outfile<<user_blocks.size()<<"\n";
           for(int i =  0 ; i <user_blocks.size() ; i++ ){
               outfile<<user_blocks[i]<<"\n";
           }
        }

    }
    void file_block_user_read()
    {
        ifstream infile;
        infile.open("C:/Users/zeroone/Desktop/proje/untitled11/information_user_block.txt", ios::out);
        if (infile.is_open())
        {

          string size;
        getline(infile, size);
        QString _size = QString::fromUtf8(size.c_str());
        informationbank.resize(_size.toInt());
        for(int i =0 ; i < _size.toInt() ; i++){

            string _str;
            getline(infile,_str);
            QString str = QString::fromUtf8(_str.c_str());
            user_blocks.push_back(str.toInt());
            }
        }




    }

    void total_money(){

        for(int i=0;i<informationcustomer.size() ; i++){
            for(int j = 0 ; j < informationcustomer[i].Account.size() ; j++){
                for(int k =0 ; k <informationcustomer[i].loans.size() ;  k++){
                    if(informationcustomer[i].Account[j].get_account_number() == informationcustomer[i].loans[k].get_Payment_account_number() ){
                         time_t zaman = time(NULL);
                         int month = (zaman - informationcustomer[i].loans[k].get_Deposit_time_1()) /2592000;
                         if(month >= informationcustomer[i].loans[k].get_Installment_period()){
                             informationcustomer[i].loans.erase(informationcustomer[i].loans.begin() + k);
                         }
                         else{


                          month = (zaman - informationcustomer[i].loans[k].get_Deposit_time()) /2592000;

                          informationcustomer[i].loans[k].set_Deposit_time(QString::number( informationcustomer[i].loans[k].get_Deposit_time() + month * 2592000));
                         if(informationcustomer[i].Account[j].get_money() - month*(informationcustomer[i].loans[k].get_budget()/informationcustomer[i].loans[k].get_Installment_period()) < 0 ){
                             file_block_user_read();
                             user_blocks.push_back(i);
                             file_block_user_write();
                             break;
                         }
                         else{
                         informationcustomer[i].Account[j].set_money(informationcustomer[i].Account[j].get_money() - month*(informationcustomer[i].loans[k].get_budget()/informationcustomer[i].loans[k].get_Installment_period()));
                         }
                         }


                    }
            }
        }

    }
    }
    void information_read()
    {

        information_loanread();
        information_Accountread();
        information_bankread();
        information_customerread();
        information_customerloanread();
       total_money();
    }
    void information_Write()
    {

        information_loanwrite();
        information_Accountwrite();
        information_bankwrite();
        information_customerwrite();
        information_customerloanwrite();
       total_money();

    }
};
static information info;
