#include "Exercise.h"

void Exercise::Set_burned_cal(double burned_cal)
{
	this->burned_cal = burned_cal;
}

void Exercise::Set_my_repeat(int my_repeat)
{
	this->my_repeat = my_repeat;
}

double Exercise::Get_burned_cal() const
{
	return burned_cal;
}

int Exercise::Get_my_repeat() const
{
	return my_repeat;
}

std::string Exercise::Get_type_of_ex() const
{
	return type_of_ex;
}