#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Database
{
private:
    QSqlDatabase db;
    QSqlQuery *query = new QSqlQuery(db);

public:
    Database();
    void initTables();
    QSqlQueryModel* getDishes();
};

#endif // DATABASE_H
