#include "bank.h"
class Account : public person
{
    string Account_type, string_Opening_time;
    double Bank_account_money, Interest_Rates  , money;
    double Opening_time;
    int account_number;

public:
    bool operator==(Account p)
    {
        if (Account_type == p.Account_type && p.Bank_account_money == Bank_account_money && p.City == City && p.Email == Email && p.Family == Family && p.Interest_Rates == Interest_Rates && p.Name_bank == Name_bank && p.National_Code == National_Code && p.Password == Password && p.gender == gender && p.branch == branch && p.age == age && p.Username == Username&& p.Name == Name )
            return true;
        return false;
    }
    int get_account_number()
    {
        return account_number;
    }
    string get_string_Opening_time()
    {
        return string_Opening_time;
    }
    double get_Opening_time()
    {
        return Opening_time;
    }

    string get_Account_type()
    {

        return Account_type;
    }
    double get_Bank_account_money()
    {
        return Bank_account_money;
    }
    double get_money(){

        time_t zaman = time(NULL);
        int month = (zaman - Opening_time)/2592000;
      Opening_time += month *  2592000;
        money += month *(Interest_Rates/100) * Bank_account_money;
        return money;
    }
    double get_Interest_Rates()
    {
        return Interest_Rates;
    }
    void set_money(double _money){

        money = _money;
    }

    void set_Account_type(QString _Account_type)
    {
        Account_type = _Account_type.toUtf8().constData();
    }
    void set_Bank_account_money(QString _Bank_account_money)
    {
        Bank_account_money = _Bank_account_money.toDouble();
    }
    void set_Interest_Rates(QString _Interest_Rates)
    {
        Interest_Rates = _Interest_Rates.toDouble();
    }
    void set_Opening_time(double _Opening_time)
    {
        Opening_time = _Opening_time;
    }
    void set_string_Opening_time(QString _string_Opening_time)
    {
        string_Opening_time = _string_Opening_time.toUtf8().constData();
    }
    void set_account_number(int _account_number)
    {
        account_number = _account_number;
    }
    //********************************************
};

class loan
{
private:
       string Name_bank, branch, City , str_Deposit_time;
        int Received_account_number ,Payment_account_number , Deposit_time , id_cumstomer , Installment_period;
        double budget , Deposit_time_1;
public:
        bool operator==(loan p)
        {
            if (City == p.City  && p.Installment_period == Installment_period && p.Name_bank == Name_bank && p.Payment_account_number == Payment_account_number && p.Received_account_number == Received_account_number && p.branch == branch && p.budget == budget  && p.id_cumstomer == id_cumstomer)
                return true;
            return false;
        }
        string get_name_bank()
        {

            return Name_bank;
        }
        string get_branch()
        {

            return branch;
        }
        string get_City()
        {

            return City;
        }
        string get_str_Deposit_time()
        {

            return str_Deposit_time;
        }

        int get_Installment_period()
        {

            return Installment_period;
        }
        int get_Received_account_number(){
            return Received_account_number;
        }
        int get_Payment_account_number(){
            return Payment_account_number;
        }
        int get_Deposit_time(){
            return Deposit_time;
        }
        int get_Deposit_time_1(){
           return Deposit_time_1;
       }
        int get_id_cumstomer()
        {
            return id_cumstomer;
        }
        double get_budget(){
            return budget;
        }

        //***************************
        void set_name_bank(QString _Name_bank)
        {
            Name_bank = _Name_bank.toUtf8().constData();
        }
        void set_Deposit_time_1(QString _Deposit_time_1)
        {

      Deposit_time_1 = _Deposit_time_1.toInt();
       }

        void set_branch(QString _branch)
        {
            branch = _branch.toUtf8().constData();
        }
        void set_City(QString _City)
        {
            City = _City.toUtf8().constData();
        }
        void set_Received_account_number(QString _Received_account_number){
             Received_account_number = _Received_account_number.toInt();
        }
        void set_Payment_account_number(QString _Payment_account_number){
             Payment_account_number = _Payment_account_number.toInt();
        }
        void set_Deposit_time(QString _Deposit_time){
            Deposit_time = _Deposit_time.toInt() ;
        }
        void set_id_cumstomer(QString _id_cumstomer)
        {
           id_cumstomer = _id_cumstomer.toInt();
        }
        void set_Installment_period(QString _Installment_period)
        {

             Installment_period = _Installment_period.toInt();
        }
        void set_str_Deposit_time(QString _str_Deposit_time)
        {

             str_Deposit_time = _str_Deposit_time.toInt();
        }
        double set_budget(QString _budget){
             budget = _budget.toDouble() ;
        }

};

class customer
{
public:
    QVector<Account> Account;
    QVector<loan> loans;
};
