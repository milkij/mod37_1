#include <QApplication>

#include "ui_calc.h"
#include "../include/calc.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    calc _calc(nullptr);
    Ui::calc MW; //See to name of class in calc.ui
    MW.setupUi(&_calc);
    _calc.lineEdit = MW.lineEdit;
    _calc.lineEdit_2 = MW.lineEdit_2;
    _calc.lineEdit_3 = MW.lineEdit_3;
    _calc.resize(200,250);
    _calc.show();

    return QApplication::exec();
}
