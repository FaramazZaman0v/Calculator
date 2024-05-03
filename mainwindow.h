#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


class MainWindow : public QWidget
{

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void OnPlus();
    void OnMinus();
    void Mlt();
    void Dev();
    void Eql();
    void CE();

    void One();
    void Two();
    void Three();
    void Four();
    void Five();
    void Six();
    void Seven();
    void Eight();
    void Nine();
    void Zero();
    private:
    QLabel *lbl;
};
#endif // MAINWINDOW_H
