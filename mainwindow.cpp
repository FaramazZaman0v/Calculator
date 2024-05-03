#include "mainwindow.h"

bool plus=0, minus=0, mlt=0, dev=0;
double val1=0;

MainWindow::MainWindow(QWidget *parent):
QWidget(parent){
        QGridLayout *grid=new QGridLayout(this);

        QPushButton *eqlBtn=new QPushButton("=", this);
        grid->addWidget(eqlBtn, 1, 5);
        connect(eqlBtn, &QPushButton::clicked, this, &MainWindow::Eql);

        QPushButton *CEBtn=new QPushButton("CE", this);
        grid->addWidget(CEBtn, 1, 6);
        connect(CEBtn, &QPushButton::clicked, this, &MainWindow::CE);

        QPushButton *plsBtn=new QPushButton("+", this);
        grid->addWidget(plsBtn, 2, 5);
        connect(plsBtn, &QPushButton::clicked, this, &MainWindow::OnPlus);

        QPushButton *mnsBtn=new QPushButton("-", this);
        grid->addWidget(mnsBtn, 2, 6);
        connect(mnsBtn, &QPushButton::clicked, this, &MainWindow::OnMinus);

        QPushButton *mltBtn=new QPushButton("*", this);
        grid->addWidget(mltBtn, 3, 5);
        connect(mltBtn, &QPushButton::clicked, this, &MainWindow::Mlt);

        QPushButton *devBtn=new QPushButton(":", this);
        grid->addWidget(devBtn, 3, 6);
        connect(devBtn, &QPushButton::clicked, this, &MainWindow::Dev);

        //=======================================================================

        QPushButton *Btn0=new QPushButton("0", this);
        grid->addWidget(Btn0, 4, 1);
        connect(Btn0, &QPushButton::clicked, this, &MainWindow::Zero);

        QPushButton *Btn1=new QPushButton("1", this);
        grid->addWidget(Btn1, 1, 0);
        connect(Btn1, &QPushButton::clicked, this, &MainWindow::One);

        QPushButton *Btn2=new QPushButton("2", this);
        grid->addWidget(Btn2, 1, 1);
        connect(Btn2, &QPushButton::clicked, this, &MainWindow::Two);

        QPushButton *Btn3=new QPushButton("3", this);
        grid->addWidget(Btn3, 1, 2);
        connect(Btn3, &QPushButton::clicked, this, &MainWindow::Three);

        QPushButton *Btn4=new QPushButton("4", this);
        grid->addWidget(Btn4, 2, 0);
        connect(Btn4, &QPushButton::clicked, this, &MainWindow::Four);

        QPushButton *Btn5=new QPushButton("5", this);
        grid->addWidget(Btn5, 2, 1);
        connect(Btn5, &QPushButton::clicked, this, &MainWindow::Five);

        QPushButton *Btn6=new QPushButton("6", this);
        grid->addWidget(Btn6, 2, 2);
        connect(Btn6, &QPushButton::clicked, this, &MainWindow::Six);

        QPushButton *Btn7=new QPushButton("7", this);
        grid->addWidget(Btn7, 3, 0);
        connect(Btn7, &QPushButton::clicked, this, &MainWindow::Seven);

        QPushButton *Btn8=new QPushButton("8", this);
        grid->addWidget(Btn8, 3, 1);
        connect(Btn8, &QPushButton::clicked, this, &MainWindow::Eight);

        QPushButton *Btn9=new QPushButton("9", this);
        grid->addWidget(Btn9, 3, 2);
        connect(Btn9, &QPushButton::clicked, this, &MainWindow::Nine);

        lbl=new QLabel("0",this);
        grid->addWidget(lbl, 0, 6);

        setLayout(grid);
}

void MainWindow::One(){
    int val=lbl->text().toInt();
    val*=10;
    val++;
    lbl->setText(QString::number(val));
}

void MainWindow::Two(){
    int val=lbl->text().toInt();
    val*=10;
    val+=2;
    lbl->setText(QString::number(val));
}

void MainWindow::Three(){
    int val=lbl->text().toInt();
    val*=10;
    val+=3;
    lbl->setText(QString::number(val));
}

void MainWindow::Four(){
    int val=lbl->text().toInt();
    val*=10;
    val+=4;
    lbl->setText(QString::number(val));
}

void MainWindow::Five(){
    int val=lbl->text().toInt();
    val*=10;
    val+=5;
    lbl->setText(QString::number(val));
}

void MainWindow::Six(){
    int val=lbl->text().toInt();
    val*=10;
    val+=6;
    lbl->setText(QString::number(val));
}

void MainWindow::Seven(){
    int val=lbl->text().toInt();
    val*=10;
    val+=7;
    lbl->setText(QString::number(val));
}

void MainWindow::Eight(){
    int val=lbl->text().toInt();
    val*=10;
    val+=8;
    lbl->setText(QString::number(val));
}

void MainWindow::Nine(){
    int val=lbl->text().toInt();
    val*=10;
    val+=9;
    lbl->setText(QString::number(val));
}
//=========================================================
void MainWindow::Zero(){
    int val=lbl->text().toInt();
    val*=10;
    lbl->setText(QString::number(val));
}


void MainWindow::OnPlus(){
    val1=lbl->text().toDouble();
    lbl->setText(QString::number(0));
    plus=1;
}

void MainWindow::OnMinus(){
    val1=lbl->text().toDouble();
    lbl->setText(QString::number(0));
    minus=1;
}

void MainWindow::Mlt(){
    val1=lbl->text().toDouble();
    lbl->setText(QString::number(0));
    mlt=1;
}

void MainWindow::Dev(){
    val1=lbl->text().toDouble();
    lbl->setText(QString::number(0));
    dev=1;
}

void MainWindow::Eql(){
    if(plus==1){
        int val2=lbl->text().toDouble();
        val1+=val2;
        lbl->setText(QString::number(val1));
        plus=0;
    }
    else if(minus==1){
        int val2=lbl->text().toDouble();
        val1-=val2;
        lbl->setText(QString::number(val1));
        minus=0;
    }
    else if(mlt==1){
        int val2=lbl->text().toDouble();
        val1*=val2;
        lbl->setText(QString::number(val1));
        mlt=0;
    }
    else if(dev==1){
        int val2=lbl->text().toDouble();
        val1/=val2;
        lbl->setText(QString::number(val1));
        dev=0;
    }
}

void MainWindow::CE(){
    val1=0;
    plus=0;
    minus=0;
    mlt=0;
    dev=0;
    lbl->setText(QString::number(0));
}
