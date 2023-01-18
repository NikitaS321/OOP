
#include "Type_Endurance_Exercises.h"

Bicycle::Bicycle(int My_repeat, int My_distance)
{
	my_repeat = My_repeat;
	my_distance = My_distance;
	this->averagetimes_per_min = 340;
	this->average_burned = 10;
	this->type_of_ex = "Bicycle";
}
double Bicycle::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min);
	coef = round(coef * 100) / 100;
	return coef;
}