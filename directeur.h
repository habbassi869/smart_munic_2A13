#ifndef DIRECTEUR_H
#define DIRECTEUR_H
#include "QString"


class Directeur
{
public:
    Directeur();
    QString getid();
    QString getmdp();
    void setid(QString nouveau);
    void setmdp(QString nouv);
    private:
    QString id;
    QString mdp;

};

#endif // DIRECTEUR_H
