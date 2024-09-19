#ifndef MENU_H
#define MENU_H

#include <QObject>
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

    QVector <Dish> dishes;
    QVector <QString> menu;

public:
    Menu();
    QString getMenu(QSqlQueryModel* dish_model);

signals:
    void menuChanged();
};

#endif // MENU_H
