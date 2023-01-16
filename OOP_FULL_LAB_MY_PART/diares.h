#pragma once
#include"food.h"
#include<vector>
class Diares :public Food {
public:
    vector<Food>helper;
    void find_calfcp();
    void print_data();
    void print_dataa();
    void add_product(Food std);
    void menu();
    int get_size();
    void print();
    void menu_for_choose();
    void find_by_name();



};
