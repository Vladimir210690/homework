//Пользователь вводит строку с клавиатуры в
//фиксированный массив.Необходимо проверить,
//сколько элементов массива теперь занято и сколько
//свободно.

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	const int SIZE = 100;
	char str[SIZE]{};
	cin >> str;

	cout << "Занато элементов массива: ";
	cout << strlen(str) << " из " << SIZE << "\n";
	int count = strlen(str);
	cout << "Свободно элементов массива: " << SIZE - count << " из " << SIZE << "\n";

	return 0;
}