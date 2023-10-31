//Напишите программу, которая запрашивает два целых числа
//x и y, после чего вычисляет и выводит значение x в степени y.

#include <iostream>

using namespace std;

int main() {
	int number = 0; // Запрашиваем первое число
	int degree = 0; // Запрашиваем второе число, которое является степенью для первого
	int total = 0;

	cout << "Input one number: " << endl;
	cin >> number;

	total = number; // Приравниваем результат первому числу, т. е. первой степени

	cout << "Input two number: " << endl;
	cin >> degree;

	for (int i = 1; i < degree; i++) { // Умножаем число на само себя столько раз, чему равна переменная со степенью
		total *= number;
	}
	cout << "Result: " << total << endl;

	return 0;
}