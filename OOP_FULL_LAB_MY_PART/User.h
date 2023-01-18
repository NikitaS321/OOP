
#pragma once
#include <vector>
#include "Food.h"
#include "Exercise.h"

class User
{
public:
	User() = default;
	User(std::string name, std::size_t age, std::size_t height, std::size_t weight);
	~User() = default;

	void setUserProperties(std::string name, std::size_t age,
		std::size_t height, std::size_t weight);

	std::string getName();
	std::size_t getAge();
	std::size_t getHeight();
	std::size_t getWeight();

protected:
	void setCalories(double calories);
	void setName(std::string name);
	void setAge(std::size_t age);
	void setHeight(std::size_t height);
	void setWeight(std::size_t weight);

protected:
	std::string _name;
	std::size_t _age = 0;
	std::size_t _height = 0;
	std::size_t _weight = 0;
	double _calories = 0;
};

