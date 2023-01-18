
#include "Type_Basic_Exercises.h"

Twisting::Twisting(int My_repeat, int My_times)
{
	my_repeat = My_repeat;
	my_times = My_times;
	this->averagetimes_per_min = 40;
	this->average_burned = 5;
	this->type_of_ex = "Twisting";
}

double Twisting::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 14;
	coef = round(coef * 10) / 10;
	return coef;
}