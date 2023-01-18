#include "Diary.h"
using namespace std;

int main()
{
	Diary diary;
	int day = 1;
	diary.setUserProperties("Nikita", 2, 153, 220);
	size_t par = 0;
	size_t weight = 0;
	size_t calories = 0;
	size_t fats = 0;
	size_t numOfLaps = 0;
	size_t distance = 0;
	int caloriesDifference = 0;
	std::string namefood;
	std::string nameex;
	size_t carbohydrates = 0;
	size_t proteins = 0;
	while (par != 4)
	{
		std::cout << "Menu" << endl;
		cout << "Day " << diary.getDate() << endl;
		std::cout << "1 - for add food" << endl;
		std::cout << "2 - for add exersice" << endl;
		std::cout << "3 - for output diary of food and exercise" << endl;
		std::cout << "4 - for close program and save diary to file" << endl;
		std::cout << "5 - for  change day" << endl;


		cin >> par;
		switch (par)
		{
		case 1:
			std::cout << "Enter the weight of food, calories, fats, name, carbohydrates and proteins" << endl;
			cin >> weight;
			cin >> calories;
			cin >> fats;
			cin >> namefood;
			cin >> carbohydrates;
			cin >> proteins;
			diary.addFood(Food(weight, calories, fats, namefood, carbohydrates, proteins));
			cout << "Food added to diary!" << endl;
			break;
		case 2:
			std::cout << "Enter the name of exercise(Bicycle, Twisting, Pull_Up, Push_Up, Run, Squats)" << endl;
			cin >> nameex;
			if (nameex == "Bicycle")
			{
				std::cout << "Enter the of amount of laps and distance of laps" << endl;
				cin >> numOfLaps;
				cin >> distance;
				diary.addBicycle(Bicycle(numOfLaps, distance));
				break;
			}

			if (nameex == "Run")
			{
				std::cout << "Enter the of amount of laps and distance of laps" << endl;
				cin >> numOfLaps;
				cin >> distance;
				diary.addRun(Run(numOfLaps, distance));
				break;
			}

			if (nameex == "Pull_Up")
			{
				std::cout << "Enter the amount of times and reps" << endl;
				cin >> numOfLaps;
				cin >> distance;
				diary.addPull_Up(Pull_Up(numOfLaps, distance));
				break;
			}

			if (nameex == "Push_Up")
			{
				std::cout << "Enter the amount of times and reps" << endl;
				cin >> numOfLaps;
				cin >> distance;
				diary.addPush_Up(Push_Up(numOfLaps, distance));
				break;
			}

			if (nameex == "Twisting")
			{
				std::cout << "Enter the amount of times and reps" << endl;
				cin >> numOfLaps;
				cin >> distance;
				diary.addTwisting(Twisting(numOfLaps, distance));
				break;
			}


			if (nameex == "Run")
			{
				std::cout << "Enter the amount of times and reps" << endl;
				cin >> numOfLaps;
				cin >> distance;
				diary.addRun(Run(numOfLaps, distance));
				break;
			}
			if (nameex == "Squats")
			{
				std::cout << "Enter the amount of times and reps" << endl;
				cin >> numOfLaps;
				cin >> distance;
				diary.addSquats(Squats(numOfLaps, distance));
				break;
			}
		case 3:
			std::cout << diary;
			break;
		case 5:
			diary.setDate(++day);
			cout << "Calories difference per that day" << endl;
			cout << diary.getCalories() << endl;
			diary.parse();
			diary.clear();

		}


	}
	diary.parse();


	return 0;
}