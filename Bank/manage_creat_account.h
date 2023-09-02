#include <QLabel>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include "information.h"

#include <QWidget>

class manage_creat_account : public QWidget
{
    Q_OBJECT
public:
    explicit manage_creat_account(QVector<Account>, int, int, int);
public slots:
    void check_accept();
    void check_Refuse();
    void check_back();
    void check_next();
    void check_panel();

private:
    int id;
    int id_bank_manager;
    int id_manager;
    QVector<Account> Accounts;
    QLineEdit *lname, *lfamily, *leamil, *lNational_Code, *lage, *lgender, *lAccount_type, *lBank_account_money;
    QLabel *name, *family, *eamil, *National_Code, *age, *gender, *Account_type, *Bank_account_money;
    QFormLayout *mainlayout;
    QHBoxLayout *forpush, *fornext_back;
    QPushButton *Refuse, *accept;
    QPushButton *next, *back, *panel;
    QVBoxLayout *layout;
};
