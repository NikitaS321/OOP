#include "Type_Endurance_Exercises.h"

Run::Run()
{
	this->averagetimes_per_min = 170;
	this->average_burned = 14;
	this->type_of_ex = "Run";
}
double Run :: Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min);
	coef = round(coef * 100) / 100;
	Set_burned_cal(coef);
	return coef;
}