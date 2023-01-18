#include "User.h"

User::User(std::string name, std::size_t age, std::size_t height, std::size_t weight) :
	_name(name), _age(age), _height(height), _weight(weight)
{
}

void User::setUserProperties(std::string name, std::size_t age, std::size_t height, std::size_t weight)
{
	_name = name;
	_age = age;
	_height = height;
	_weight = weight;
}

std::string User::getName()
{
	return _name;
}

std::size_t User::getAge()
{
	return _age;
}

std::size_t User::getHeight()
{
	return _height;
}

std::size_t User::getWeight()
{
	return _weight;
}

void User::setCalories(double calories)
{
	_calories = calories;
}

void User::setName(std::string name)
{
	_name = name;
}

void User::setAge(std::size_t age)
{
	_age = age;
}

void User::setHeight(std::size_t height)
{
	_height = height;
}

void User::setWeight(std::size_t weight)
{
	_weight = weight;
}
