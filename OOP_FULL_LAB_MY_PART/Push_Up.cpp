
#include "Type_Basic_Exercises.h"

Push_Up::Push_Up(int My_repeat, int My_times)
{

	my_repeat = My_repeat;
	my_times = My_times;
	this->averagetimes_per_min = 30;
	this->average_burned = 4;
	this->type_of_ex = "Push_Up";
}

double Push_Up::Coef_Calculate()
{
	double coef = (average_burned / averagetimes_per_min) * 10;
	coef = round(coef * 10) / 10;
	return coef;
}