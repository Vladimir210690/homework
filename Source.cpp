#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	char name1 = 'o'; // ��� ������� ������
	char name2 = 'o'; // ��� ������� ������

	int a = 0; // �������� ���� ������� ������
	int b = 0; // �������� ���� ������� ������

	int c = 0; // ���� ������� ������
	int d = 0; // ���� ������� ������

	int e = 0;
	int j = 0;

	cout << "���� ������. ������ ����� �� ������� ���������� ����������� ����� �� 0 �� 10.\n";
	cout << "��������� ���, ��� ����� �������� ������. ���������� ������������� ���� ����, ���� �� 10 �����\n\n";

	cout << "������ �����, ������� ���� ���: " << endl;
	cin >> name1;
	cout << "������ �����, ������� ���� ���: " << endl;
	cin >> name2;

	cout << "���� ����������: " << endl << endl;

	while ((c != 3) && (d != 3))
	{
		cout << "����� " << name1 << " ������� 0 � Enter" << endl;
		cin >> e;
		a = rand() % 100;
		cout << "���� �����: " << a << endl;

		cout << "�����_ " << name2 << " ������� 0 � Enter" << endl;
		cin >> j;
		b = rand() % 100;
		cout << "���� �����: " << b << endl;

		if (a > b)
		{
			c++;
		}
		else if (a == b)
		{
			cout << "� ���� ���� �����, ������ ������:\n";
		}

		else
		{
			d++;
		}

		cout << "����: " << c << "/" << d << endl;
	}

	cout << "����� ����: " << endl << "����� " << name1 << ": " << c << endl << "����� " << name2 << ": " << d << endl;

	if (c > d)
	{
		cout << "������� �����: " << name1 << endl;
	}
	else
	{
		cout << "������� �����: " << name2 << endl;
	}
	return 0;
}