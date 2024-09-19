#include "menu.h"
#include "database.h"

Menu::Menu() {
    // dish_model =
}


QString Menu::getMenu(QSqlQueryModel* dish_model) {
    for (int i = 0; i < dish_model->rowCount(); i++)
    {
        Dish dish;
        dish.name = dish_model->data(dish_model->index(i, 0)).toString();
        // dish.protein = dish_model.data(dish_model.index(i, 1)).toDouble();
        // dish.carb = dish_model.data(dish_model.index(i, 2)).toDouble();
        // dish.fat = dish_model.data(dish_model.index(i, 3)).toDouble();
        // dish.calories = dish_model.data(dish_model.index(i, 4)).toDouble();
        // dish.vitB1 = dish_model.data(dish_model.index(i, 5)).toDouble();
        // dish.vitB2 = dish_model.data(dish_model.index(i, 6)).toDouble();
        // dish.vitC = dish_model.data(dish_model.index(i, 7)).toDouble();
        // dish.minFe = dish_model.data(dish_model.index(i, 8)).toDouble();
        // dish.minCa = dish_model.data(dish_model.index(i, 9)).toDouble();
        dishes.push_back(dish);
        menu.push_back(dish.name);
    }
    delete dish_model;
    //return menu;
    return "it's fine";
}
