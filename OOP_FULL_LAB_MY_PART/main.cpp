#include <iostream>
#include "Type_Basic_Exercises.h"
#include "Type_Endurance_Exercises.h"
#include <fstream>
#include <vector>
#include <windows.h>
#include "Header_BasicEx.h"
using namespace std;

template < typename T >
void Show_Characriristic_of_basic_exercises(T my_ex)
{
	cout << "Вправа: " << my_ex.Get_type_of_ex() << endl;
	cout << "Кількість зроблених разів: " << my_ex.Get_my_times() << endl;
	cout << "Кількість повторів: " << my_ex.Get_my_repeat() << endl;
	cout << "Кількість спалених Ккалорій (за 1 раз): " << my_ex.Get_burned_cal() << "ккал." << endl;
	cout << "Загальна кількість спалених Ккалорій: " << my_ex.Get_total_burned_cal() << "ккал." << endl;
	cout << endl;
}

template < typename G >
void Show_Characriristic_of_endurance_exercises(G my_ex)
{
	cout << "Вправа: " << my_ex.Get_type_of_ex() << endl;
	cout << "Кількість пробіганих метрів " << my_ex.Get_my_distance() << endl;
	cout << "Кількість спалених ккал (за 1 метр): " << my_ex.Get_burned_cal() << "ккал." << endl;
	cout << "Загальна кількість спалених ккал: " << my_ex.Get_total_burned_cal() << "ккал." << endl;
	cout << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Twisting first_ex;
	Push_Up second_ex;
	Pull_Up third_ex;
	Squats forth_ex;
	Run fifth_ex;
	Bicycle sixth_ex;
	int repeat = 2;
	int times = 20;
	int distance = 400;
	int loops = 3;
	fstream file;

	vector <int> date;
	int day, month, year;
	cout << "Введіть день : ";
	cin >> day;
	date.push_back(day);
	cout << "Введіть місяць : ";
	cin >> month;
	date.push_back(month);
	cout << "Введіть рік : ";
	cin >> year;
	date.push_back(year);

	vector <Basic_Exercises*> arr_basic;
	first_ex.Do(times, repeat);
	arr_basic.push_back(&first_ex);
	second_ex.Do(times, repeat);
	arr_basic.push_back(&second_ex);
	third_ex.Do(times, repeat);
	arr_basic.push_back(&third_ex);
	forth_ex.Do(times, repeat);
	arr_basic.push_back(&forth_ex);

	vector <EnduranceEx*> arr_endurance;
	fifth_ex.Do(distance, loops);
	arr_endurance.push_back(&fifth_ex);
	sixth_ex.Do(distance, loops);
	arr_endurance.push_back(&sixth_ex);


	Show_Characriristic_of_basic_exercises(first_ex);
	Show_Characriristic_of_basic_exercises(second_ex);
	Show_Characriristic_of_basic_exercises(third_ex);
	Show_Characriristic_of_basic_exercises(forth_ex);
	Show_Characriristic_of_endurance_exercises(fifth_ex);
	Show_Characriristic_of_endurance_exercises(sixth_ex);

	file.open("Щоденник.txt", ios::app);
	if (!file.is_open())
	{
		cout << "Сталася помилка відкриття файлу ! " << endl;
		return 1;
	}
	else
	{
		file << "Date: ";
		for (int i = 0; i < date.size(); i++)
		{
			file << date[i] << " ";
		}
		file << endl;

		for (int i = 0; i < arr_basic.size(); i++)
		{
			file << "Вправа: " << arr_basic[i]->Get_type_of_ex() << endl;
			file << "Кількість разів: " << arr_basic[i]->Get_my_times() << endl;
			file << "Кількість повторів:" << arr_basic[i]->Get_my_repeat() << endl;
			file << endl;
		}
		for (int i = 0; i < arr_endurance.size(); i++)
		{
			file << "Вправа: " << arr_endurance[i]->Get_type_of_ex() << endl;
			file << "Дистанція(метри): " << arr_endurance[i]->Get_my_distance() << endl;
			file << endl;
		}
		file << endl;
		file << endl;

	}
	file.close();
	return 0;
}