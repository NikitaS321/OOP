
#pragma once
#include <string>

class Exercise
{
protected:
	double burned_cal = 0;
	int my_repeat = 0;
	std::string type_of_ex;

protected:
	Exercise() = default;
	void Set_burned_cal(double burned_cal);
	void Set_my_repeat(int my_repeat);
	virtual double Do() = 0;
	virtual double Coef_Calculate() = 0;

public:
	double Get_burned_cal() const;
	int Get_my_repeat() const;
	std::string Get_type_of_ex() const;
};