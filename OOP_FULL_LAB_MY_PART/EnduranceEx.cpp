
#include "EnduranceEx.h"

double EnduranceEx::Do()
{
	int dist = my_distance * my_repeat;
	Set_my_distance(dist);
	double coef = Coef_Calculate();
	double b_cal = my_distance * my_repeat * coef;
	Set_burned_cal(b_cal);
	return b_cal;
}

void EnduranceEx::Set_my_distance(int my_distance)
{
	this->my_distance = my_distance;
}

int EnduranceEx::Get_my_distance() const
{
	return my_distance;
}