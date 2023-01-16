#pragma once
#include "Header_Exercise.h"

class EnduranceEx : public Exercise
{
public:
	double Do(int distance, int loop) override;
protected:
	virtual double Coef_Calculate() = 0;
	double averagetimes_per_min;
	double average_burned;
};
