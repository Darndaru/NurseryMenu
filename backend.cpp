#include "backend.h"

Backend::Backend() {
    db = Database();
}

QString Backend::generateMenu() {
    QSqlQueryModel* model = new QSqlQueryModel;
    model = db.getDishes();

    Menu* menu = new Menu;
    QString res = menu->getMenu(model);
    model->clear();
    delete model;
    delete menu;
    emit menuGenerated();
    return res;
}
