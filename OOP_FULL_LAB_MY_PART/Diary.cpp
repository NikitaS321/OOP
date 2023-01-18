#include "Diary.h"
#include <fstream>
#include <exception>

void Diary::setUserProperties(std::string name, std::size_t age, std::size_t height, std::size_t weight)
{
	_user.setUserProperties(name, age, height, weight);
}

void Diary::setDate(int date)
{
	_date = date;
}


void Diary::addFood(const Food& food)
{
	_calories += food.calories_f;

	_food.push_back(food);
}

void Diary::addRun(Run exercise)
{
	_calories -= exercise.Do();
	_run.push_back(exercise);
}

void Diary::addBicycle(Bicycle exercise)
{
	_calories -= exercise.Do();
	_bicycle.push_back(exercise);
}

void Diary::addTwisting(Twisting exercise)
{
	_calories -= exercise.Do();
	_twisting.push_back(exercise);
}

void Diary::addPush_Up(Push_Up exercise)
{
	_calories -= exercise.Do();
	_push_up.push_back(exercise);
}

void Diary::addPull_Up(Pull_Up exercise)
{
	_calories -= exercise.Do();
	_pull_up.push_back(exercise);
}

void Diary::addSquats(Squats exercise)
{
	_calories -= exercise.Do();
	_squats.push_back(exercise);
}

void Diary::clear()
{
	clearFood();
	clearExercise();
	_calories = 0;
}

void Diary::clearFood()
{
	_food.clear();
}

void Diary::clearExercise()
{
	_squats.clear();
	_pull_up.clear();
	_push_up.clear();
	_twisting.clear();
	_bicycle.clear();
	_run.clear();
}


std::ostream& operator<<(std::ostream& stream, const Diary& diary)
{
	stream << "Food: " << std::endl;

	for (const auto& food : diary._food)
	{
		stream << "Dish: " << food.name_of_product << std::endl;
		stream << "Calories: " << food.calories_f << std::endl;
		stream << "Carbohydrates: " << food.carbohydrates << std::endl;
		stream << "Fats: " << food.fats << std::endl;
		stream << "Proteins: " << food.proteins << std::endl;
		stream << "Weight: " << food.weight_f << std::endl;
		stream << std::endl;
	}

	stream << "Exercise: " << std::endl;

	if (!diary._run.empty())
		for (const auto& ex : diary._run)
		{
			stream << "Exercise: " << ex.Get_type_of_ex() << std::endl;
			stream << "Burned calories: " << ex.Get_burned_cal() << std::endl;
			stream << "Distance: " << ex.Get_my_distance() << std::endl;
			stream << "Repeats : " << ex.Get_my_repeat() << std::endl;
		}
	if (!diary._bicycle.empty())
		for (const auto& ex : diary._bicycle)
		{
			stream << "Exercise: " << ex.Get_type_of_ex() << std::endl;
			stream << "Burned calories: " << ex.Get_burned_cal() << std::endl;
			stream << "Distance: " << ex.Get_my_distance() << std::endl;
			stream << "Repeats : " << ex.Get_my_repeat() << std::endl;
		}
	if (!diary._twisting.empty())
		for (const auto& ex : diary._twisting)
		{
			stream << "Exercise: " << ex.Get_type_of_ex() << std::endl;
			stream << "Burned calories: " << ex.Get_burned_cal() << std::endl;
			stream << "Times: " << ex.Get_my_times() << std::endl;
			stream << "Repeats : " << ex.Get_my_repeat() << std::endl;
		}
	if (!diary._push_up.empty())
		for (const auto& ex : diary._push_up)
		{
			stream << "Exercise: " << ex.Get_type_of_ex() << std::endl;
			stream << "Burned calories: " << ex.Get_burned_cal() << std::endl;
			stream << "Times: " << ex.Get_my_times() << std::endl;
			stream << "Repeats : " << ex.Get_my_repeat() << std::endl;
		}
	if (!diary._pull_up.empty())
		for (const auto& ex : diary._pull_up)
		{
			stream << "Exercise: " << ex.Get_type_of_ex() << std::endl;
			stream << "Burned calories: " << ex.Get_burned_cal() << std::endl;
			stream << "Times: " << ex.Get_my_times() << std::endl;
			stream << "Repeats : " << ex.Get_my_repeat() << std::endl;
		}
	if (!diary._squats.empty())
		for (const auto& ex : diary._squats)
		{
			stream << "Exercise: " << ex.Get_type_of_ex() << std::endl;
			stream << "Burned calories: " << ex.Get_burned_cal() << std::endl;
			stream << "Times: " << ex.Get_my_times() << std::endl;
			stream << "Repeats : " << ex.Get_my_repeat() << std::endl;
		}

	return stream;
}

void Diary::parse()
{
	std::fstream stream;
	stream.open(std::to_string(_date) + ".txt", std::ios::out);
	if (!stream.is_open())
		throw std::exception(std::string("Can't open file: " + std::to_string(_date) + ".txt").c_str());

	stream << "Date: " << _date << std::endl;
	stream << std::endl;

	stream << "Name: " << _user.getName() << std::endl;
	stream << "Age: " << _user.getAge() << std::endl;
	stream << "Height: " << _user.getHeight() << std::endl;
	stream << "Weight: " << _user.getWeight() << std::endl;
	stream << "Callories gain per day: " << getCalories() << std::endl;
	stream << std::endl;

	stream << *this;
}

int Diary::getDate()
{
	return _date;
}
double Diary::getCalories()
{
	return _calories;
}
std::vector<Food> Diary::getFood()
{
	return _food;
}

std::vector<Run> Diary::getRun()
{
	return _run;
}

std::vector<Bicycle> Diary::getBicycle()
{
	return _bicycle;
}

std::vector<Twisting> Diary::getTwisting()
{
	return _twisting;
}

std::vector<Push_Up> Diary::getPush_Up()
{
	return _push_up;
}

std::vector<Pull_Up> Diary::getPull_Up()
{
	return _pull_up;
}

std::vector<Squats> Diary::getSquats()
{
	return _squats;
}

