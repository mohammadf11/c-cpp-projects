#include "login.h"
#include <QApplication>
#include <boost/uuid/uuid_generators.hpp>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login  w;
    w.show();
    return a.exec();
}
