#include "connection.h"

connection::connection()
{
    db=QSqlDatabase::addDatabase("QODBC");

}


bool connection::conectionopen(){

   db.setDatabaseName("projet");
   db.setUserName("malek1");
   db.setPassword("bachta");


   return db.open();

}
void connection::connectionclose(){
    db.close();
}
