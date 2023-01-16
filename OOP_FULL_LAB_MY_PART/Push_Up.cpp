#include "Type_Basic_Exercises.h"

Push_Up::Push_Up()
{
	this->averagetimes_per_min = 30;
	this->average_burned = 4;
}

double Push_Up::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 15;
	coef = round(coef * 10) / 10;
	return coef;
}