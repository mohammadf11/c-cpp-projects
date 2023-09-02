#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QComboBox>
#include <QGroupBox>

class customerinformation : public QWidget
{
    Q_OBJECT
public:
    customerinformation(QWidget *parent = nullptr);

public slots:
    void check();
    void backpage();

private:
    QLineEdit *lusername, *lpassword, *lname, *lfamily, *leamil, *National_Code, *lage;
    QVBoxLayout *pagecustomerinformationlayout;
    QPushButton *confirmation, *back;
    QComboBox *gender;

    QVBoxLayout *customerbanklayout, *main_layout;
    QHBoxLayout *forpush;
    QGroupBox *customerinfo;
};
