#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	const int PRICE = 3; // �������� ����� ����
	int water = 0; // ���������� ����
	int Qwater = 0; // ��������� ����
	int price = 0; // ��������� �������� �� ����
	int start = 0; // ������� ��� ���������� ������
	

	while (true)
	{
		cout << "��������� ����� ���� 3 �����." << endl << endl;
		cout << "������� �������� ���������� ����: ";
		cin >> water;
		Qwater = PRICE * water;
		cout << "��������� ���������� ���������� ���� �����: " << Qwater << " ������.\n";
		cout << "������� ��������� ���������� ���������� ����: ";
		cin >> price;

		cout << "\n���������� ����: " << water << " ������." << endl;
		cout << "������� �������: " << Qwater << " ������." << endl;

		cout << "\n������� ������ �����: (������� ����� �����) ";
		cin >> start;

		if (Qwater <= price)
		{
			cout << 1 << " ���� �����.\n";
			cout << 2 << " ���� ������, ���� ��������.\n";
		}
		else
		{
			cout << 0 << " ������, ������������ �������.\n\n";
		}

	}
	return 0;
}