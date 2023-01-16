#include "Type_Endurance_Exercises.h"

Run::Run()
{
	this->averagetimes_per_min = 170;
	this->average_burned = 14;
}


double Run :: Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min);
	coef = round(coef * 10) / 10;
	return coef;
}