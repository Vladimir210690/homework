/*Пользователь вводит с клавиатуры 7 целых чисел. Напишите
программу, которая определяет максимальное из этих 7 чисел.*/

/*Отличная заминка под конец рабочего дня, а не занл бы решения, думал бы долго))*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int max = 0; // Текущее максимальное значение
	int number = 0; // Текущее значение переменной

	cout << "Введите 7 чисел:" << endl;
	cin >> number;

	number = max;

	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	
	cout << "Самое большое число: " << max << endl;

	return 0;

}