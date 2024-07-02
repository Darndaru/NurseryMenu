#include "database.h"

Database::Database() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./child_food.db");
    if (db.open()) qDebug("opened");
    else qDebug("not opened");

    query = new QSqlQuery(db);
}

void Database::initTables() {
    // query->exec("CREATE TABLE IF NOT EXISTS Ingredient( "
    //             "id integer PRIMARY KEY AUTOINCREMENT, "
    //             "name text)");
    query->exec("CREATE TABLE IF NOT EXISTS REF_dish_type("
                "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                "name TEXT UNIQUE,"
                "ident TEXT UNIQUE)");
    query->exec("CREATE TABLE IF NOT EXISTS Dish("
                "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                "name text UNIQUE)");
    query->exec("CREATE TABLE IF NOT EXISTS Dish_type("
                "dish_type_id integer,"
                "FOREIGN KEY(dish_type_id) REFERENCES REF_dish_type(ID),"
                "dish_id integer,"
                "FOREIGN KEY(dish_id) REFERENCES Dish(ID) )");

    // query->exec("CREATE TABLE IF NOT EXISTS Recipe("
    //             "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    //             "ing_id INTEGER, "
    //             "dish_id integer, "
    //             "ing_amount real, "
    //             "FOREIGN KEY(ing_id) REFERENCES Ingredient(ID),"
    //             "FOREIGN KEY(dish_id) REFERENCES Dish(ID) )");
    query->exec("CREATE TABLE IF NOT EXISTS Menu("
                "id integer PRIMARY KEY AUTOINCREMENT,"
                "name text,"
                "days_num integer)");
    query->exec("CREATE TABLE IF NOT EXISTS Menu_dish("
                "dish_id INTEGER, "
                "FOREIGN KEY(dish_id) REFERENCES Dish(ID),"
                "menu_id INTEGER, "
                "day INTEGER, "
                "meal TEXT)");

    query->exec("INSERT OR IGNORE INTO Dish (name) VALUES ('Бутерброд с маслом сливочным'),"
                "('Бутерброд с маслом сливочным и сыром'), ('Какао'), ('Чай'),"
                "('Чай с молоком'), ('Кофейный напиток'), ('Компот из сухофруктов'),"
                "('Компот из свежих фруктов'), ('Кисель из сухофруктов'),"
                "('Кисель фруктовый'), ('Кисель из свежих фруктов'),"
                "('Кисломолочный напиток'), ('Суп картофельный с вермишелью'),"
                "('Борщ со сметаной'), ('Борщ'), ('Суп рисовый'), ('Суп рыбный'),"
                "('Суп картофельный с рыбой'), ('Свекольник со сметаной'),"
                "('Суп гороховый'), ('Суп крестьянский'), ('Суп картофельный'),"
                "('Каша пшеничная'), ('Пюре картофельное'),"
                "('Пюре морковно-картофельное'), ('Овощи тушённые'),"
                "('Овощи, тушённые в молоке'),"
                "('Картофельная запеканка с отварным мясом'), ('Котлета рыбная'),"
                "('Тефтели рыбные'), ('Плов с птицей'), ('Котлета мясная'),"
                "('Тефтели мясные'), ('Омлет'), ('Рагу овощное'), ('Икра свекольная'),"
                "('Овощи, тушённые с зелёным горошком'), ('Икра кабачковая'),"
                "('Каша манная молочная'), ('Каша геркулесовая молочная'),"
                "('Каша рисовая молочная'), ('Каша пшеничная молочная'),"
                "('Каша гречневая молочная'), ('Каша пшённая молочная'),"
                "('Каша ячневая молочная'), ('Пудинг с фруктами'),"
                "('Запеканка из творога с рисом'), ('Запеканка из творога с манкой'),"
                "('Запеканка творожная'), ('Сочник с творогом'), ('Булочка сдобная'),"
                "('Молоко'), ('Сельдь с луком'), ('Икра морковная'), ('Рыба тушённая'),"
                "('Рыба отварная'), ('Овощи свежие')");

    query->exec("INSERT OR IGNORE INTO REF_dish_type (name, ident) VALUES"
                "('мясо, рыба или птица', 'meat_fish_poultry'),"
                "('гарнир', 'side_dish'), ('закуска', 'starter'), ('напиток', 'drink'),"
                "('горячий напиток', 'hot drink'), ('бутерброд', 'sandwich'),"
                "('горячее блюдо', 'hot dish'), ('первое', 'entree')");


}
