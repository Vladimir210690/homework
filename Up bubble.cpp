//Написать программу, реализующую сортировку
//массива с помощью усовершенствованной
//сортировки пузырьковым методом.
//Усовершенствование состоит в том, чтобы
//анализировать количество перестановок на каждом
//шагу, если это количество равно нулю, то продолжать
//сортировку нет смысла — массив отсортирован.

#include <iostream>
#include <ctime>

using namespace std;

void Gener(int arr[], int n) { // Функция рандомного заполнения массива
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100 + 100;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

void Enter(int arr[], int g) { // Функция вывода массива
	for (int i = 0; i < g; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

void Bubble(int arr[], int c) { // Функция наибыстрой сортировки массива от меньшего к большему
	int motion = 0; // Считает количество итераций
	int swaps = 0; // Считает количество перестановок
	
	for (int i = 0; i < c; i++)
	{
		bool stop = true;

		for (int i = 0; i < c - 1; i++) {
			if (arr[i] > arr[i + 1]) { // Если была хотябы одна перестановка, значение переменной stop меняется
				swap(arr[i], arr[i + 1]);
				stop = false;
				swaps++;
			}
			motion+=1; 
		}
		if (stop == true) { // Если значение переменной не изменилось, значит перестановок не было и массив отсортирован
			break; // Если есловие верно, выходим из цикла
		}
	}
	cout << "Количество проходов для сортировки: " << motion / 9 << endl; // Вывел чтобы убедиться что количество итераций меняется
	cout << "Количество перестановок: " << swaps << endl << endl; 
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int SIZE = 10;
	int mass[SIZE]{};

	Gener(mass, SIZE);
	Bubble(mass, SIZE);
	Enter(mass, SIZE);

	return 0;
}