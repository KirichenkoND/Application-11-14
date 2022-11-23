#include "Calculator.h"

double num_first;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	// Поключение кнопочек цифр
	QObject::connect(ui.num_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	QObject::connect(ui.num_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
	
	// Подключение кнопочек операций
	QObject::connect(ui.btn_pnm, SIGNAL(clicked()), this, SLOT(operations()));
	QObject::connect(ui.action_per, SIGNAL(clicked()), this, SLOT(operations()));
	QObject::connect(ui.action_sqrt, SIGNAL(clicked()), this, SLOT(operations()));

	// Кнопочки операций
	QObject::connect(ui.action_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
	QObject::connect(ui.action_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
	QObject::connect(ui.action_x, SIGNAL(clicked()), this, SLOT(math_operations()));
	QObject::connect(ui.action_div, SIGNAL(clicked()), this, SLOT(math_operations()));
	ui.action_plus->setCheckable(true);
	ui.action_minus->setCheckable(true);
	ui.action_x->setCheckable(true);
	ui.action_div->setCheckable(true);
	
	// Кнопочки 
	QObject::connect(ui.action_clear, SIGNAL(clicked()), this, SLOT(on_btn_clear_clicked()));
	QObject::connect(ui.action_result, SIGNAL(clicked()), this, SLOT(on_btn_result_clicked()));
}	



Calculator::~Calculator()
{}


void Calculator::digits_numbers()
{
	QPushButton* button = (QPushButton*)sender();
	double all_numbers;
	QString new_label;

	if (ui.output->text().contains(".") && button->text() == "0") {
		new_label = ui.output->text() + button->text();
	} else {
		all_numbers = (ui.output->text() + button->text()).toDouble();
		new_label = QString::number(all_numbers, 'g', 15);
	}

	ui.output->setText(new_label);
}

void Calculator::on_btn_point_clicked()
{
	if (!(ui.output->text().contains('.')))
		ui.output->setText(ui.output->text() + ".");
}

void Calculator::operations()
{
	QPushButton* button = (QPushButton*)sender();
	double all_numbers;
	QString new_label;

	if (button->text() == "+/-") {
		all_numbers = (ui.output->text()).toDouble();
		all_numbers = all_numbers * -1;
		new_label = QString::number(all_numbers, 'g', 15);

		ui.output->setText(new_label);
	}
	else if (button->text() == "%") {
		all_numbers = (ui.output->text()).toDouble();
		all_numbers = all_numbers * 0.01;
		new_label = QString::number(all_numbers, 'g', 15);

		ui.output->setText(new_label);
	}
	else if (button->text() == "SQRT") {
		if (ui.output->text().toDouble() < 0) {
			ui.output->setText("Error");
		}
		else {
			all_numbers = (ui.output->text()).toDouble();
			all_numbers = sqrt(all_numbers);
			new_label = QString::number(all_numbers, 'g', 15);

			ui.output->setText(new_label);
		}
	}
}

void Calculator::math_operations()
{
	QPushButton* button = (QPushButton*)sender();

	num_first = ui.output->text().toDouble();
	ui.output->setText("");
	
	button->setChecked(true);
	
}

void Calculator::on_btn_result_clicked()
{
	double label_number, num_second;
	QString new_label;
	
	num_second = ui.output->text().toDouble();
	
	if (ui.action_plus->isChecked()) {
		label_number = num_first + num_second;
		new_label = QString::number(label_number, 'g', 15);
		ui.output->setText(new_label);
		ui.action_plus->setChecked(false);
	}
	else if (ui.action_minus->isChecked()) {
		label_number = num_first - num_second;
		new_label = QString::number(label_number, 'g', 15);
		ui.output->setText(new_label);
		ui.action_minus->setChecked(false);
	}
	else if (ui.action_x->isChecked()) {
		label_number = num_first * num_second;
		new_label = QString::number(label_number, 'g', 15);
		ui.output->setText(new_label);
		ui.action_x->setChecked(false);
	}
	else if (ui.action_div->isChecked()) {
		if (num_second == 0) {
			ui.output->setText("Error");
		}
		else {
			label_number = num_first / num_second;
			new_label = QString::number(label_number, 'g', 15);
			ui.output->setText(new_label);
		}
		ui.action_div->setChecked(false);
	}
}

void Calculator::on_btn_clear_clicked()
{
	ui.action_plus->setChecked(false);
	ui.action_minus->setChecked(false);
	ui.action_x->setChecked(false);
	ui.action_div->setChecked(false);
	ui.output->setText("0");
}

void Calculator::on_btn_back_clicked()
{
	QString new_label;
	new_label = ui.output->text().left(ui.output->text().length() - 1);
	if (new_label == "") {
		new_label = "0";
	}
	ui.output->setText(new_label);
}