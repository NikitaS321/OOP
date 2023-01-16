#pragma once
#include "Header_Exercise.h"

class Basic_Exercises : public Exercise 
{
public:
	double Do(int times, int repeat) override;
protected:
	virtual double Coef_Calculate() = 0;
	double averagetimes_per_min;
	double average_burned;


	/*
	double Twisting(int times);
	double Push_Up(int times);
	double Pull_Up (int times);
	double Squats(int times);
	*/
};

