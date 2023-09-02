#include <QWidget>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QComboBox>
#include <QGroupBox>
class newaccount : public QWidget
{
    Q_OBJECT
public:
    explicit newaccount(int);
public slots:
    void backpage();
    void check();

private:
    int id;
    QHBoxLayout *forpush;
    QLineEdit *budget;
    QVBoxLayout *pagecustomerinformationlayout;
    QPushButton *confirmation, *back;
    QLineEdit *lName_bank, *lbranch, *lCity;
    QVBoxLayout *Accountlayout, *typeaccountlayout, *main_layout;
    QComboBox *Accountt;
    QGroupBox *Accounttype, *Accountinfo;
};
