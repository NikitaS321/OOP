#pragma once
#include <string>
class Exercise 
{
private:
	double total_burned_cal;
	double burned_cal;
	int my_times;
	int my_repeat;
	int my_distance;
	std::string type_of_ex;

protected:
	Exercise();
	void Set_total_burned_cal(double total_burned_cal);
	void Set_burned_cal(double burned_cal);
	void Set_my_times(int my_times);
	void Set_my_repeat(int my_repeat);
	void Set_my_distance(int my_distance);
	void Set_type_of_ex(std::string type_of_ex);

	virtual double Do(int times, int repeat) = 0;
	//virtual double Coef_Calculate(double averagetimes_per_min, double average_burned, int times) = 0;

public:
	double Get_total_burned_cal();
	double Get_burned_cal();
	int Get_my_times();
	int Get_my_repeat();
	int Get_my_distance();
	std::string Get_type_of_ex();
};