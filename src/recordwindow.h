#ifndef RECORDWINDOW_H
#define RECORDWINDOW_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class RecordWindow;
}

class RecordWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RecordWindow(QWidget *parent = 0);
    ~RecordWindow();
    QTimer *timer;

private:
    Ui::RecordWindow *ui;
    int x;
    double score;
private slots:
 void Timer();
};

#endif // RECORDWINDOW_H
