#include "clients1.h"
#include "QString"
#include<QDebug>
clients1::clients1()
{
}



clients1::clients1(QString id,QString nom,QString prenom,QString cin,QString age,QString num)
{this->id=id;
 this->nom=nom;
 this->prenom=prenom;
 this->cin=cin;

 this->age=age;
 this->num=num;
  }



bool clients1::ajouter(){
  QSqlQuery query;

  query.prepare("INSERT INTO client(nom,prenom,id,cin,age,num)" "VALUES ( :nom, :prenom, :id, :cin, :age, :num)");
                           query.bindValue(":nom",nom);
                           query.bindValue(":prenom",prenom);
                           query.bindValue(":id",id);

                           query.bindValue(":cin",cin);
                           query.bindValue(":age",age);
                           query.bindValue(":num",num);

                   return query.exec();
           }
bool clients1::supprimer(QString id){
    QSqlQuery query;
    query.prepare("DELETE FROM client where ID= :id");
            query.bindValue(":id",id);
    return query.exec();

}
QSqlQueryModel  * clients1:: afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * from client");
    model->setHeaderData(1,Qt::Vertical,QObject::tr("id"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(3,Qt::Vertical,QObject::tr("prenom"));
    model->setHeaderData(4,Qt::Vertical,QObject::tr("cin"));
    model->setHeaderData(5,Qt::Vertical,QObject::tr("age"));
    model->setHeaderData(5,Qt::Vertical,QObject::tr("num"));
return model;


}
bool clients1::modifier(QString id,QString colonne,QString nouv){

    QSqlQuery query;
QString select;
if(colonne=="nom"){
        query.prepare("update client set nom=:nouv where id=:id ");
        query.bindValue(":nouv",nouv);
        query.bindValue(":id",id);

}
if(colonne=="prenom"){
        query.prepare("update client set prenom=:nouv   where id =:id");
        query.bindValue(":nouv",nouv);
        query.bindValue(":id",id);
}
if(colonne=="cin"){
        query.prepare("update client set cin=:nouv  where id =:id");
        query.bindValue(":nouv",nouv);
        query.bindValue(":id",id);
}
if(colonne=="age"){
        query.prepare("update client set age=:nouv  where id =:id");
        query.bindValue(":nouv",nouv);
        query.bindValue(":id",id);
}
if(colonne=="num"){
        query.prepare("update client set num=:nouv   where id =:id");
        query.bindValue(":nouv",nouv);
        query.bindValue(":id",id);
}

return query.exec();

}

QSqlQueryModel * clients1::trier_clients1()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT * from client ORDER BY NOM ASC");
model->setHeaderData(1,Qt::Vertical,QObject::tr("id"));
model->setHeaderData(2,Qt::Vertical,QObject::tr("nom"));
model->setHeaderData(3,Qt::Vertical,QObject::tr("prenom"));
model->setHeaderData(4,Qt::Vertical,QObject::tr("cin"));
model->setHeaderData(5,Qt::Vertical,QObject::tr("age"));
model->setHeaderData(5,Qt::Vertical,QObject::tr("num"));
return model;
}

QSqlQuery clients1::chercher_clients1(QString idd){
    QSqlQuery q;
q.prepare("select * from client where ID=?");
q.addBindValue(idd);
    return q;
}

QSqlQueryModel * clients1::afficherchercher(QString id){
    qDebug()<<id;


    QSqlQuery q;
    q.prepare("select * from client where ID=?");
    q.addBindValue(id);
q.exec();
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery(q);
    model->setHeaderData(1,Qt::Vertical,QObject::tr("id"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(3,Qt::Vertical,QObject::tr("prenom"));
    model->setHeaderData(4,Qt::Vertical,QObject::tr("cin"));
    model->setHeaderData(5,Qt::Vertical,QObject::tr("age"));
    model->setHeaderData(5,Qt::Vertical,QObject::tr("num"));
    return model;

}


QSqlQueryModel *clients1::imprimer(QString id){



    QSqlQuery q;
    q.prepare("select * from client where ID=?");
    q.addBindValue(id);
q.exec();
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery(q);
model->setHeaderData(1,Qt::Vertical,QObject::tr("id"));
model->setHeaderData(2,Qt::Vertical,QObject::tr("nom"));
model->setHeaderData(3,Qt::Vertical,QObject::tr("prenom"));
model->setHeaderData(4,Qt::Vertical,QObject::tr("cin"));
model->setHeaderData(5,Qt::Vertical,QObject::tr("age"));
model->setHeaderData(5,Qt::Vertical,QObject::tr("num"));

    return model;


}
