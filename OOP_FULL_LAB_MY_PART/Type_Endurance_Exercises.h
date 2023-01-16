#pragma once
#include "Header_EnduranceEx.h"
class Run : public EnduranceEx
{
public:
	Run();
private:
	double Coef_Calculate() override;
};

class Bicycle : public EnduranceEx
{
public:
	Bicycle();
private:
	double Coef_Calculate() override;
};
