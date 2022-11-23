/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QAction *close;
    QWidget *centralWidget;
    QLabel *output;
    QPushButton *action_div;
    QPushButton *action_x;
    QPushButton *action_plus;
    QPushButton *action_minus;
    QPushButton *num_7;
    QPushButton *num_8;
    QPushButton *num_9;
    QPushButton *action_result;
    QPushButton *num_4;
    QPushButton *num_5;
    QPushButton *num_6;
    QPushButton *action_sqrt;
    QPushButton *num_2;
    QPushButton *btn_pnm;
    QPushButton *num_1;
    QPushButton *num_3;
    QPushButton *num_0;
    QPushButton *btn_point;
    QPushButton *action_per;
    QPushButton *action_clear;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName("CalculatorClass");
        CalculatorClass->resize(315, 540);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorClass->sizePolicy().hasHeightForWidth());
        CalculatorClass->setSizePolicy(sizePolicy);
        CalculatorClass->setMinimumSize(QSize(315, 540));
        CalculatorClass->setMaximumSize(QSize(315, 540));
        close = new QAction(CalculatorClass);
        close->setObjectName("close");
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName("centralWidget");
        output = new QLabel(centralWidget);
        output->setObjectName("output");
        output->setGeometry(QRect(0, 0, 315, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(18);
        output->setFont(font);
        output->setLayoutDirection(Qt::LeftToRight);
        output->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border-bottom: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        output->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        action_div = new QPushButton(centralWidget);
        action_div->setObjectName("action_div");
        action_div->setGeometry(QRect(0, 110, 75, 75));
        QFont font1;
        font1.setPointSize(16);
        action_div->setFont(font1);
        action_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        action_x = new QPushButton(centralWidget);
        action_x->setObjectName("action_x");
        action_x->setGeometry(QRect(80, 110, 75, 75));
        action_x->setFont(font1);
        action_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        action_plus = new QPushButton(centralWidget);
        action_plus->setObjectName("action_plus");
        action_plus->setGeometry(QRect(160, 110, 75, 75));
        action_plus->setFont(font1);
        action_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        action_minus = new QPushButton(centralWidget);
        action_minus->setObjectName("action_minus");
        action_minus->setGeometry(QRect(240, 110, 75, 75));
        action_minus->setFont(font1);
        action_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        num_7 = new QPushButton(centralWidget);
        num_7->setObjectName("num_7");
        num_7->setGeometry(QRect(0, 190, 75, 75));
        num_7->setFont(font1);
        num_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        num_8 = new QPushButton(centralWidget);
        num_8->setObjectName("num_8");
        num_8->setGeometry(QRect(80, 190, 75, 75));
        num_8->setFont(font1);
        num_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        num_9 = new QPushButton(centralWidget);
        num_9->setObjectName("num_9");
        num_9->setGeometry(QRect(160, 190, 75, 75));
        num_9->setFont(font1);
        num_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        action_result = new QPushButton(centralWidget);
        action_result->setObjectName("action_result");
        action_result->setGeometry(QRect(240, 190, 75, 75));
        action_result->setFont(font1);
        action_result->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        num_4 = new QPushButton(centralWidget);
        num_4->setObjectName("num_4");
        num_4->setGeometry(QRect(0, 270, 75, 75));
        num_4->setFont(font1);
        num_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        num_5 = new QPushButton(centralWidget);
        num_5->setObjectName("num_5");
        num_5->setGeometry(QRect(80, 270, 75, 75));
        num_5->setFont(font1);
        num_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        num_6 = new QPushButton(centralWidget);
        num_6->setObjectName("num_6");
        num_6->setGeometry(QRect(160, 270, 75, 75));
        num_6->setFont(font1);
        num_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        action_sqrt = new QPushButton(centralWidget);
        action_sqrt->setObjectName("action_sqrt");
        action_sqrt->setGeometry(QRect(240, 270, 75, 75));
        action_sqrt->setFont(font1);
        action_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        num_2 = new QPushButton(centralWidget);
        num_2->setObjectName("num_2");
        num_2->setGeometry(QRect(80, 350, 75, 75));
        num_2->setFont(font1);
        num_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        btn_pnm = new QPushButton(centralWidget);
        btn_pnm->setObjectName("btn_pnm");
        btn_pnm->setGeometry(QRect(240, 350, 75, 75));
        btn_pnm->setFont(font1);
        btn_pnm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        num_1 = new QPushButton(centralWidget);
        num_1->setObjectName("num_1");
        num_1->setGeometry(QRect(0, 350, 75, 75));
        num_1->setFont(font1);
        num_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        num_3 = new QPushButton(centralWidget);
        num_3->setObjectName("num_3");
        num_3->setGeometry(QRect(160, 350, 75, 75));
        num_3->setFont(font1);
        num_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        num_0 = new QPushButton(centralWidget);
        num_0->setObjectName("num_0");
        num_0->setGeometry(QRect(0, 430, 75, 75));
        num_0->setFont(font1);
        num_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        btn_point = new QPushButton(centralWidget);
        btn_point->setObjectName("btn_point");
        btn_point->setGeometry(QRect(80, 430, 75, 75));
        btn_point->setFont(font1);
        btn_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        action_per = new QPushButton(centralWidget);
        action_per->setObjectName("action_per");
        action_per->setGeometry(QRect(240, 430, 75, 75));
        action_per->setFont(font1);
        action_per->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        action_clear = new QPushButton(centralWidget);
        action_clear->setObjectName("action_clear");
        action_clear->setGeometry(QRect(160, 430, 75, 75));
        action_clear->setFont(font1);
        action_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(132, 224, 132);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #90EE90, stop: 1 #68F768);\n"
"}"));
        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 315, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName("menu_2");
        CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorClass);
        mainToolBar->setObjectName("mainToolBar");
        CalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(close);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QCoreApplication::translate("CalculatorClass", "Calculator", nullptr));
        close->setText(QCoreApplication::translate("CalculatorClass", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        output->setText(QCoreApplication::translate("CalculatorClass", "0", nullptr));
        action_div->setText(QCoreApplication::translate("CalculatorClass", "/", nullptr));
        action_x->setText(QCoreApplication::translate("CalculatorClass", "x", nullptr));
        action_plus->setText(QCoreApplication::translate("CalculatorClass", "+", nullptr));
        action_minus->setText(QCoreApplication::translate("CalculatorClass", "-", nullptr));
        num_7->setText(QCoreApplication::translate("CalculatorClass", "7", nullptr));
        num_8->setText(QCoreApplication::translate("CalculatorClass", "8", nullptr));
        num_9->setText(QCoreApplication::translate("CalculatorClass", "9", nullptr));
        action_result->setText(QCoreApplication::translate("CalculatorClass", "=", nullptr));
        num_4->setText(QCoreApplication::translate("CalculatorClass", "4", nullptr));
        num_5->setText(QCoreApplication::translate("CalculatorClass", "5", nullptr));
        num_6->setText(QCoreApplication::translate("CalculatorClass", "6", nullptr));
        action_sqrt->setText(QCoreApplication::translate("CalculatorClass", "SQRT", nullptr));
        num_2->setText(QCoreApplication::translate("CalculatorClass", "2", nullptr));
        btn_pnm->setText(QCoreApplication::translate("CalculatorClass", "+/-", nullptr));
        num_1->setText(QCoreApplication::translate("CalculatorClass", "1", nullptr));
        num_3->setText(QCoreApplication::translate("CalculatorClass", "3", nullptr));
        num_0->setText(QCoreApplication::translate("CalculatorClass", "0", nullptr));
        btn_point->setText(QCoreApplication::translate("CalculatorClass", ".", nullptr));
        action_per->setText(QCoreApplication::translate("CalculatorClass", "%", nullptr));
        action_clear->setText(QCoreApplication::translate("CalculatorClass", "C", nullptr));
        menu->setTitle(QCoreApplication::translate("CalculatorClass", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("CalculatorClass", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
