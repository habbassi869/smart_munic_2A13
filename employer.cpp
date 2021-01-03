#include "employer.h"
#include "QString"
#include<QDebug>

employer::employer(){

}

employer::employer(QString id,QString nom,QString prenom,QString cin,int age,int salaire,QString poste)
{this->id=id;
 this->nom=nom;
 this->prenom=prenom;
 this->cin=cin;

 this->age=age;
 this->salaire=salaire;
 this->poste=poste;
  }

QString employer::getid(){
  return id;
      }
QString employer::getnom(){
  return nom;
      }
void employer::setid(QString nouveau){
    id=nouveau;

}
void employer::setnom(QString nom){
    this->nom=nom;
}

bool employer::ajouter(){
  QSqlQuery query;
  QString age1=QString::number(age);
  QString salaire1=QString::number(salaire);
  (query.prepare("INSERT INTO employer(nom,prenom,id,cin,age,salaire,poste) VALUES ( :nom, :prenom, :id, :cin, :age, :salaire, :poste)"));
                           query.bindValue(":nom",nom);
                           query.bindValue(":prenom",prenom);
                           query.bindValue(":id",id);

                           query.bindValue(":cin",cin);
                           query.bindValue(":age",age1);
                           query.bindValue(":poste",poste);
                           query.bindValue(":salaire",salaire1);
                   return query.exec();
           }
bool employer::supprimer(QString id){
    QSqlQuery query;
    query.prepare("DELETE FROM employer where ID= :id");
            query.bindValue(":id",id);
    return query.exec();

}
QSqlQueryModel  * employer:: afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * from employer");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("age"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("salaire"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("poste"));

return model;


}
bool employer::modifier(QString id,QString colonne,QString nouv){

    QSqlQuery query;
if(colonne=="age"){
        query.prepare("update employer set age=?  where id=?");
        query.addBindValue(nouv);
query.addBindValue(id);
}

if(colonne=="nom"){
        query.prepare("update employer set nom=?  where id=?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="prenom"){
        query.prepare("update employer set prenom=?  where id=?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="salaire"){
        query.prepare("update employer set salaire=?  where id=?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="cin"){
        query.prepare("update employer set cin=?  where id=?");
        query.addBindValue(nouv);
query.addBindValue(id);
}

qDebug()<<colonne<<nouv<<id;
return query.exec();

}

QSqlQueryModel * employer::trier_employer()
{  QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * from employer");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("age"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("salaire"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("poste"));

return model;
}

QSqlQuery  employer::chercher_employer(QString idd){
QSqlQuery q;
q.prepare("select * from employer where ID=?");
q.addBindValue(idd);
    return q;
}

QSqlQueryModel * employer::afficherchercher(QString id){
    qDebug()<<id;


    QSqlQuery q;
    q.prepare("select * from employer where ID=?");
    q.addBindValue(id);
q.exec();
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("SELECT * from employer");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("age"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("salaire"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("poste"));


    return model;

}


