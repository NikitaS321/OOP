#include "Type_Basic_Exercises.h"

Squats::Squats()
{
	this->averagetimes_per_min = 45;
	this->average_burned = 13.5;
	this->type_of_ex = "Squats";
}

double Squats::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 13;
	coef = round(coef * 10) / 10;
	Set_burned_cal(coef);
	return coef;
}