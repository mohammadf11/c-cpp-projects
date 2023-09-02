#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QLabel>

class panelbankmanager : public QWidget
{
    Q_OBJECT
public:
    explicit panelbankmanager(int n, int m);
public slots:
    void backpage();
    void check_creat();
    void ckeck_loan();


signals:
private:
    int idn, idm;
    QPushButton *loan_push, *manageaccount;
    QVBoxLayout *layout;
    QPushButton *back;
};
