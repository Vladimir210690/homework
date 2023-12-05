#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

#define _weigths 3 // Константа хранящая количество весов

double w[_weigths]; // Массив для весов

double Activate(double a) { //Функция активации
	return (a <= 0) ? 0 : 1;
}

double RightProp(double input[3]) { // Функция вычисления
	double res = 0; // Переменная хранящая результат рассчетов
	for (int i = 0; i < 3; i++) {
		res += w[i] * input[i];
	}
	return res;
}

void Train(int data[4][3], int exp[4]) {
	const double LR = 0.1, EPOCH = 50;

	int d, i, n;
	double error;

	for (int i = 0; i < EPOCH; i++) {
		for (int j = 0; j < 4; j++) {
			error = exp[j] - Activate(RightProp((double*)data[j]));
			for (int n = 0; n < _weigths; n++) {
				w[n] += LR * error * data[j][n];
			}
		}
	}
}

int main(int argc, char* argv[]) {
	int traningdata[4][3]{ {0,0,1},{0,1,1},{1,0,1},{0,1,0} };
	int expresultr[4]{ 0,0,1 };
	int i;
	srand(1);

	for (int i = 0; i < 3; i++) {
		w[i] = fmod(rand() % 100000000 * 0.1, 1.05);
	}
	Train(traningdata, expresultr);

	for (int i = 0; i < 3; i++) {
		w[i] = (w[i] > 0) ? w[i] : 0;
	}

	double arr[3]{ 1,1,0 };
	printf("%.1f", Activate(RightProp(arr)));
}