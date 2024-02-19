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
    void plus();
    void minus();
    void multy();
    void divide();

private:
    Ui::calc *ui;
    QString errMesg = "Error";
    QString getResult(char _operator);
};


#endif //MOD37_CALC_H
