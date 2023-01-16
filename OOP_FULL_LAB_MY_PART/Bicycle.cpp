#include "Type_Endurance_Exercises.h"

Bicycle :: Bicycle()
{
	this->averagetimes_per_min = 340;
	this->average_burned = 10;
}
double Bicycle::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min);
	coef = round(coef * 10) / 10;
	return coef;
}