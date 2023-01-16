#include "Header_EnduranceEx.h"

/*
double EnduranceEx :: Coef_Calculate(double average_distance_per_min, double average_burned, int distance)
{
	double coef = average_burned / average_distance_per_min;
	double b_cal = coef * distance;
	b_cal = round(b_cal * 10) / 10;
	return b_cal;
}
*/
/*
double EnduranceEx:: Run (int distance)
{	
	burned_cal = Coef_Calculate(170, 14, distance);
	return burned_cal;
}

double EnduranceEx:: Bicycle (int distance)
{
	burned_cal = Coef_Calculate(340, 10, distance);
	return burned_cal;
}
*/
double EnduranceEx :: Do (int distance, int loop)
{
	int dist = distance * loop;
	Set_my_distance(dist);
	double coef = Coef_Calculate();
	double b_cal = distance * loop * coef;
	Set_total_burned_cal(b_cal);
	return b_cal;

	/*
	my_distance = distance * loop;
	if (type_of_ex == "Run")
	{
		double a = Run(distance);
		total_burned_cal = a * loop;
		return total_burned_cal;
	}
	if (type_of_ex == "Bicycle")
	{
		double b = Bicycle(distance);
		total_burned_cal = b * loop;
		return total_burned_cal;
	}
	*/
}
