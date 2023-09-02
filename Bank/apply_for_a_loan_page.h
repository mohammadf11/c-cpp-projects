#include <QWidget>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QComboBox>
#include <QGroupBox>
class Apply_for_a_loan_page : public QWidget
{
    Q_OBJECT
public:
    explicit Apply_for_a_loan_page(int n);
public slots:
    void check();
    void backpage();
signals:
private:
    int id;
    QHBoxLayout *forpush;
    QPushButton *confirmation, *back;
    QLineEdit *lName_bank, *lbranch, *lCity , *lReceived_account_number ,*lPayment_account_number ,*budget;
    QVBoxLayout *loanlayout, *typeloanlayout, *main_layout;
    QComboBox *time;
    QGroupBox *typeloan, *loaninfo;

};

