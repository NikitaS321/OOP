#include "Type_Basic_Exercises.h"

Pull_Up::Pull_Up()
{
	this->averagetimes_per_min = 10;
	this->average_burned = 2;
}

double Pull_Up::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 15;
	coef = round(coef * 10) / 10;
	return coef;
}