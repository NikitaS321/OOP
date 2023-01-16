#include "Header_BasicEx.h"
/*
double Basic_Exercises::Coef_Calculate(double averagetimes_per_min, double average_burned, int times)
{
	double coef = (average_burned / averagetimes_per_min)*20;
	double b_cal = coef * times;
	b_cal = round(b_cal * 10) / 10;
	return b_cal;
}
*/
/*
double Basic_Exercises ::Twisting(int times)
{
	double b_c = Coef_Calculate(40, 5, times);
	Set_burned_cal(b_c);
	return b_c;
}
double Basic_Exercises::Push_Up(int times)
{
	double b_c = Coef_Calculate(30, 4, times);
	Set_burned_cal(b_c);
	return b_c;
}

double Basic_Exercises::Pull_Up(int times)
{
	burned_cal = Coef_Calculate(10, 2,times);
	return burned_cal;
}

double Basic_Exercises::Squats(int times)
{
	burned_cal = Coef_Calculate(45, 13.5, times);
	return burned_cal;
}
*/
double Basic_Exercises :: Do ( int times, int repeat )
{
	Set_my_repeat(repeat);
	Set_my_times(times);
	double coef = Coef_Calculate();
	double b_cal = times * repeat * coef;
	Set_total_burned_cal(b_cal);
	return b_cal;
	/*
	Set_my_times(times);
	Set_my_repeat(repeat);
	Set_type_of_ex(type_of_ex);
	if (type_of_ex == "Twisting")
	{
		double a = Twisting(times) * repeat;
		Set_total_burned_cal(a);
		return a;
	}
	if (type_of_ex == "Push_Up")
	{
		double b = Push_Up(times) * repeat;
		Set_total_burned_cal(b);
		return b;
	}
	
	if (type_of_ex == "Pull_Up")
	{
		double c = Pull_Up(times); 
		total_burned_cal = c * repeat;
		return total_burned_cal;
	}
	if (type_of_ex == "Squats")
	{
		double d = Squats(times);
		total_burned_cal = d * repeat;
		return total_burned_cal;
	}
	*/
}
