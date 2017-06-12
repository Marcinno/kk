#ifndef USERWINDOW_H
#define USERWINDOW_H

#include "user.h"
#include <QMainWindow>
#include "recordwindow.h"
#include "scorewindow.h"

enum showing {m,w,a};

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = 0);
    ~UserWindow();
    void resizeEvent(QResizeEvent *event) override;
    void InsertUserToRanking(User *user,int ID);
    void ClearRanking();
    void SetShowing(showing Showing);
    void HideMen();
    void HideWomen();
    void ShowAll();
    void ShowRecordWindow();
    void ShowScoreWindow(double score);
    RecordWindow *rw;
    ScoreWindow *sw;

private:
    Ui::UserWindow *ui;
    showing Showing;
};

#endif // USERWINDOW_H
