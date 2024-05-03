#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    MainWindow window;
    window.resize(250,150);
    window.setWindowTitle("QTCalc");
    window.show();
    return app.exec();
}
