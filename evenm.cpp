#include "evenm.h"
#include<QDebug>

evenm::evenm()
{}
    evenm::evenm(QString id,QString nom,QString adresse,QString date,int nbr)
    {this->id=id;
     this->nom=nom;
     this->adresse=adresse;
     this->date=date;
     this->nbr=nbr;
      }



    bool evenm::ajouter(){
      QSqlQuery query;
      QString nbr1=QString::number(nbr);
      query.prepare("INSERT INTO evenement(nom,adresse,id,evendat,nbr)" "VALUES ( :nom, :adresse, :id, :date, :nbr)");

                               query.bindValue(":nom",nom);
                               query.bindValue(":id",id);
                               query.bindValue(":date",date);
                               query.bindValue(":nbr",nbr1);
                               query.bindValue(":adresse",adresse);

                       return query.exec();
               }
    bool evenm::supprimer(QString id){
        QSqlQuery query;
        query.prepare("DELETE FROM evenement where ID= :id");
                query.bindValue(":id",id);
        return query.exec();

    }
    QSqlQueryModel  * evenm:: afficher(){
        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("SELECT * from evenement");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("adresse"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("date"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("nbr"));
    return model;


    }

    bool evenm::modifier(QString id,QString colonne,QString nouv){

        QSqlQuery query;
    if(colonne=="adresse"){
            query.prepare("update evenement set adresse=?  where id=?");
            query.addBindValue(nouv);
    query.addBindValue(id);
    }

    if(colonne=="nom"){
            query.prepare("update evenement set nom=?  where id=?");
            query.addBindValue(nouv);
    query.addBindValue(id);
    }
    if(colonne=="nbr"){
            query.prepare("update evenement set nbr=?  where id=?");
            query.addBindValue(nouv);
    query.addBindValue(id);
    }


    qDebug()<<colonne<<nouv<<id;
    return query.exec();

    }




    QSqlQueryModel * evenm::trier_evenm()
    {
        QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * from evenement ORDER BY EVENDATE ASC");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("adresse"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("date"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("nbr"));
    return model;
    }

    QSqlQuery evenm::chercher_evenm(QString idd){
        QSqlQuery q;
    q.prepare("select * from evenement where ID=?");
    q.addBindValue(idd);
        return q;
    }

    QSqlQueryModel * evenm::afficherchercher(QString id){


        QSqlQuery q;
        q.prepare("select * from evenement where ID=?");
        q.addBindValue(id);
    q.exec();
        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery(q);
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("date"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("age"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("poste"));
        return model;

    }


