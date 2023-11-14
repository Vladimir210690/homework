//Подсчитать количество целых чисел в диапазоне от 100 до 900,
//у которых в числе есть 2 одинаковые цифры

#include <iostream>

using namespace std;

int main() {
	int col = 0; //Счетчик количества чисел

	int one = 0; //Разряды числа
	int two = 0;
	int three = 0;

	int two1 = 0;
	int three1 = 0; //Остатки от операции
	
	for (int i = 100; i < 901; i++) {

		three = i % 10;
		three1 = i / 10;
		two = three1 % 10;
		two1 = three1 / 10;
		one = two1 % 10;
		
		if (three == two || three == one || two == one) {
			cout << i << endl;
			col++;
		}
	}
	cout << "Quantity: " << col;
	return 0;
}
