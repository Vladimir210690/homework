#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a = 0;
	double b = 0;
	int c = 0;
	int d = 0;
	int sum = 0;
	double g = 0;
	int f = 0;
	cout << "������� ����� �� 1 �� 99: ";
	cin >> a;

	if ((a > 0) && (a < 100))
	{
		b = a * 0.1;
		g = b;
		c = b;
		d = (g - c) * 10;

		sum = c + d;

		if (a < 10)
		{
			f = 1;
			cout << "���������� ��������: " << f << endl;
		}
		else
		{
			f = 2;
			cout << "���������� ��������: " << f << endl;
		}
		cout << "����� ������� � ������� ����� �����: " << sum << endl;
	}

	else
	{
		cout << "����� ��� ���������";
	}

	return 0;
}