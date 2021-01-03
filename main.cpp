#include "mainwindow.h"
#include "connection.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QSqlDatabase>
#include<QDebug>
#include "employer.h"
#include "QSqlError"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;

    connection c;
    QSqlDatabase * db = new QSqlDatabase;
    qDebug() << db->drivers();

    if(c.conectionopen()==true)
    {
        QMessageBox::information(NULL, "database", "connection effectuer co");

}

w.show();




    return a.exec();
}
