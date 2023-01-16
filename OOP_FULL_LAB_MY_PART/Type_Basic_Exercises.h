#pragma once
#include "Header_BasicEx.h"
class Twisting : public Basic_Exercises
{
public:
	Twisting();
private: 
	double Coef_Calculate()override;
};

class Push_Up : public Basic_Exercises
{
public:
	Push_Up();
private:
	double Coef_Calculate()override;
};

class Pull_Up : public Basic_Exercises
{
public:
	Pull_Up();
private:
	double Coef_Calculate()override;
};

class Squats : public Basic_Exercises
{
public:
	Squats();
private:
	double Coef_Calculate()override;
};
