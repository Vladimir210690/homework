//В одномерном массиве, заполненном случайными
//числами в заданном пользователем диапазоне, найти
//сумму элементов, значения которых меньше
//указанного пользователем.

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	int const SIZE = 10;
	int number[SIZE];

	int a = 0; // Начало диапазона от пользователя
	int b = 0; // Конец диапазона от пользователя
	int c = 0; // Значение от пользолвателя, для суммирования элементов массива, которые меньше данного значения
	int sum = 0;

	for (int i = 0; i < SIZE; i++) { // Заполняем массив цифрами от 0 до 9
		number[i] = rand() % 10;
		cout << number[i] << " ";
	}
	cout << endl;

	cout << "Input nachalo diapazona: "; // Запрашиваем начало диапазона у пользователя
	cin >> a;
	cout << "Input konec diapazona: "; // Запрашиваем конец диапазона у пользователя
	cin >> b;
	cout << "Input max znachenie elementa massiva: "; // Запрашиваем число ограничитель максимального значения массива
	cin >> c;

	for (int i = 0; i < SIZE; i++) { 
		if (i >= a - 1  && i <= b - 1 && number[i] < c ) { // Проверяем значения ячеек массива на соответствие условиям
			sum += number[i];
		}	
	}

	cout << "Summa elementov podxodiachix pod uslovie = " << sum;

	return 0;
}