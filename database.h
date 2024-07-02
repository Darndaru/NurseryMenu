#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

class Database
{
private:
    QSqlDatabase db;
    QSqlQuery *query = new QSqlQuery(db);

public:
    Database();
    void initTables();

};

#endif // DATABASE_H
