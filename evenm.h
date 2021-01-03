#ifndef EVENM_H
#define EVENM_H
#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"

class evenm
{
public:
    evenm();

    evenm(QString nom,QString date,QString adresse ,QString id,int nbr);
        QString getdate();
        QString getnom();
        QString getadresse();
        QString getaid();
        int getnbr();
        void setdate(QString date);
        void setnom(QString nom);
        void setadresse(QString adresse);
        void setid(QString id);
        void setnbr();
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(QString id);
        bool modifier(QString id,QString colonne,QString nouv);
        QSqlQueryModel * trier_evenm();
        QSqlQueryModel * afficherchercher(QString id);
        QSqlQuery chercher_evenm(QString idd);
        private:
        QString id;
        QString nom;
        QString adresse;
        QString date;
        int nbr;
        QSqlQueryModel * tri_par_nomDESC();


};

#endif // EVENM_H
