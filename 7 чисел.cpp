/*������������ ������ � ���������� 7 ����� �����. ��������
���������, ������� ���������� ������������ �� ���� 7 �����.*/

/*�������� ������� ��� ����� �������� ���, � �� ���� �� �������, ����� �� �����))*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int max = 0; // ������� ������������ ��������
	int number = 0; // ������� �������� ����������

	cout << "������� 7 �����:" << endl;
	cin >> number;

	number = max;

	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	cin >> number;

	if (number > max)
	{
		max = number;
	}
	
	cout << "����� ������� �����: " << max << endl;

	return 0;

}