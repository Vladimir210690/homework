#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "RUS");

	char znak = 0;
	double a = 0;
	double b = 0;



	for (;znak != 'o';)
	{
		cout << "Выберите знак +,-,*,/: ";
		cin >> znak;

			switch (znak)
			{
			case '+':
				cout << "Введите первое число: " << endl;
				cin >> a;
				cout << "Введите второе число: " << endl;
				cin >> b;
				cout << "Результат: " << a + b << endl;
				break;

			case '-':
				cout << "Введите первое число: " << endl;
				cin >> a;
				cout << "Введите второе число: " << endl;
				cin >> b;
				cout << "Результат: " << a - b << endl;
				break;

			case '*':
				cout << "Введите первое число: " << endl;
				cin >> a;
				cout << "Введите второе число: " << endl;
				cin >> b;
				cout << "Результат: " << a * b << endl;
				break;

			case '/':
				cout << "Введите первое число: " << endl;
				cin >> a;
				cout << "Введите второе число: " << endl;
				cin >> b;
				if (b == 0)
				{
					cout << "Нельзя делить на 0" << endl;
				}
				else
				{
					cout << "Результат: " << a / b << endl;
				}
				break;

			case '%':
				cout << "Введите первое число: " << endl;
				cin >> a;
				cout << "Введите второе число: " << endl;
				cin >> b;
				cout << "Результат: " << (int)a % (int)b << endl;
				break;
			}

	}
	cout << "Программа завершена";

	return 0;
}
