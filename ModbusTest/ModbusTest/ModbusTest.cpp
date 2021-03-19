#include "ModbusTest.h"

ModbusTest::ModbusTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    m_rs485 = new RS485(this);
    connect(ui.m_btnWrite,SIGNAL(clicked()),this,SLOT(SlotWriteCmd()));
}

void ModbusTest::SlotWriteCmd()
{
    QString nSerialPort = ui.m_SPlineEdit->text();//´®¿ÚºÅ
    int nBaudRate = ui.m_BRlineEdit->text().toInt();//²¨ÌØÂÊ
    int nDeviceAddress = ui.m_DAdrlineEdit->text().toInt();
    int  nRegistAdress = ui.m_RAlineEdit->text().toInt();//µØÖ·¼Ä´æÆ÷
    short nValue = ui.m_DlineEdit->text().toShort();//Öµ
    m_rs485->LinkUart(nSerialPort,nBaudRate);
    m_rs485->Request06(nDeviceAddress, nRegistAdress, nValue);//Ğ´µ¥¸ö¼Ä´æÆ÷
    ui.m_RDtextEdit->setText(m_rs485->getReturnData());
}