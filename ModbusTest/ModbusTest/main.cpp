#include "ModbusTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModbusTest w;
    w.show();
    return a.exec();
}
