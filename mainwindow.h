#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //QCheckBox find();

signals:
    void checkBoxSignal(const int boxsNumber,const int weight);
//    void checkBox01Signaltest(const int a,const int b);

public slots:
    void checkBoxHign04Slots(const int state);
    void checkBoxHign03Slots(const int state);
    void checkBoxHign02Slots(const int state);
    void checkBoxHign01Slots(const int state);
    void checkBoxLow04Slots(const int state);
    void checkBoxLow03Slots(const int state);
    void checkBoxLow02Slots(const int state);
    void checkBoxLow01Slots(const int state);
    void setSum(const int boxsNumber,const int weight);
    void textBoxPrintf();
    void allBoxClear();
    void checkBoxs01Clear();
    void checkBoxs02Clear();
    void checkBoxs03Clear();
    void checkBoxs04Clear();

private:
    Ui::MainWindow *ui;
    int sum[8] = {0};
};

#endif // MAINWINDOW_H
