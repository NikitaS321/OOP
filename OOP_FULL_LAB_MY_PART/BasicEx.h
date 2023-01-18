#pragma once
#include "Exercise.h"

class Basic_Exercises : public Exercise
{
public:
	double Do() override;
	int Get_my_times() const;
	void Set_my_times(int my_times);

protected:
	double averagetimes_per_min;
	double average_burned;
	int my_times = 0;
};

