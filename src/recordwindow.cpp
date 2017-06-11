#include "recordwindow.h"
#include "ui_recordwindow.h"

RecordWindow::RecordWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecordWindow)
{
    //score=0;
    x=5;
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(Timer()));
    timer->start();
    ui->label->setText(QString::number(5));
}

RecordWindow::~RecordWindow()
{
    delete ui;
}

void RecordWindow::GetScore(double sendScore)
{
    score=sendScore;
}

void RecordWindow::Timer()
{
    x--;
    ui->label->setText(QString::number(x));
    if(x<0)
    {
    // ui->label_2->setText("Twój Wynik to :");
    // ui->label_3->setText(QString::number(score));
        this->close();
    }
}
