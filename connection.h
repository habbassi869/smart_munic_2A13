#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>

class connection
{
public:
    connection();
    bool conectionopen();
    void connectionclose();


public:
QSqlDatabase db;


};

#endif // CONNECTION_H
