#include <iostream>
#include "Type_Basic_Exercises.h"
#include "Type_Endurance_Exercises.h"
#include <fstream>
#include <vector>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Push_Up a;
	Pull_Up b;
	Twisting c;
	Squats d;

	Run e;
	Bicycle f;

	// первое значение кол-во сделаных раз, второе значение кол во подходов
	a.Do(20,3);
	b.Do(10,2);
	c.Do(30,2);
	d.Do(50,1);

	// первое значение метры, 2рое значение кол во кругов
	e.Do(400,3);
	f.Do(400,3);


	cout << a.Do(20, 3) + b.Do(10, 2) + c.Do(30, 2) + d.Do(50, 1) + e.Do(400, 3) + f.Do(400, 3) << endl;

	cout << a.Get_total_burned_cal();

	

/*
	Basic_Exercises one;
	double a = one.Do("Twisting", 30, 3);
	double b = one.Get_burned_cal();
	double c = one.Get_total_burned_cal();
	int d = one.Get_my_repeat();
	int e = one.Get_my_times();
	string q = one.Get_type_of_ex();
	cout << a << " Спалено калорій" << endl;
	cout << b << " вправа спалила калорії " << endl;
	cout << c << " всього спалено калорій" << endl;
	cout << d << " кількість підходів" << endl;
	cout<< e << " кількість повторів" << endl;
	cout<< q << " назва вправи" << endl;
	cout << endl;
	cout << endl;
	a = one.Do("Push_Up", 20, 2);
	b = one.Get_burned_cal();
	c = one.Get_total_burned_cal();
	d = one.Get_my_repeat();
	e = one.Get_my_times();
	q = one.Get_type_of_ex();
	cout << a << " Спалено калорій" << endl;
	cout << b << " вправа спалила калорії " << endl;
	cout << c << " всього спалено калорій" << endl;
	cout << d << " кількість підходів" << endl;
	cout << e << " кількість повторів" << endl;
	cout << q << " назва вправи" << endl;
	cout << endl;
	cout << endl;
	a = one.Do("Twisting", 60, 2);
	b = one.Get_burned_cal();
	c = one.Get_total_burned_cal();
	d = one.Get_my_repeat();
	e = one.Get_my_times();
	q = one.Get_type_of_ex();
	cout << a << " Спалено калорій" << endl;
	cout << b << " вправа спалила калорії " << endl;
	cout << c << " всього спалено калорій" << endl;
	cout << d << " кількість підходів" << endl;
	cout << e << " кількість повторів" << endl;
	cout << q << " назва вправи" << endl;
	



	
	vector <int> arr_Basic_ExercisesT;
	vector <int> arr_Basic_ExercisesR;
	vector <int> arr_EnduranceEx;

	fstream file;

	Basic_Exercises one;
	double a = one.Do("Twisting", 30, 3);
	cout << a << endl;
	cout << one.my_times << " my_times " << endl;
	cout << one.my_repeat << " my_repeat " << endl;
	arr_Basic_ExercisesT.push_back(one.my_times);
	arr_Basic_ExercisesR.push_back(one.my_repeat);

	double b = one.Do("Push_Up", 20, 2);
	cout << b << endl;
	cout << one.my_times << " my_times " << endl;
	cout << one.my_repeat << " my_repeat " << endl;
	arr_Basic_ExercisesT.push_back(one.my_times);
	arr_Basic_ExercisesR.push_back(one.my_repeat);

	double c = one.Do("Pull_Up", 10, 1);
	cout << c << endl;
	cout << one.my_times << " my_times " << endl;
	cout << one.my_repeat << " my_repeat " << endl;
	arr_Basic_ExercisesT.push_back(one.my_times);
	arr_Basic_ExercisesR.push_back(one.my_repeat);


	file.open("Щоденник.txt", ios::app);
	if (!file.is_open())
	{
		cout << "Сталася помилка відкриття файлу ! " << endl;
		return 1;
	}
	else
	{
		for (int i = 0; i < arr_Basic_ExercisesT.size(); i++)
		{
			file << arr_Basic_ExercisesT[i] << " кількість повторів "<<"\t"<< arr_Basic_ExercisesR[i] << " кількість підходів " << endl;
		}
	}
	file.close();

	EnduranceEx two;
	double d = two.Do("Run", 400, 5);
	cout << d << endl;
	cout << two.my_distance << " my_distance " << endl;

	cout << endl;
	cout << endl;


	double e = two.Do("Bicycle", 400, 5);
	cout << e << endl;
	cout << two.my_distance << " my_distance " << endl;
	cout << endl;
	cout << endl;


	cout << a + b + c + d + e << " Сожжено за тренировку" << endl;
*/

	return 0;
}