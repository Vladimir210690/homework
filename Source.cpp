#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	const int DATA = 10;
	int age[DATA];
	char name[DATA];

	cout << "������� ���� ���: " << endl;
	cin >> name;

	for (int c = 0; c < DATA; c++)
	{
		switch (c)
		{
		case 0:
			cout << "������� ��� ���? " << endl;
			cin >> age[c];
			break;
		case 1:
			cout << "����� ��� ���� � �����������? " << endl;
			cin >> age[c];
			break;
		case 2:
			cout << "����� ��� ��� � �����������? " << endl;
			cin >> age[c];
			break;
		case 3:
			cout << "����� ��� ��������� � ������? " << endl;
			cin >> age[c];
			break;
		case 4:
			cout << "������� ��� ��������� � ����� ���������? " << endl;
			cin >> age[c];
			break;
		}
	}
	cout << "�������� ������ �������: " << endl << endl;

	cout << "��� ������������: " << name << endl;
	cout << "������� ������������: " << age[0] << " ���" << endl;
	cout << "���� ������������: " << age[1] << " ��" << endl;
	cout << "��� ������������: " << age[2] << " ��" << endl;
	cout << "��������� ������������: " << age[3] << " ���" << endl;
	cout << "���� ������ ������������: " << age[4] << " ���" << endl;

	return 0;
}