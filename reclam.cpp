#include "reclam.h"

#include "QString"
#include<QDebug>
reclam::reclam()
{

}
reclam::reclam(QString id,QString nom,QString prenom,QString cin,int num,QString sujet)
{this->id=id;
 this->nom=nom;
 this->prenom=prenom;
 this->cin=cin;


 this->sujet=sujet;
 this->num=num;
  }



bool reclam::ajouter(){
  QSqlQuery query;

  QString num1=QString::number(num);
  query.prepare("INSERT INTO reclamation(nom,prenom,id,cin,sujet,num)" "VALUES ( :nom, :prenom, :id, :cin, :sujet, :num)");

                           query.bindValue(":id",id);
                           query.bindValue(":nom",nom);
                           query.bindValue(":prenom",prenom);

                           query.bindValue(":cin",cin);
                           query.bindValue(":sujet",sujet);
                           query.bindValue(":num",num1);

                   return query.exec();
           }
bool reclam::supprimer(QString id){
    QSqlQuery query;
    query.prepare("DELETE FROM reclamation where ID= :id");
            query.bindValue(":id",id);
    return query.exec();

}
QSqlQueryModel  * reclam:: afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * from reclamation");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("num"));
     model->setHeaderData(5,Qt::Horizontal,QObject::tr("sujet"));
return model;


}
bool reclam::modifier(QString id,QString colonne,QString nouv){

    QSqlQuery query;
if(colonne=="nom"){
        query.prepare("update reclamation set nom=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="prenom"){
        query.prepare("update reclamation set prenom=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="cin"){
        query.prepare("update reclamation set cin=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="num"){
        query.prepare("update reclamation set num=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}

qDebug()<<colonne<<nouv<<id;
return query.exec();

}

QSqlQueryModel * reclam::trier_reclam()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT * from reclamation ORDER BY NOM ASC");
model->setHeaderData(1,Qt::Vertical,QObject::tr("id"));
model->setHeaderData(2,Qt::Vertical,QObject::tr("nom"));
model->setHeaderData(3,Qt::Vertical,QObject::tr("prenom"));
model->setHeaderData(4,Qt::Vertical,QObject::tr("cin"));
model->setHeaderData(5,Qt::Vertical,QObject::tr("num"));
model->setHeaderData(5,Qt::Vertical,QObject::tr("sujet"));
return model;
}

QSqlQuery reclam::chercher_reclam(QString idd){
    QSqlQuery q;
q.prepare("select * from reclamation where ID=?");
q.addBindValue(idd);
    return q;
}

QSqlQueryModel * reclam::afficherchercher(QString id){
    qDebug()<<id;


    QSqlQuery q;
    q.prepare("select * from reclamation where ID=?");
    q.addBindValue(id);
q.exec();
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery(q);
    model->setQuery("SELECT * from reclamation");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("num"));
     model->setHeaderData(5,Qt::Horizontal,QObject::tr("sujet"));
    return model;

}


QSqlQueryModel *reclam::stat(QString k){
QSqlQuery q;
    if(k=="min"){

q.prepare("SELECT  NUM, nom, prenom FROM   reclamation  WHERE  NUM=(SELECT MAX(NUM) FROM reclamation)");
q.exec();
        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery(q);
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("num"));
         model->setHeaderData(5,Qt::Horizontal,QObject::tr("sujet"));
        return model;
      }

else {
    q.prepare("SELECT  NUM, nom, prenom FROM   reclamation  WHERE  NUM=(SELECT MIN(NUM) FROM reclamation)");
    q.exec();
            QSqlQueryModel * model=new QSqlQueryModel();
            model->setQuery(q);
            model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
            model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
            model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
            model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
            model->setHeaderData(4,Qt::Horizontal,QObject::tr("num"));
             model->setHeaderData(5,Qt::Horizontal,QObject::tr("sujet"));

            return model;
}
}



