#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QComboBox>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QTimer>
#include <QMessageBox>

using namespace std;
class login : public QWidget
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
public slots:
    void check();
    void pagecustomerinformation();
    void pagenewmanager();
    void addbankpage();

private:
    QPushButton *customerpush, *addmanager, *ok, *addbank;
    QLineEdit *leduse, *ledpas;
    QGridLayout *page1layout;
    QHBoxLayout *hlayout;
};
