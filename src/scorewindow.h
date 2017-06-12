#ifndef SCOREWINDOW_H
#define SCOREWINDOW_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class ScoreWindow;
}

class ScoreWindow : public QDialog
{
    Q_OBJECT

public:
     explicit ScoreWindow(double score,QWidget *parent = 0);
    ~ScoreWindow();


private:
    Ui::ScoreWindow *ui;
    QTimer *timer;
    int x;

private slots:
 void Timer();
};

#endif // SCOREWINDOW_H
