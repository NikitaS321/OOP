#pragma once
#include "BasicEx.h"

class Twisting : public Basic_Exercises
{
public:
	Twisting(int My_repeat, int My_times);
private:
	double Coef_Calculate() override;
};

class Push_Up : public Basic_Exercises
{
public:
	Push_Up(int My_repeat, int My_times);
private:
	double Coef_Calculate() override;
};

class Pull_Up : public Basic_Exercises
{
public:
	Pull_Up(int My_repeat, int My_times);
private:
	double Coef_Calculate() override;
};

class Squats : public Basic_Exercises
{
public:
	Squats(int My_repeat, int My_times);
private:
	double Coef_Calculate() override;
};

