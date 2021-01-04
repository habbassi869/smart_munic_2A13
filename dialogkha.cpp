#include "dialogkha.h"
#include "ui_dialogkha.h"
#include "clients1.h"
#include <QMessageBox>
#include "reclam.h"
#include <QPrinter>
#include <QPrintDialog>

Dialogkha::Dialogkha(QWidget *parent,int k,QString id) :
    QDialog(parent),
    ui(new Ui::Dialogkha)
{
    ui->setupUi(this);
    clients1 c;
    reclam ce;
    ui->setupUi(this);
    if(k==0){
ui->tableView->setModel(c.afficher());
    }
    if(k==1){

        ui->tableView->setModel(c.trier_clients1());
        }
    if(k==2){
         ui->tableView->setModel(c.afficherchercher(id));
}
if(k==3){
 ui->tableView->setModel(ce.afficher());
}
if(k==4){

    ui->tableView->setModel(ce.trier_reclam());
    }
if(k==5){
     ui->tableView->setModel(ce.afficherchercher(id));
}
if(k==6)
    ui->tableView->setModel(ce.stat(id));
if(k==8)
{
    QPrinter printer;
    printer.setPrinterName("printer name");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec()==QDialog::Rejected)
       return;
    else{
        ui->tableView->setModel(c.imprimer(id));
ui->tableView->render(&printer);

    }}
}
Dialogkha::~Dialogkha()
{
    delete ui;
}



