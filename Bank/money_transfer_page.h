#include <QWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QHBoxLayout>
#include<QGroupBox>

class Money_transfer_page : public QWidget
{
    Q_OBJECT
public:
    explicit Money_transfer_page(int n);


public slots:
    void check_info();
    void backpage();

private:
    int id;
    QHBoxLayout *forpush;
    QPushButton *confirmation, *back;
    QLineEdit *lAccount1, *lAccount2, *lmoney;
    QGroupBox *group;
    QVBoxLayout *layout;

};
