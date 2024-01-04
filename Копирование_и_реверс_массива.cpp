//Используя два указателя на массивы целых чисел,
//скопировать один массив в другой так, чтобы во
//втором массиве элементы находились в обратном
//порядке.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор
//разыменования.

#include <iostream>
#include <ctime>

using namespace std;

void Print(int* first, int* second, int COUNT) { // Функция копирования одного массива в другой через указатели
	for (int i = 0; i < COUNT; i++) {
		*(second + i) = *(first + i);
	}
}

void Rewers(int* second, int COUNT) { // Функция реверса массива
	int time = 0; // Временная переменная для хранения перемещаемого значения
	for (int i = 0, j = COUNT - 1; i < j; i++, j--) { // Тут пробегаем его с начала и с конца, меняя значения через дополнительную переменную
		time = *(second + i);
		*(second + i) = *(second + j);
		*(second + j) = time;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int SIZE = 6; // Константа для размера массивов

	int group[SIZE]; // Массивы
	int bag[SIZE];

	int* pntr1 = group; // Указатели на массивы
	int* pntr2 = bag;

	for (int i = 0; i < SIZE; i++) { // Инициализирует и выводит первый массив
		*(pntr1 + i) = rand() % 100 + 1;
		cout << *(pntr1 + i) << "\t";
	}

	cout << endl << endl;

	Print(pntr1, pntr2, SIZE); // Копирует первый массив во второй
	Rewers(pntr2, SIZE); // Переставляет значения в массиве в обратном порядке

	for (int i = 0; i < SIZE; i++) { // Выводит второй массив
		cout << *(pntr2 + i) << "\t";
	}
	
	return 0;
}