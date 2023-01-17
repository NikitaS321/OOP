#include "Header_EnduranceEx.h"

double EnduranceEx :: Do (int distance, int loop)
{
	int dist = distance * loop;
	Set_my_distance(dist);
	double coef = Coef_Calculate();
	double b_cal = distance * loop * coef;
	Set_total_burned_cal(b_cal);
	return b_cal;
}
