#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->checkBox01, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox02, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox03, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox04, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox05, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox06, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox07, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox08, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));

    connect(ui->checkBox09, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox10, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox11, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox12, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox13, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox14, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox15, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox16, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));
//
    connect(ui->checkBox01_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox02_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox03_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox04_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox05_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox06_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox07_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox08_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));

    connect(ui->checkBox09_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox10_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox11_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox12_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox13_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox14_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox15_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox16_2, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));
//
    connect(ui->checkBox01_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox02_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox03_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox04_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox05_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox06_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox07_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox08_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));

    connect(ui->checkBox09_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox10_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox11_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox12_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox13_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox14_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox15_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox16_3, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));
//
    connect(ui->checkBox01_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox02_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox03_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox04_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox05_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox06_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox07_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox08_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));

    connect(ui->checkBox09_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign04Slots(int)));
    connect(ui->checkBox10_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign03Slots(int)));
    connect(ui->checkBox11_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign02Slots(int)));
    connect(ui->checkBox12_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxHign01Slots(int)));

    connect(ui->checkBox13_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow04Slots(int)));
    connect(ui->checkBox14_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow03Slots(int)));
    connect(ui->checkBox15_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow02Slots(int)));
    connect(ui->checkBox16_4, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxLow01Slots(int)));

 //   connect(ui->checkBox02, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxSlots(int)));
  //  connect(ui->checkBox03, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxSlots(int)));
  //  connect(ui->checkBox04, SIGNAL(stateChanged(int)), this,  SLOT(checkBoxSlots(int)));

    connect(this, SIGNAL(checkBoxSignal(int,int)), this,  SLOT(setSum(int,int)));//计算sum

    connect(ui->clearButton, SIGNAL(clicked()), this,  SLOT(allBoxClear()));       //清除
    connect(ui->clearButton_1, SIGNAL(clicked()), this,  SLOT(checkBoxs01Clear()));
    connect(ui->clearButton_2, SIGNAL(clicked()), this,  SLOT(checkBoxs02Clear()));
    connect(ui->clearButton_3, SIGNAL(clicked()), this,  SLOT(checkBoxs03Clear()));
    connect(ui->clearButton_4, SIGNAL(clicked()), this,  SLOT(checkBoxs04Clear()));


    connect(ui->EnterButton, SIGNAL(clicked()), this,  SLOT(textBoxPrintf()));//取模

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setSum(const int boxsNumber,const int weight)//
{
    MainWindow::sum[boxsNumber] += weight;
    ui->lineEdit->setText(QString::number(sum[2]));
    ui->lineEdit_2->setText(QString::number(sum[3]));
}

void MainWindow::textBoxPrintf()
{
  /*  QChar a[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f',};
    QChar b[]={'0','x','/','/',','};
    b[2] = a[MainWindow::sum[1]];
    b[3] = a[MainWindow::sum[0]];
    //ui->textEdit->setText(QString::number(MainWindow::sum));
    ui->textEdit->setText(QString::fromRawData(b,5));//
    ui->textEdit->append("hello");
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText("hello");*/
    QString a = {"0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,"};
    for (int i=0;i<8;i++)
    {
        if (MainWindow::sum[i] >15)
        {
             a.replace(5*i+2,2,QString::number(MainWindow::sum[i],16));
        }
        else
        {
             a.replace(5*i+3,1,QString::number(MainWindow::sum[i],16));
        }
    }

    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText(a);
    ui->textEdit->append("");
}

/*void MainWindow::checkBoxSignaltest(const int a,const int b)//(1高0低,位)
{
    emit checkBoxSignaltest(4,128);
}*/

void MainWindow::allBoxClear()
{
    ui->textEdit->setText("");
    checkBoxs01Clear();
    checkBoxs02Clear();
    checkBoxs03Clear();
    checkBoxs04Clear();
}

