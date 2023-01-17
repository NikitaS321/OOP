#pragma once
#include "Header_Exercise.h"

class Basic_Exercises : public Exercise 
{
public:
	double Do(int times, int repeat) override;
protected:
	double averagetimes_per_min;
	double average_burned;
};

