#include <iostream>
#include"Food.h"
#include"Dishes.h"
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
string Food::get_name() const { return "Назва продукту :" + name_of_product; }

void Food::set() {
    weight_f = rand() % 100 + 1;
    calories_f = rand() % 700 + 1;
    fats = rand() % 50 + 1;
    carbohydrates = rand() % 70 + 1;
    proteins = rand() % 60 + 1;
    string arr_for_name[] = { "Pizza","Hot dog","Salats","Water","Bread" };
    name_of_product = arr_for_name[rand() % 5];
}