#ifndef RECLAM_H
#define RECLAM_H
#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"

class reclam
{

    public:
        reclam();
        reclam(QString id,QString nom,QString prenom,QString cin,int num,QString sujet);
        QString getid();
            QString getnom();
            QString getcin();
            QString getprenom();
             QString getsujet();


            void setid(QString id);
            void setnom(QString nom);


            bool ajouter();
            QSqlQueryModel * afficher();
            bool supprimer(QString id);
        bool modifier(QString id,QString colonne,QString nouv);
        QSqlQueryModel * trier_reclam();
        QSqlQueryModel * afficherchercher(QString id);
        QSqlQuery chercher_reclam(QString idd);
        QSqlQueryModel *stat(QString k);

            private:
            QString id;
            QString nom;
            QString prenom;
            QString sujet ;
            QString cin;
           int num;



};

#endif // RECLAM_H
