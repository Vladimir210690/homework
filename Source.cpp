//Ќаписать программу, реализующую сортировку
//массива с помощью усовершенствованной
//сортировки пузырьковым методом.
//”совершенствование состоит в том, чтобы
//анализировать количество перестановок на каждом
//шагу, если это количество равно нулю, то продолжать
//сортировку нет смысла Ч массив отсортирован.


#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int SIZE = 10;
	int bubble[SIZE]{};

	bool flag = false;
	int col = 0;
	int iter = 0;

	for (int i = 0; i < SIZE; i++) {
		bubble[i] = rand() % 100;
		cout << bubble[i] << " ";
	}
	cout << endl << endl;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (bubble[j] > bubble[j + 1]) {
				swap(bubble[j], bubble[j + 1]);
			}
			else if (bubble[j] < bubble[j + 1]) {
				col += 1;
			}
			iter += 1;
			cout << col << " ";
			if (col == 9) {
				flag = true;
				break;
			}
		}
		col = 0;
		if (flag == true) {
			break;
		}
	
	}
	cout << " оличество пробегов = " << iter << endl << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << bubble[i] << " ";
	}


	return 0;
}