#include"diares.h"
#include <iostream>
#include"food.h"
#include"enums.h"
using namespace std;


Food::Food() {
    string arr_for_name[] = { "Pizza","Hot dog","Salats","Water","Bread" };
    weight_f = rand() % 100 + 1;
    calories_f = rand() % 700 + 1;
    name_of_product = arr_for_name[rand() % 5];
    fats = rand() % 50 + 1;
    carbohydrates = rand() % 70 + 1;
    proteins = rand() % 60 + 1;

}
void Food::start_values(Food gets)
{
    cout << "Calories:" << gets.calories_f << " " << "carbo:" << gets.carbohydrates << " " << "weight:" << gets.weight_f << " " << "fats:" << gets.fats << " " << "Prot:" << gets.proteins << " " << "Name:" << gets.name_of_product;

}

Food::Food(int weight_f, int calories_f, int fats, string name_of_product, int carbohydrates, int proteins) {
    this->weight_f = weight_f;
    this->calories_f = calories_f;
    this->fats = fats;
    this->name_of_product = name_of_product;
    this->carbohydrates = carbohydrates;
    this->proteins = proteins;
}
int Food::get_calories() { return calories_f; }
int Food::get_carbohydrates() { return carbohydrates; }
int Food::get_fats() { return fats; }
int Food::get_proteins() { return proteins; }
int Food::get_weight() { return weight_f; }
string Food::get_name() { return "Назва продукту :" + name_of_product; }
void Food::set() {
    weight_f = rand() % 100 + 1;
    calories_f = rand() % 700 + 1;
    fats = rand() % 50 + 1;
    carbohydrates = rand() % 70 + 1;
    proteins = rand() % 60 + 1;
    string arr_for_name[] = { "Pizza","Hot dog","Salats","Water","Bread" };
    name_of_product = arr_for_name[rand() % 5];
}
void Diares::print_data() {

    cout << "Weight :" << weight_f << endl;
    cout << "Calories on " << weight_f << "gr=" << calories_f << endl;
    cout << "Fats on " << weight_f << "gr=" << fats << endl;
    cout << "Carbo on  " << weight_f << "gr=" << carbohydrates << endl;
    cout << "Proteins on " << weight_f << "gr=" << proteins << endl;
}
void Diares::find_by_name()
{

    int operation;
    cin >> operation;
    switch (operation)
    {
    case eat::Pizza:
        weight_f = 100;
        calories_f = 400;
        fats = 25;
        proteins = 40;
        carbohydrates = 79;
        break;
    case eat::Yogurt:
        weight_f = 100;
        calories_f = 65;
        fats = 1.5;
        proteins = 4, 3;
        carbohydrates = 8.4;
        break;
    case eat::sour_cream:
        weight_f = 100;
        calories_f = 65;
        fats = 3;
        proteins = 10;
        carbohydrates = 2.9;
        break;
    case eat::Tomato:
        weight_f = 100;
        calories_f = 65;
        fats = 0.2;
        proteins = 0.9;
        carbohydrates = 3.9;
        break;
    case eat::Bread:
        weight_f = 100;
        calories_f = 253;
        fats = 4;
        proteins = 11;
        carbohydrates = 48;
        break;
    case eat::Chips:
        weight_f = 100;
        calories_f = 419;
        fats = 16;
        proteins = 6.1;
        carbohydrates = 61;
        break;
    case eat::Cheese:
        weight_f = 100;
        calories_f = 293;
        fats = 23;
        proteins = 22;
        carbohydrates = 0.01;
        break;
    default:
        break;
    }
}
void Diares::menu_for_choose()
{
    cout << "In order to get information about Pizza press-1" << endl;
    cout << "In order to get information about Yogurt press-2" << endl;
    cout << "In order to get information about Sour Cream press-3" << endl;
    cout << "In order to get information about Tomato press-4" << endl;
    cout << "In order to get information about Bread press-5" << endl;
    cout << "In order to get information about Chips press-6" << endl;
    cout << "In order to get information about Cheese press-7" << endl;
}
void Diares::add_product(Food st)
{
    helper.push_back(st);
}
void Diares::print_dataa()
{
    int quantity_for_cal = 0;
    int quantity_for_fats = 0;
    int quantity_for_carb = 0;
    int quantity_for_pr = 0;


    for (auto i = 0; i < helper.size(); i++)
    {
        cout << "Name:" << helper[i].name_of_product << endl;

        cout << "weight:" << helper[i].weight_f << endl;
        cout << "Calories:" << helper[i].calories_f << endl;
        cout << "Fats:" << helper[i].fats << endl;
        cout << "Carbo:" << helper[i].carbohydrates << endl;
        cout << "Proteins:" << helper[i].proteins << endl;
        quantity_for_cal += helper[i].calories_f;
        quantity_for_carb += helper[i].carbohydrates;
        quantity_for_pr += helper[i].proteins;
        quantity_for_fats += helper[i].fats;

    }
    cout << endl;

    cout << "Total utilize calories:" << quantity_for_cal << endl;
    cout << "Total utilize fats:" << quantity_for_fats << endl;
    cout << "Total utilize carbo:" << quantity_for_carb << endl;
    cout << "Total utilize proteins:" << quantity_for_pr << endl;


}