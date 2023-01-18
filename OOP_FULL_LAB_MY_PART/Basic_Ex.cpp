
#include "BasicEx.h"

double Basic_Exercises::Do()
{
	Set_my_repeat(my_repeat);
	Set_my_times(my_times);
	double coef = Coef_Calculate();
	double b_cal = my_times * my_repeat * coef;
	Set_burned_cal(b_cal);
	return b_cal;
}

void Basic_Exercises::Set_my_times(int my_times)
{
	this->my_times = my_times;
}

int Basic_Exercises::Get_my_times() const
{
	return my_times;
}