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
		cout << "������� ��������:  + , - , * , / � ������� ����, o �������� ��������:  ";
		cin >> A;

		switch (A)
		{

		case '+':

			cout << "������� ������ �����: ";
			cin >> B;
			cout << "������� ������ �����: ";
			cin >> C;

			cout << "���������: " << B + C << endl;
			break;

		case '-':

			cout << "������� ������ �����: ";
			cin >> B;
			cout << "������� ������ �����: ";
			cin >> C;

			cout << "���������: " << B - C << endl;
			break;

		case '*':

			cout << "������� ������ �����: ";
			cin >> B;
			cout << "������� ������ �����: ";
			cin >> C;

			cout << "���������: " << B * C << endl;
			break;

		case '/':

			cout << "������� ������ �����: ";
			cin >> B;
			cout << "������� ������ �����: ";
			cin >> C;

			cout << "���������: " << B / C << endl;
			break;

	
		}
	}
	return 0;

}