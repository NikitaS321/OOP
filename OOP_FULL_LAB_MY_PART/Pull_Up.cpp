#include "Type_Basic_Exercises.h"

Pull_Up::Pull_Up()
{
	this->averagetimes_per_min = 10;
	this->average_burned = 2;
	this->type_of_ex = "Pull_Up";
}

double Pull_Up::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 5;
	coef = round(coef * 10) / 10;
	Set_burned_cal(coef);
	return coef;
}