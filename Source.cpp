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
		cout << "������� ���� +,-,*,/: ";
		cin >> znak;

			switch (znak)
			{
			case '+':
				cout << "������� ������ �����: " << endl;
				cin >> a;
				cout << "������� ������ �����: " << endl;
				cin >> b;
				cout << "���������: " << a + b << endl;
				break;

			case '-':
				cout << "������� ������ �����: " << endl;
				cin >> a;
				cout << "������� ������ �����: " << endl;
				cin >> b;
				cout << "���������: " << a - b << endl;
				break;

			case '*':
				cout << "������� ������ �����: " << endl;
				cin >> a;
				cout << "������� ������ �����: " << endl;
				cin >> b;
				cout << "���������: " << a * b << endl;
				break;

			case '/':
				cout << "������� ������ �����: " << endl;
				cin >> a;
				cout << "������� ������ �����: " << endl;
				cin >> b;
				if (b == 0)
				{
					cout << "���������� ������ �� 0" << endl;
				}
				else
				{
					cout << "���������: " << a / b << endl;
				}
				break;

			case '%':
				cout << "������� ������ �����: " << endl;
				cin >> a;
				cout << "������� ������ �����: " << endl;
				cin >> b;
				cout << "���������: " << (int)a % (int)b << endl;
				break;
			}

	}
	cout << "��������� ���������";

	return 0;
}