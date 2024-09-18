#ifndef MENU_H
#define MENU_H

#include <QObject>
#include <QString>
#include <qqml.h>

#include <QString>
#include <QVector>
#include <QSqlQueryModel>

struct Dish {
    QString name;
    double protein;
    double carb;
    double fat;
    double calories;
    double vitB1;
    double vitB2;
    double vitC;
    double minFe;
    double minCa;
};

class Menu : public QObject
{
    Q_OBJECT
    // Q_PROPERTY(QVector <QString> get_menu READ menu NOTIFY menuChanged FINAL)
    QML_ELEMENT     // makes this class available in QML

    QSqlQueryModel dish_model;
    QVector <Dish> dishes;
    QVector <QString> menu;

public:
    explicit Menu(QObject *parent = nullptr);
    void getDishes();
    QVector <QString> get_menu();

    // QString userName();
    // void setUserName(const QString &userName);

signals:
    void menuChanged();

// private:
    // QString m_userName;
};

#endif // MENU_H
