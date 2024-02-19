//
// Created by Александр Широков on 16.02.2024.
//
#pragma once
#ifndef MOD37_CALC_H
#define MOD37_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class calc; }
QT_END_NAMESPACE

class calc : public QMainWindow {
Q_OBJECT

public:
    calc(QWidget *parent = nullptr) : QMainWindow() {};

    ~calc() {};

    QLineEdit *lineEdit = nullptr;
    QLineEdit *lineEdit_2 = nullptr;
    QLineEdit *lineEdit_3 = nullptr;

public slots:
    void plus()
    {
    lineEdit->setText(getResult('+'));};
    void minus()
    {
        lineEdit->setText(getResult('-'));};
    void multy()
    {
        lineEdit->setText(getResult('*'));};
    void divide()
    {
        lineEdit->setText(getResult('/'));
    };

private:
    Ui::calc *ui;

    QString getResult(char _operator) {
        if (lineEdit_2->text().isEmpty() || lineEdit_2->text().isEmpty()) return "Error";
        if (_operator == '+') return QString::number(lineEdit_2->text().toInt() + lineEdit_3->text().toInt());
        if (_operator == '-') return QString::number(lineEdit_2->text().toInt() - lineEdit_3->text().toInt());
        if (_operator == '*') return QString::number(lineEdit_2->text().toInt() * lineEdit_3->text().toInt());

        if (_operator == '/' ) {
            if(lineEdit_3->text().toInt()==0) return "Error";
            return QString::number(lineEdit_2->text().toInt() / lineEdit_3->text().toInt());
        }
    };
};


#endif //MOD37_CALC_H
