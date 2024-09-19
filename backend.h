#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QString>
#include <database.h>
#include <menu.h>

class Backend : public QObject
{
    Q_OBJECT

private:
    Database db;

public:
    Backend();

signals:
    void menuGenerated();

public slots:
    QString generateMenu();
};
#endif // BACKEND_H
