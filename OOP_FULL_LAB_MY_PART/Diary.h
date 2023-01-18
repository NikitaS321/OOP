#pragma once
#include "Food.h"
#include "Type_Basic_Exercises.h"
#include "Type_Endurance_Exercises.h"
#include "User.h"
#include <vector>
#include <iostream>

class Diary
{
public:
	Diary() = default;
	~Diary() = default;

	void setUserProperties(std::string name, std::size_t age,
		std::size_t height, std::size_t weight);
	void setDate(int date);

	void addFood(const Food& food);
	void addRun(Run exercise);
	void addBicycle(Bicycle exercise);
	void addTwisting(Twisting exercise);
	void addPush_Up(Push_Up exercise);
	void addPull_Up(Pull_Up exercise);
	void addSquats(Squats exercise);
	void clear();
	int getDate();
	double getCalories();

	friend std::ostream& operator<<(std::ostream& stream, const Diary& diary);

	void parse();

protected:
	void clearFood();
	void clearExercise();
	std::vector<Food> getFood();
	std::vector<Run> getRun();
	std::vector<Bicycle> getBicycle();
	std::vector<Twisting> getTwisting();
	std::vector<Push_Up> getPush_Up();
	std::vector<Pull_Up> getPull_Up();
	std::vector<Squats> getSquats();

protected:
	double _calories = 0;
	int _date = 1;

	User _user;

	std::vector<Food> _food;
	std::vector<Run> _run;
	std::vector<Bicycle> _bicycle;
	std::vector<Twisting> _twisting;
	std::vector<Push_Up> _push_up;
	std::vector<Pull_Up> _pull_up;
	std::vector<Squats> _squats;
};
