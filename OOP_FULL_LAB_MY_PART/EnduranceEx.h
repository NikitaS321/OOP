
#pragma once
#include "Exercise.h"

class EnduranceEx : public Exercise
{
public:
	double Do() override;
	void Set_my_distance(int my_distance);
	int Get_my_distance() const;

protected:
	double averagetimes_per_min;
	double average_burned;
	int my_distance = 0;
};
