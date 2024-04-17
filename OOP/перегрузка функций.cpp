#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

template<class Temp>
Temp number_max(Temp one, Temp two) { // Шаблон по поиску наибольшего числа из двух чисел
	if (one > two) {
		return one;
	}
	else if (two > one) {
		return two;
	}
	else if(one = two){
		return one = two;
	}
}

template<class Temp>
Temp number_min(Temp one, Temp two) { // Шаблон по поиску наименьшего числа из двух чисел
	if (one > two) {
		return two;
	}
	else if (two > one) {
		return one;
	}
	else if (one = two) {
		return one = two;
	}
}

template<class Arr>
void init_arr(Arr arr[], int size) { // Функция инициализации и вывода массивов
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % size;
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class Arr>
Arr average(Arr arr[], int size) { // Шаблон для поиска среднеего арифметического значения массива
	int sum = 0, average = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	average = sum / size;
	return average;
}

template<class X>
X sqrt_t(X one, X two) { // Функция решения линейного уравнения
	X x = -two / one;
	return x;
}

template<class X>
X sqrt_t(X one, X two, X theth) { // Там в формуле вообще пишет что если дискременант больше 0, то уравнение имеет 2 корня. Тут уж простите, напишу что нибудь одно))
	X D = (two * two) - (4 * one * theth);
	X x = 0;
	if (D > 0) {
		x = (-two + sqrt(D)) / (2 * one);
		return x;
	}
	else {
		return 0;
	}
}

int main() {
	srand(time(NULL));
	double one = 4.5, two = 1.2, theth = 88.2; // Создаем переменные типа double
	int a = 9, b = 88, c = 34; // Создаем переменные типа int
	const int SIZE = 10; // Создаем константу для количества ячеек массива
	
	int mass[SIZE]; // Создаем массивы с двумя типами данных
	double mass1[SIZE];

	init_arr<int>(mass, SIZE); // Инициализируем эти массивы
	cout << endl;
	cout << " average int: " << average<int>(mass, SIZE) << endl;
	init_arr<double>(mass1, SIZE);
    cout << endl;
	cout << " average double: " << average<double>(mass1, SIZE) << endl;
	
	cout << "-----------------------------------------" << endl;

	cout << " max double: " << number_max<double>(one, two) << endl;
	cout << " mix double: " << number_min<double>(one, two) << endl;
	cout << " max int: " << number_max<int>(a, b) << endl;
	cout << " mix int: " << number_min<int>(a, b) << endl;
	cout << "-----------------------------------------" << endl;

	cout << " lin double: " << sqrt_t<double>(one, two) << endl;
	cout << " lin int : " << sqrt_t<int>(a, b) << endl;
	cout << " cub double: " << sqrt_t<double>(one, two, theth) << endl;
	cout << " cub int: " << sqrt_t<int>(a, b, c) << endl;

	return 0;
}