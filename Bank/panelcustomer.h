#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QLabel>

class panelcustomer : public QWidget
{
    Q_OBJECT
public:
    panelcustomer(int n);

public slots:
    void backpage();
    void addaccountpage();
    void Apply_for_a_loan();
    void Money_transfer_page_();
    void visit();

private:
    int id;
    QPushButton *addaccount, *loans ,*Money_transfer , *account_page;

    QVBoxLayout *layout;
    QPushButton *back;
};
