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
		cout << "¬ведите действие:  + , - , * , / и нажмите ввод, o завершит операцию:  ";
		cin >> A;

		switch (A)
		{

		case '+':

			cout << "¬ведите первое число: ";
			cin >> B;
			cout << "¬ведите второе число: ";
			cin >> C;

			cout << "–езультат: " << B + C << endl;
			break;

		case '-':

			cout << "¬ведите первое число: ";
			cin >> B;
			cout << "¬ведите второе число: ";
			cin >> C;

			cout << "–езультат: " << B - C << endl;
			break;

		case '*':

			cout << "¬ведите первое число: ";
			cin >> B;
			cout << "¬ведите второе число: ";
			cin >> C;

			cout << "–езультат: " << B * C << endl;
			break;

		case '/':

			cout << "¬ведите первое число: ";
			cin >> B;
			cout << "¬ведите второе число: ";
			cin >> C;

			cout << "–езультат: " << B / C << endl;
			break;

	
		}
	}
	return 0;

}