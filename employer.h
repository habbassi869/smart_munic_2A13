#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"



class employer
{
public:
    employer();
employer(QString id,QString nom,QString prenom,QString cin,int age,int salaire,QString poste);
QString getid();
    QString getnom();
    QString getcin();
    QString getprenom();
    int getage();
    int getsalaire();
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
QSqlQueryModel * trier_employer();
QSqlQueryModel * afficherchercher(QString id);
QSqlQuery chercher_employer(QString idd);
    private:
    QString id;
    QString nom;
    QString prenom;
    int age;
    QString cin;
    int salaire;
    QString poste;
};

#endif // EMPLOYER_H
