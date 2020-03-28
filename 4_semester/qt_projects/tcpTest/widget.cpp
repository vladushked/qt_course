#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Server");

    pTcpServer = new QTcpServer(this);
    pTcpSocket = nullptr;

    if (pTcpServer->listen(QHostAddress::LocalHost, 13303)) ui->lblServerState->setText("Listen");
    else ui->lblServerState->setText("Error");

    ui->lblServerIP->setText(pTcpServer->serverAddress().toString());
    ui->lblServerPort->setNum(pTcpServer->serverPort());

    connect(pTcpServer, &QTcpServer::newConnection, this, &Widget::processingRequest);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::processingRequest()
{
    ui->lblServerState->setText("Connected");
    ui->lblExchange->setText("Request in process");
    pTcpSocket = pTcpServer->nextPendingConnection();
    connect(pTcpSocket, SIGNAL(readyRead()), SLOT(readyRead()));
    connect(pTcpSocket, &QTcpSocket::disconnected, pTcpSocket, &QTcpSocket::deleteLater);
}

void Widget::readyRead()
{
    QByteArray ba;
    ba = pTcpSocket->readAll();
    ui->lblExchange->setText("Request to send file: " + ba);
}
