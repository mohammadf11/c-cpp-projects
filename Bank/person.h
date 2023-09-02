#include <iostream>
#include <QString>
#include <fstream>
#include <string>
#include <QDataStream>
#include <QFile>
#include <qmessagebox.h>
#include <time.h>
#include <limits>
typedef std::numeric_limits<double> dbl;

using namespace std;
class person
{
protected:
    string Name, Family, Email, National_Code, Username, Password, age, gender;
    string Name_bank, branch, City;

public:
    person();
    string get_name()
    {

        return Name;
    }
    string get_Family()
    {

        return Family;
    }
    string get_Email()
    {

        return Email;
    }
    string get_National_Code()
    {
        return National_Code;
    }
    string get_Username()
    {

        return Username;
    }
    string get_Password()
    {

        return Password;
    }
    string get_age()
    {
        return age;
    }
    string get_gender()
    {
        return gender;
    }
    //*****************************
    void set_name(QString _name)
    {

        Name = _name.toUtf8().constData();
    }
    void set_Family(QString _Family)
    {

        Family = _Family.toUtf8().constData();
    }
    void set_Email(QString _Email)
    {

        Email = _Email.toUtf8().constData();
    }
    void set_National_Code(QString _National_Code)
    {

        National_Code = _National_Code.toUtf8().constData();
    }
    void set_Username(QString _Username)
    {
        Username = _Username.toUtf8().constData();
    }
    void set_Password(QString _Password)
    {
        Password = _Password.toUtf8().constData();
    }
    void set_age(QString _age)
    {
        age = _age.toUtf8().constData();
    }
    void set_gender(QString _gender)
    {
        gender = _gender.toUtf8().constData();
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
    //***************************
    void set_name_bank(QString _Name_bank)
    {
        Name_bank = _Name_bank.toUtf8().constData();
    }
    void set_branch(QString _branch)
    {
        branch = _branch.toUtf8().constData();
    }
    void set_City(QString _City)
    {
        City = _City.toUtf8().constData();
    }
};
