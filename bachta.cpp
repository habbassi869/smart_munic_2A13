#include "bachta.h"
#include "ui_bachta.h"
#include "employer.h"
#include <QMessageBox>
#include "emp.h"
#include<QDebug>
#include "evenm.h"




bachta::bachta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bachta)
{
    ui->setupUi(this);
}

bachta::~bachta()
{
    delete ui;
}


void bachta::on_pushButton_5_clicked()
{
QString id =ui->lineid->text();
QString nom =ui->linenom->text();
QString prenom =ui->linepre->text();
int salaire =(ui->linesalaire->text().toInt());
int age =(ui->lineage->text().toInt());
 QString poste =ui->linepost->text();
QString cin  =ui->linecin->text();
employer e(id,nom,prenom,cin,age,salaire,poste);
        bool test=e.ajouter();
if(test){
    QMessageBox::information(this, "ajouter", "ajout effectuer ");

   }
else
    QMessageBox::information(this, "ajouter", "echec ");

}




void bachta::on_modifier_clicked()
{
    employer e;
QString colonne=ui->comboBox->currentText();
QString nouv=ui->linemod->text();
QString id=ui->lineidm->text();
bool test=e.modifier(id,colonne,nouv);
        if(test){
            QMessageBox::information(this, "modifier", "modification effectuer ");

           }
        else
            QMessageBox::information(this, "modifier", "echec ");

      }


void bachta::on_supprimer_clicked()
{
    employer e;
QString id=ui->linesup->text();
bool test=e.supprimer(id);
        if(test){
            QMessageBox::information(this, "modifier", "sup effectuer ");

           }
        else
            QMessageBox::information(this, "modifier", "echec ");

      }



void bachta::on_ajouter2_clicked()
{
    QString id =ui->lineid_2->text();
    QString nom =ui->linenom_2->text();
    QString adresse=ui->lineadr_2->text();
    int nbr=ui->linenbr_2->text().toInt();
    QString date =(ui->dateEdit->text());

    evenm e(id,nom,date,adresse,nbr);


            bool test=e.ajouter();
    if(test){
        QMessageBox::information(this, "ajouter", "ajout effectuer ");

       }
    else
        QMessageBox::information(this, "ajouter", "echec ");

}



void bachta::on_supprimer_2_clicked()
{
    evenm e;
QString id=ui->linesup2->text();
bool test=e.supprimer(id);
        if(test){
            QMessageBox::information(this, "modifier", "sup effectuer ");

           }
        else
            QMessageBox::information(this, "modifier", "echec ");

      }


void bachta::on_modifier_3_clicked()
{
    evenm e;
QString colonne=ui->comboBox->currentText();
QString nouv=ui->linemod->text();
QString id=ui->lineidm->text();
bool test=e.modifier(id,colonne,nouv);
if(test){
    QMessageBox::information(this, "modifier", "modification effectuer ");

   }
else
    QMessageBox::information(this, "modifier", "echec ");

}
void bachta::on_affiche_clicked()
{
Dialog d;
d.exec();
}

void bachta::on_trier_clicked()
{
    Dialog d(nullptr,1);
    d.exec();
}

void bachta::on_chercher_clicked()
{
    Dialog d(nullptr,2,ui->linesup->text());
    d.exec();
}

void bachta::on_affiche2_clicked()
{
    Dialog d(nullptr,3);
    d.exec();
}

void bachta::on_trier2_clicked()
{
    Dialog d(nullptr,4);
    d.exec();
}

void bachta::on_chercher2_clicked()
{
    Dialog d(nullptr,5,ui->linesup2->text());
    d.exec();

}




