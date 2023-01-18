#pragma once
#include "EnduranceEx.h"
class Run : public EnduranceEx
{
public:
	Run(int My_repeat, int My_distance);
protected:
	double Coef_Calculate() override;
};
class Bicycle : public EnduranceEx
{
public:
	Bicycle(int My_repeat, int My_distance);
protected:
	double Coef_Calculate() override;
};