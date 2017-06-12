#include "scorewindow.h"
#include "ui_scorewindow.h"

ScoreWindow::ScoreWindow(double score,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScoreWindow)
{
    x=5;
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(Timer()));
    timer->start();
    ui->label_2->setText(QString::number(score));
}

ScoreWindow::~ScoreWindow()
{
    delete ui;
}

void ScoreWindow::Timer()
{
    x--;
    if(x<0)
    {
        this->close();
    }
}
