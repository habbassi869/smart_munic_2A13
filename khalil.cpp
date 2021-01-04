#include "khalil.h"
#include "ui_khalil.h"
#include "clients1.h"
#include <QMessageBox>
#include "reclam.h"
#include "dialogkha.h"
#include "QInputDialog"


khalil::khalil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::khalil)
{
    ui->setupUi(this);
}

khalil::~khalil()
{
    delete ui;

}




void khalil::on_ajouter2_clicked()
{
    QString id =ui->lineid->text();
    QString nom =ui->linenom->text();
    QString prenom =ui->linepre->text();
   QString age=ui->lineage->text();
   QString num=ui->linenum->text();
   QString cin=ui->linecin->text();
    clients1 e(id,nom,prenom,cin,age,num);
            bool test=e.ajouter();
    if(test){
        QMessageBox::information(this, "ajouter", "ajout effectuer ");

       }
    else
        QMessageBox::information(this, "ajouter", "echec ");
}

void khalil::on_supprimer_2_clicked()
{
    clients1 e;
    QString id=ui->linesup->text();
    bool test=e.supprimer(id);
            if(test){
                QMessageBox::information(this, "sup", "sup effectuer ");

               }
            else
                QMessageBox::information(this, "sup", "echec ");
}

void khalil::on_modifier_2_clicked()
{
    clients1 e;
QString colonne=ui->comboBox_2->currentText();
QString nouv=ui->linemod_2->text();
QString id=ui->lineidm_2->text();
bool test=e.modifier(id,colonne,nouv);
        if(test){
            QMessageBox::information(this, "modifier", "modification effectuer ");

           }
        else
            QMessageBox::information(this, "modifier", "echec ");
}

void khalil::on_ajouter3_clicked()
{
    QString id =ui->lineid_2->text();
    QString nom =ui->linenom_2->text();
    QString prenom =ui->linepre_2->text();
QString cin=ui->linecin_2->text();
QString sujet=ui->sujet->toPlainText();
int num=ui->linenum_2->text().toInt();
    reclam e(id,nom,prenom,cin,num,sujet);
            bool test=e.ajouter();
    if(test){
        QMessageBox::information(this, "ajouter", "ajout effectuer ");

       }
    else
        QMessageBox::information(this, "ajouter", "echec ");
}

void khalil::on_supprimer_3_clicked()
{
    reclam e;
    QString id=ui->linesup2->text();
    bool test=e.supprimer(id);
            if(test){
                QMessageBox::information(this, "modifier", "sup effectuer ");

               }
            else
                QMessageBox::information(this, "modifier", "echec ");
}

void khalil::on_modifier_3_clicked()
{

QString colonne=ui->comboBox->currentText();
QString nouv=ui->linemod->text();
QString id=ui->lineidm->text();
reclam e;
bool test=e.modifier(id,colonne,nouv);
        if(test){
            QMessageBox::information(this, "modifier", "modification effectuer ");

           }
        else
            QMessageBox::information(this, "modifier", "echec ");
}
void khalil::on_affiche_clicked()
{
Dialogkha d;
d.exec();
}

void khalil::on_trier_clicked()
{
    Dialogkha d(nullptr,1);
    d.exec();
}

void khalil::on_chercher_clicked()
{
    Dialogkha d(nullptr,2,ui->linesup->text());
    d.exec();
}

void khalil::on_affiche2_clicked()
{
    Dialogkha d(nullptr,3);
    d.exec();
}

void khalil::on_trier2_clicked()
{
    Dialogkha d(nullptr,4);
    d.exec();
}

void khalil::on_chercher2_clicked()
{ Dialogkha d(nullptr,5,ui->linesup2->text());
    d.exec();

}


void khalil::on_pushButtonimp_clicked()
{ Dialogkha d(nullptr,8,ui->linesup->text());
    d.exec();

}





void khalil::on_push_sta_clicked()
{
    bool ok = false;
    QString pseudo = QInputDialog::getText(this, "choisir:", "max/min?", QLineEdit::Normal, QString(), &ok);

    if (!(ok && (pseudo=="max" || pseudo=="min")))

        QMessageBox::critical(this, "choisir", "réessayer ");

else {


Dialogkha d(nullptr,6,pseudo);
d.exec();
}

}
