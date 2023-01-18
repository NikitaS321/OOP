
#include "Type_Basic_Exercises.h"

Squats::Squats(int My_repeat, int My_times)
{
	my_repeat = My_repeat;
	my_times = My_times;
	this->averagetimes_per_min = 45;
	this->average_burned = 13.5;
	this->type_of_ex = "Squats";
}

double Squats::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 13;
	coef = round(coef * 10) / 10;
	return coef;
}