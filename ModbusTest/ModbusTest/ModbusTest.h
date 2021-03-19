#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ModbusTest.h"
#include "RS485.h"
class ModbusTest : public QMainWindow
{
    Q_OBJECT

public:
    ModbusTest(QWidget *parent = Q_NULLPTR);
public slots:
    void SlotWriteCmd();
private:
    Ui::ModbusTestClass ui;
    RS485 *m_rs485;
};
