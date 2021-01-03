#include "emp.h"
#include "ui_emp.h"
#include "employer.h"
#include "evenm.h"

Dialog::Dialog(QWidget *parent,int n,QString id) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    evenm c;
    ui->setupUi(this);
    if(n==0){
ui->tableView->setModel(e.afficher());
}
if(n==1 )
        ui->tableView->setModel(e.trier_employer());
if(n==2){

    ui->tableView->setModel(e.afficherchercher(id));
}
if(n==3){
    ui->tableView->setModel(c.afficher());
    }
if(n==4)
    ui->tableView->setModel(c.trier_evenm());

if(n==5){
    ui->tableView->setModel(c.afficherchercher(id));

}
}
Dialog::~Dialog()
{
    delete ui;
}
