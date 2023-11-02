//Найти произведение всех целых чисел от a до 20 (значение
//	a вводится с клавиатуры : 1 <= a <= 20).

#include <iostream>

using namespace std;

int main() {
	double multiplication = 1; // В интовую переменную не влезают все результаты, это результат произведения чисел в указанном диапазоне
	int number = 0; // Стартовое число, которое вводит пользователь
	
	cout << "Input number >= 1 <= 20: " << endl;
	cin >> number;

	if (number < 1 || number > 20) {
		cout << "Error. Number number < 1 or number > 20" << endl;
	}
	else {
		int i = number; // Закидываем число в другую переменную, чтобы сохранить введенное число

		for (; i < 21; i++) {
			multiplication *= i;
		}
		cout << "The product of numbers from " << number << " before 20 = " << multiplication << endl;
	}

	return 0;
}