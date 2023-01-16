#include "Type_Basic_Exercises.h"

Twisting::Twisting()
{
	this->averagetimes_per_min = 40;
	this->average_burned = 5;
}

double Twisting :: Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 20;
	coef = round(coef * 10) / 10;
	return coef;
	
}