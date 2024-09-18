#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QString>

class Backend : public QObject
{
    Q_OBJECT

public:
    Backend();

signals:
    void menuGenerated();

public slots:
    QString generateMenu();
};
#endif // BACKEND_H
