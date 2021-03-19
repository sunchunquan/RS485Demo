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
    QString nSerialPort = ui.m_SPlineEdit->text();//���ں�
    int nBaudRate = ui.m_BRlineEdit->text().toInt();//������
    int nDeviceAddress = ui.m_DAdrlineEdit->text().toInt();
    int  nRegistAdress = ui.m_RAlineEdit->text().toInt();//��ַ�Ĵ���
    short nValue = ui.m_DlineEdit->text().toShort();//ֵ
    m_rs485->LinkUart(nSerialPort,nBaudRate);
    m_rs485->Request06(nDeviceAddress, nRegistAdress, nValue);//д�����Ĵ���
    ui.m_RDtextEdit->setText(m_rs485->getReturnData());
}