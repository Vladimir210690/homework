#include <iostream>
#include <ctime>

using namespace std;

void Copir(int* arr, int* brr, int SIZE) { //Функция копирующая массив в массив по указателям

	for (int i = 0; i < SIZE; i++) {
		*(brr + i) = *(arr + i);
		cout << *(brr + i) << "\t";
	}
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	const int SIZE = 10;

	int mass[SIZE]; // Массивы
	int field[SIZE];

	int* pn1 = mass; // Указатели на массивы
	int* pn2 = field;

	for (int i = 0; i < SIZE; i++) { // Инициализация первого массива через указатель
		*(pn1 + i) = rand() % 10 + 1;
		cout << *(pn1 + i) << "\t";
	}
	cout << endl << endl;

	Copir(pn1, pn2, SIZE); // Закидываем в функцию указатели на массивы и обьем массивов

	return 0;
}