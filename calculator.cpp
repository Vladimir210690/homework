#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "RUS");

	char A = 0;
	double B = 0;
	double C = 0;
	

	while (A != 'o')
	{
		cout << "Выберите действие:  + , - , * , / и нажмите ввод, символ 'o' завершит операцию:  ";
		cin >> A;

		switch (A)
		{

		case '+':

			cout << "Введите первое число: ";
			cin >> B;
			cout << "Введите второе число: ";
			cin >> C;

			cout << "Результат: " << B + C << endl;
			break;

		case '-':

			cout << "Введите первое число: ";
			cin >> B;
			cout << "Введите второе число: ";
			cin >> C;

			cout << "Результат: " << B - C << endl;
			break;

		case '*':

			cout << "Введите первое число: ";
			cin >> B;
			cout << "Введите второе число: ";
			cin >> C;

			cout << "Результат: " << B * C << endl;
			break;

		case '/':

			cout << "Введите первое число: ";
			cin >> B;
			cout << "Введите второе число: ";
			cin >> C;

			cout << "Результат: " << B / C << endl;
			break;

	
		}
	}
	return 0;

}
