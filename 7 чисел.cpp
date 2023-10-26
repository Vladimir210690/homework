/*Пользователь вводит с клавиатуры 7 разных чисел,
 написать программу определяющую самое большое из них*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int max = 0; // Переменная для максимального числа
	int number = 0; // Число введенное пользователем

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
