#include "Header_BasicEx.h"

double Basic_Exercises :: Do ( int times, int repeat )
{
	Set_my_repeat(repeat);
	Set_my_times(times);
	double coef = Coef_Calculate();
	double b_cal = times * repeat * coef;
	Set_total_burned_cal(b_cal);
	return b_cal;
}