void MainWindow::checkBoxs01Clear()
{
    ui->textEdit->setText("");
    ui->checkBox01->setChecked(false);
    ui->checkBox02->setChecked(false);
    ui->checkBox03->setChecked(false);
    ui->checkBox04->setChecked(false);
    ui->checkBox05->setChecked(false);
    ui->checkBox06->setChecked(false);
    ui->checkBox07->setChecked(false);
    ui->checkBox08->setChecked(false);
    ui->checkBox09->setChecked(false);
    ui->checkBox10->setChecked(false);
    ui->checkBox11->setChecked(false);
    ui->checkBox12->setChecked(false);
    ui->checkBox13->setChecked(false);
    ui->checkBox14->setChecked(false);
    ui->checkBox15->setChecked(false);
    ui->checkBox16->setChecked(false);
}

void MainWindow::checkBoxs02Clear()
{
    ui->textEdit->setText("");
    ui->checkBox01_2->setChecked(false);
    ui->checkBox02_2->setChecked(false);
    ui->checkBox03_2->setChecked(false);
    ui->checkBox04_2->setChecked(false);
    ui->checkBox05_2->setChecked(false);
    ui->checkBox06_2->setChecked(false);
    ui->checkBox07_2->setChecked(false);
    ui->checkBox08_2->setChecked(false);
    ui->checkBox09_2->setChecked(false);
    ui->checkBox10_2->setChecked(false);
    ui->checkBox11_2->setChecked(false);
    ui->checkBox12_2->setChecked(false);
    ui->checkBox13_2->setChecked(false);
    ui->checkBox14_2->setChecked(false);
    ui->checkBox15_2->setChecked(false);
    ui->checkBox16_2->setChecked(false);
}

void MainWindow::checkBoxs03Clear()
{
    ui->textEdit->setText("");
    ui->checkBox01_3->setChecked(false);
    ui->checkBox02_3->setChecked(false);
    ui->checkBox03_3->setChecked(false);
    ui->checkBox04_3->setChecked(false);
    ui->checkBox05_3->setChecked(false);
    ui->checkBox06_3->setChecked(false);
    ui->checkBox07_3->setChecked(false);
    ui->checkBox08_3->setChecked(false);
    ui->checkBox09_3->setChecked(false);
    ui->checkBox10_3->setChecked(false);
    ui->checkBox11_3->setChecked(false);
    ui->checkBox12_3->setChecked(false);
    ui->checkBox13_3->setChecked(false);
    ui->checkBox14_3->setChecked(false);
    ui->checkBox15_3->setChecked(false);
    ui->checkBox16_3->setChecked(false);
}

void MainWindow::checkBoxs04Clear()
{
    ui->textEdit->setText("");
    ui->checkBox01_4->setChecked(false);
    ui->checkBox02_4->setChecked(false);
    ui->checkBox03_4->setChecked(false);
    ui->checkBox04_4->setChecked(false);
    ui->checkBox05_4->setChecked(false);
    ui->checkBox06_4->setChecked(false);
    ui->checkBox07_4->setChecked(false);
    ui->checkBox08_4->setChecked(false);
    ui->checkBox09_4->setChecked(false);
    ui->checkBox10_4->setChecked(false);
    ui->checkBox11_4->setChecked(false);
    ui->checkBox12_4->setChecked(false);
    ui->checkBox13_4->setChecked(false);
    ui->checkBox14_4->setChecked(false);
    ui->checkBox15_4->setChecked(false);
    ui->checkBox16_4->setChecked(false);
}


void MainWindow::checkBoxHign04Slots(int state)//高4
{
    int a=0;
    if (sender() == ui->checkBox01)
    {
        a=0;
    }
    else if(sender() == ui->checkBox09)
    {
        a=1;
    }
    else if(sender() == ui->checkBox01_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox09_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox01_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox09_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox01_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox09_4)
    {
        a=7;
    }

    if (state == Qt::Checked) // "选中"
    {
        emit checkBoxSignal(a,128);
    }
    else // 未选中 - Qt::Unchecked
    {
        emit checkBoxSignal(a,-128);
    }
}

void MainWindow::checkBoxHign03Slots(int state)//高3
{
    int a=0;
    if (sender() == ui->checkBox02)
    {
        a=0;
    }
    else if(sender() == ui->checkBox10)
    {
        a=1;
    }
    else if(sender() == ui->checkBox02_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox10_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox02_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox10_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox02_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox10_4)
    {
        a=7;
    }
    if (state == Qt::Checked)    
    {
        emit checkBoxSignal(a,64);
    }
    else
    {
        emit checkBoxSignal(a,-64);
    }
}

