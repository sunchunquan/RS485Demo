/********************************************************************************
** Form generated from reading UI file 'ModbusTest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODBUSTEST_H
#define UI_MODBUSTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModbusTestClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_lData;
    QLabel *m_lRegisterAddress;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *m_DlineEdit;
    QLineEdit *m_RAlineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_btnWrite;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextEdit *m_RDtextEdit;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *m_SerialPort;
    QLineEdit *m_SPlineEdit;
    QSpacerItem *horizontalSpacer;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_6;
    QLabel *m_DeviceAddress;
    QLineEdit *m_BRlineEdit;
    QSpacerItem *horizontalSpacer_6;
    QLabel *m_BaudRate;
    QLineEdit *m_DAdrlineEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModbusTestClass)
    {
        if (ModbusTestClass->objectName().isEmpty())
            ModbusTestClass->setObjectName(QStringLiteral("ModbusTestClass"));
        ModbusTestClass->resize(688, 457);
        centralWidget = new QWidget(ModbusTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 70, 601, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_lData = new QLabel(gridLayoutWidget);
        m_lData->setObjectName(QStringLiteral("m_lData"));

        gridLayout->addWidget(m_lData, 0, 3, 1, 1);

        m_lRegisterAddress = new QLabel(gridLayoutWidget);
        m_lRegisterAddress->setObjectName(QStringLiteral("m_lRegisterAddress"));

        gridLayout->addWidget(m_lRegisterAddress, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        m_DlineEdit = new QLineEdit(gridLayoutWidget);
        m_DlineEdit->setObjectName(QStringLiteral("m_DlineEdit"));

        gridLayout->addWidget(m_DlineEdit, 0, 4, 1, 1);

        m_RAlineEdit = new QLineEdit(gridLayoutWidget);
        m_RAlineEdit->setObjectName(QStringLiteral("m_RAlineEdit"));

        gridLayout->addWidget(m_RAlineEdit, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        m_btnWrite = new QPushButton(gridLayoutWidget);
        m_btnWrite->setObjectName(QStringLiteral("m_btnWrite"));

        gridLayout->addWidget(m_btnWrite, 0, 6, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 150, 601, 261));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        m_RDtextEdit = new QTextEdit(gridLayoutWidget_2);
        m_RDtextEdit->setObjectName(QStringLiteral("m_RDtextEdit"));

        gridLayout_2->addWidget(m_RDtextEdit, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 10, 281, 51));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        m_SerialPort = new QLabel(gridLayoutWidget_3);
        m_SerialPort->setObjectName(QStringLiteral("m_SerialPort"));

        gridLayout_4->addWidget(m_SerialPort, 1, 2, 1, 1);

        m_SPlineEdit = new QLineEdit(gridLayoutWidget_3);
        m_SPlineEdit->setObjectName(QStringLiteral("m_SPlineEdit"));

        gridLayout_4->addWidget(m_SPlineEdit, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 4, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(310, 10, 321, 51));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        m_DeviceAddress = new QLabel(gridLayoutWidget_4);
        m_DeviceAddress->setObjectName(QStringLiteral("m_DeviceAddress"));

        gridLayout_6->addWidget(m_DeviceAddress, 1, 5, 1, 1);

        m_BRlineEdit = new QLineEdit(gridLayoutWidget_4);
        m_BRlineEdit->setObjectName(QStringLiteral("m_BRlineEdit"));

        gridLayout_6->addWidget(m_BRlineEdit, 1, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 1, 4, 1, 1);

        m_BaudRate = new QLabel(gridLayoutWidget_4);
        m_BaudRate->setObjectName(QStringLiteral("m_BaudRate"));

        gridLayout_6->addWidget(m_BaudRate, 1, 2, 1, 1);

        m_DAdrlineEdit = new QLineEdit(gridLayoutWidget_4);
        m_DAdrlineEdit->setObjectName(QStringLiteral("m_DAdrlineEdit"));

        gridLayout_6->addWidget(m_DAdrlineEdit, 1, 6, 1, 1);

        ModbusTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ModbusTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ModbusTestClass->setStatusBar(statusBar);

        retranslateUi(ModbusTestClass);

        QMetaObject::connectSlotsByName(ModbusTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModbusTestClass)
    {
        ModbusTestClass->setWindowTitle(QApplication::translate("ModbusTestClass", "ModbusTest", Q_NULLPTR));
        m_lData->setText(QApplication::translate("ModbusTestClass", "\346\225\260\346\215\256:", Q_NULLPTR));
        m_lRegisterAddress->setText(QApplication::translate("ModbusTestClass", "\350\265\267\345\247\213\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        m_btnWrite->setText(QApplication::translate("ModbusTestClass", "\345\206\231\345\205\245", Q_NULLPTR));
        m_SerialPort->setText(QApplication::translate("ModbusTestClass", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        m_DeviceAddress->setText(QApplication::translate("ModbusTestClass", "\350\256\276\345\244\207\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        m_BaudRate->setText(QApplication::translate("ModbusTestClass", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModbusTestClass: public Ui_ModbusTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODBUSTEST_H
