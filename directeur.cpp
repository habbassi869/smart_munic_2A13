#include "directeur.h"
#include "QString"


Directeur::Directeur()
{
mdp="";
id="";
}
QString Directeur::getid(){
  return id;
      }
QString Directeur::getmdp(){
  return mdp;
      }
void Directeur::setid(QString nouveau){
    id=nouveau;

}
void Directeur::setmdp(QString nouv){
    mdp=nouv;

}

