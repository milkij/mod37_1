//
// Created by Александр Широков on 16.02.2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_calc.h" resolved

#include "../include/calc.h"
#include "ui_calc.h"


void calc::plus()
{
    lineEdit->setText(getResult('+'));
};

void calc::minus()
{
    lineEdit->setText(getResult('-'));};
void calc::multy()
{
    lineEdit->setText(getResult('*'));};
void calc::divide()
{
    lineEdit->setText(getResult('/'));
};

QString calc::getResult(char _operator) {
    if (lineEdit_2->text().isEmpty() || lineEdit_2->text().isEmpty()) return errMesg;
    if (_operator == '+') return QString::number(lineEdit_2->text().toInt() + lineEdit_3->text().toInt());
    if (_operator == '-') return QString::number(lineEdit_2->text().toInt() - lineEdit_3->text().toInt());
    if (_operator == '*') return QString::number(lineEdit_2->text().toInt() * lineEdit_3->text().toInt());
    if (_operator == '/' ) {
        if(lineEdit_3->text().toInt()==0) return errMesg;
        return QString::number(lineEdit_2->text().toInt() / lineEdit_3->text().toInt());
    }
};