void MainWindow::checkBoxHign02Slots(int state)//高2
{
    int a=0;
    if (sender() == ui->checkBox03)
    {
        a=0;
    }
    else if(sender() == ui->checkBox11)
    {
        a=1;
    }
    else if(sender() == ui->checkBox03_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox11_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox03_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox11_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox03_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox11_4)
    {
        a=7;
    }
    if (state == Qt::Checked)
    {
        emit checkBoxSignal(a,32);
    }
    else
    {
        emit checkBoxSignal(a,-32);
    }
}

void MainWindow::checkBoxHign01Slots(int state)//高1
{
    int a=0;
    if (sender() == ui->checkBox04)
    {
        a=0;
    }
    else if(sender() == ui->checkBox12)
    {
        a=1;
    }
    else if(sender() == ui->checkBox04_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox12_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox04_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox12_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox04_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox12_4)
    {
        a=7;
    }
    if (state == Qt::Checked)
    {
        emit checkBoxSignal(a,16);
    }
    else
    {
        emit checkBoxSignal(a,-16);
    }
}

void MainWindow::checkBoxLow04Slots(int state)//低4
{
    int a=0;
    if (sender() == ui->checkBox05)
    {
        a=0;
    }
    else if(sender() == ui->checkBox13)
    {
        a=1;
    }
    else if(sender() == ui->checkBox05_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox13_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox05_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox13_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox05_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox13_4)
    {
        a=7;
    }
    if (state == Qt::Checked)
    {
        emit checkBoxSignal(a,8);
    }
    else
    {
        emit checkBoxSignal(a,-8);
    }
}

void MainWindow::checkBoxLow03Slots(int state)//低3
{
    int a=0;
    if (sender() == ui->checkBox06)
    {
        a=0;
    }
    else if(sender() == ui->checkBox14)
    {
        a=1;
    }
    else if(sender() == ui->checkBox06_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox14_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox06_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox14_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox06_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox14_4)
    {
        a=7;
    }
    if (state == Qt::Checked)
    {
        emit checkBoxSignal(a,4);
    }
    else
    {
        emit checkBoxSignal(a,-4);
    }
}

void MainWindow::checkBoxLow02Slots(int state)//低2
{
    int a=0;
    if (sender() == ui->checkBox07)
    {
        a=0;
    }
    else if(sender() == ui->checkBox15)
    {
        a=1;
    }
    else if(sender() == ui->checkBox07_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox15_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox07_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox15_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox07_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox15_4)
    {
        a=7;
    }
    if (state == Qt::Checked)
    {
        emit checkBoxSignal(a,2);
    }
    else
    {
        emit checkBoxSignal(a,-2);
    }
}

void MainWindow::checkBoxLow01Slots(int state)//低1
{
    int a=0;
    if (sender() == ui->checkBox08)
    {
        a=0;
    }
    else if(sender() == ui->checkBox16)
    {
        a=1;
    }
    else if(sender() == ui->checkBox08_2)
    {
        a=2;
    }
    else if(sender() == ui->checkBox16_2)
    {
        a=3;
    }
    else if(sender() == ui->checkBox08_3)
    {
        a=4;
    }
    else if(sender() == ui->checkBox16_3)
    {
        a=5;
    }
    else if(sender() == ui->checkBox08_4)
    {
        a=6;
    }
    else if(sender() == ui->checkBox16_4)
    {
        a=7;
    }
    if (state == Qt::Checked)
    {
        emit checkBoxSignal(a,1);
    }
    else
    {
        emit checkBoxSignal(a,-1);
    }
}

/*void MainWindow::checkBoxSlots(int state)
{
    if (state == Qt::Checked) // "选中"
    {
        ui->label->setText("Checked");
        MainWindow::sum += 1;
        ui->textEdit->setText(QString::number(MainWindow::sum));
    }
    else if(state == Qt::PartiallyChecked) // "半选"
    {
        ui->label->setText("PartiallyChecked");
    }
    else // 未选中 - Qt::Unchecked
    {
        ui->label->setText("Unchecked");
        MainWindow::sum += 0;
        ui->textEdit->setText(QString::number(MainWindow::sum));
    }
}*/
