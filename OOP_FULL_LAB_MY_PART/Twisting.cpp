#include "Type_Basic_Exercises.h"

Twisting::Twisting()
{
	this->averagetimes_per_min = 40;
	this->average_burned = 5;
	this->type_of_ex = "Twisting";
}

double Twisting :: Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 14;
	coef = round(coef * 10) / 10;
	Set_burned_cal(coef);
	return coef;
	
}