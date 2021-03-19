#include "RS485.h"

RS485::RS485(QObject *parent)
    : QObject(parent)
{
    //Tick = new QTimer(this);
    //connect(Tick, SIGNAL(timeout()), this, SLOT(Tick_Server()));
    serial_enable = 0;//�������״̬
    Read_TempLong = 0;//�������ݳ��ȱ���
    myserial = new QSerialPort();
}

RS485::~RS485()
{
}

int RS485::LinkUart(QString Port,int nBoudRate) {
    
    int Err = 0;
    if (serial_enable)
    {
        return 0;
    }
    //���ô�����
    myserial->setPortName(Port);
    //�򿪴���
    Err += myserial->open(QIODevice::ReadWrite);
    //���ò�����
    Err += myserial->setBaudRate(nBoudRate);
    //��������λ��
    Err += myserial->setDataBits(QSerialPort::Data8);
    //������żУ��
    Err += myserial->setParity(QSerialPort::NoParity);
    //����ֹͣλ
    Err += myserial->setStopBits(QSerialPort::OneStop);
    //����������
    Err += myserial->setFlowControl(QSerialPort::NoFlowControl);
    //�����ź���
    connect(myserial, &QSerialPort::readyRead, this, &RS485::Read_Data);

    if (Err>5) {
        //Tick->start(5);
        serial_enable = 1;//��ǵ�ǰ������
    }
    return Err;
}

void RS485::Request06(unsigned char id, unsigned int address, unsigned short data) {
    //if (serial_enable == 0)return;
    unsigned char SenData[8];
    unsigned int CrcTemp;
    int i;
    SenData[0] = id;
    SenData[1] = 06;
    SenData[2] = address >> 8;
    SenData[3] = address & 0xFF;
    SenData[4] = data >> 8;
    SenData[5] = data & 0xFF;
    McMBCRC16(SenData, 6, &CrcTemp);
    SenData[6] = CrcTemp & 0xFF;
    SenData[7] = CrcTemp >> 8;
    myserial->write((const char *)SenData, 8);
}

void RS485::Read_Data()
{
    Read_Temp.append(myserial->readAll());
    if (Read_Temp.length()>1000)Read_Temp.clear();
}

QString RS485::getReturnData()
{
    return Read_Temp.toHex().toUpper();
}

//�رմ��ڣ��ͷ���Դ
void RS485::CloseUart() {
    if (serial_enable) {
        myserial->clear();
        myserial->close();
        myserial->deleteLater();
        //Tick->stop();
    }
}

void RS485::McMBCRC16(unsigned char *pDataIn, int iLenIn, unsigned int *pCRCOut) {
    UCHAR ucCRCHi = 0xFF;
    UCHAR ucCRCLo = 0xFF;
    int iIndex;
    while (iLenIn--)
    {
        iIndex = ucCRCLo ^ *(pDataIn++);
        ucCRCLo = (UCHAR)(ucCRCHi ^ aucCRCHi[iIndex]);
        ucCRCHi = aucCRCLo[iIndex];
    }
    *pCRCOut = (ucCRCHi << 8 | ucCRCLo);
}
