#include "Header_Exercise.h"

Exercise::Exercise()
{
	total_burned_cal = 0;
	burned_cal = 0;
	my_times = 0;
	my_repeat = 0;
	my_distance = 0;

}

void Exercise :: Set_total_burned_cal( double total_burned_cal)
{
	this->total_burned_cal = total_burned_cal;
}

void Exercise::Set_burned_cal(double burned_cal)
{
	this->burned_cal = burned_cal;
}

void Exercise::Set_my_times(int my_times)
{
	this->my_times = my_times;
}

void Exercise::Set_my_repeat(int my_repeat)
{
	this->my_repeat = my_repeat;
}

void Exercise::Set_my_distance(int my_distance)
{
	this->my_distance = my_distance;
}

void Exercise::Set_type_of_ex(std::string type_of_ex)
{
	this->type_of_ex = type_of_ex;
}

double Exercise::Get_total_burned_cal()
{
	return total_burned_cal;
}

double Exercise::Get_burned_cal()
{
	return burned_cal;
}

int Exercise::Get_my_times()
{
	return my_times;
}

int Exercise::Get_my_repeat()
{
	return my_repeat;
}

int Exercise::Get_my_distance()
{
	return my_distance;
}

std::string Exercise::Get_type_of_ex()
{
	return type_of_ex;
}