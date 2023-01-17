#pragma once
#include "Header_Exercise.h"

class EnduranceEx : public Exercise
{
public:
	double Do(int distance, int loop) override;
protected:
	double averagetimes_per_min;
	double average_burned;
};
