#pragma once
#include<string>

using namespace std;
class Food
{
public:
    double weight_f;
    double calories_f;
    double fats;
    double carbohydrates;
    double proteins;
    string name_of_product;

public:
    int get_weight();
    int get_calories();
    int get_fats();
    int get_carbohydrates();
    void start_values(Food get);
    int get_proteins();
    string get_name() const;
    Food();
    Food(int weight_f, int calories_f, int fats, string name_of_product, int carbohydrates, int proteins);
    void set();
};
