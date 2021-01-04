#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QString"

#include <dir.h>

#include "connection.h"
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include <QSqlDatabase>
#include<QDebug>
#include "empl.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_QUit_clicked()
{
   QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    if(!ui->acces->isChecked()){
QSqlQuery query;
QString select="SELECT * FROM employer where NOM=? and ID=?" ;
query.prepare(select);

query.addBindValue(ui->lineEdit_identi->text());
query.addBindValue(ui->lineEdit_mdp->text());

if(query.exec() && query.first())
{

    ui->acces->setChecked(true);
QString poste = query.value(2).toString();
qDebug()<<poste;
if(poste=="directeur"){
    ui->DIRecteur->setChecked(true);
}
else
    ui->employer->setChecked(true);
}
}

else if(ui->acces->isChecked() && ui->employer->isChecked()){
   empl e;
   e.exec();

   }
    }



void MainWindow::on_pushButton_2_clicked()
{
    ui->employer->setChecked(false);
    ui->DIRecteur->setChecked(false);
    ui->acces->setChecked(false);
}
