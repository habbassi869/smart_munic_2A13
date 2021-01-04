#ifndef CLIENTS1_H
#define CLIENTS1_H
#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"


class clients1
{
public:
    clients1();
    clients1(QString id,QString nom,QString prenom,QString cin,QString age,QString num);
    QString getid();
        QString getnom();
        QString getcin();
        QString getprenom();
        int getage();

        int getposte();
        void setid(QString id);
        void setnom(QString nom);
        void setcin();
        void setprenom();
        void setage();
        void setsalaire();
        void setposte();
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(QString id);
    bool modifier(QString id,QString colonne,QString nouv);
    QSqlQueryModel * trier_clients1();
    QSqlQueryModel * afficherchercher(QString id);
    QSqlQuery chercher_clients1(QString idd);
    QSqlQueryModel * imprimer(QString id);

        private:
        QString id;
        QString nom;
        QString prenom;
        QString age;
        QString cin;
       QString num;

};

#endif // CLIENTS1_H
