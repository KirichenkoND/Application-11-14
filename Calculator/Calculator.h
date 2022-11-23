#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::CalculatorClass ui;

private slots:
    void digits_numbers();
	void on_btn_point_clicked();
	void operations();
    void math_operations();
    void on_btn_clear_clicked();
    void on_btn_result_clicked();
    void on_btn_back_clicked();
};
