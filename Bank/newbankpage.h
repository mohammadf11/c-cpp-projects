#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QComboBox>
#include <QGroupBox>
#include <QVBoxLayout>

class newbankpage : public QWidget
{
    Q_OBJECT
public:
    explicit newbankpage(QWidget *parent = nullptr);
public slots:
    void check();
    void backpage();

private:
    QGroupBox *bankgroup, *managergroup;
    QLineEdit *lName_bank, *lbranch, *National_Code, *lCity, *lusername, *lpassword, *lname, *lfamily, *leamil, *lage;
    QVBoxLayout *banklayout, *managerlayout, *bankinformationlayout;

    QComboBox *gender;
    QHBoxLayout *forpush;
    QPushButton *confirmation, *back;
};
