//Реализуйте перегруженные функции для
//Нахождения максимального значения двух целых;
//Нахождения максимального значения трёх целых.

#include <iostream>

using namespace std;

int Sum(int a, int b) {
	int sum = a + b;
	return sum;
}

int Sum(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}

int main() {

	int one = 7, two = 4, three = 9;

	cout << Sum(one, two) << endl;
	cout << Sum(one, two, three) << endl;
	return 0;
}