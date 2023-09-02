#include <QWidget>
#include <QWidget>
#include <QLabel>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>

class visit_account : public QWidget
{
    Q_OBJECT
public:
    explicit visit_account(int n , int m);
public slots:
    void check_next();
    void check_back();
    void check_panel();



signals:
private:
    int id;
    int id_account;


    QLineEdit *lname, *lfamily, *leamil, *lNational_Code, *lage, *lgender, *lAccount_type, *lBank_account_money;
    QLineEdit *laccount_num;
    QLabel *name, *family, *eamil, *National_Code, *age, *gender, *Account_type, *Bank_account_money , *account_num;
    QFormLayout *mainlayout;
    QHBoxLayout *forpush, *fornext_back;
    QPushButton *next, *back, *panel;
    QVBoxLayout *layout;

};

