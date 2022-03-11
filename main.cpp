#include "mainwindow.h"
#include "Var.h"
#include "Fun.h"

#include <qapplication.h>
#include <qlabel.h>
#include <qpushbutton.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedWidth(1440);
    w.setFixedHeight(810);
    w.setWindowTitle("Internet Scanner For Linux");
    QLabel *num;
    QPushButton *GetIP;
    GetIP = new QPushButton("GetIP", &w);
    num = new QLabel("0Up", &w);
    //w.ComputerIP = new QLabel("", &w);
    //w.ComputerIP -> hide();
    num -> move(5, 5);
    GetIP -> move(5, 30);
    //QObject::connect(&w, &MainWindow::SignalsAtComputerIP, &w, &MainWindow::RunIP);
    w.show();
    return a.exec();
}
