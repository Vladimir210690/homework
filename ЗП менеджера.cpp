/*�������� ��������� ���������� 200$ + ������� �� ������.

������� �� 500$ � 3 %, �� 500 �� 1000 � 5 %, �����
8 % .
������������ ������ � ���������� ������� ������
��� ���� ����������.
���������� �� ��������, ����������
������� ���������, ��������� ��� ������ 200$, �������
����� �� �����.*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	const int SALARY = 200; // �������� ���������
	int sales1 = 0; // ��� ������� 1 ���������
	int sales2 = 0; // ��� ������� 2 ���������
	int sales3 = 0; // ��� ������� 3 ���������
	int best = 0;

	int zp1 = 0;
	int zp2 = 0;
	int zp3 = 0;

	cout << "������� ������� ������ ������� ���������, � $: " << endl;
	cin >> sales1;
	
	if (sales1 > 0 && sales1 < 500)
	{
		zp1 = (200 * 0.03) + 200;
	}
	else if (sales1 > 500 && sales1 < 1000)
	{
		zp1 = (200 * 0.05) + 200;
	}
	else if (sales1 > 1000)
	{
		zp1 = (200 * 0.08) + 200;
	}

	cout << "������� ������� ������ ������� ����������, � $: " << endl;
	cin >> sales2;

	if (sales2 > 0 && sales2 < 500)
	{
		zp2 = (200 * 0.03) + 200;
	}
	else if (sales2 > 500 && sales2 < 1000)
	{
		zp2 = (200 * 0.05) + 200;
	}
	else if (sales2 > 1000)
	{
		zp2 = (200 * 0.08) + 200;
	}
	cout << "������� ������� ������ �������� ���������, � $: " << endl;
	cin >> sales3;

	if (sales3 > 0 && sales3 < 500)
	{
		zp3 = (200 * 0.03) + 200;
	}
	else if (sales3 > 500 && sales3 < 1000)
	{
		zp3 = (200 * 0.05) + 200;
	}
	else if (sales3 > 1000)
	{
		zp3 = (200 * 0.08) + 200;
	}

	cout << "�������� ������� ���������: " << zp1 << " $" << endl;
	cout << "�������� ������� ���������: " << zp2 << " $" << endl;
	cout << "�������� �������� ���������: " << zp3 << " $" << endl << endl;

	// ���������� ������� ���������

	if (zp1 > zp2 && zp1 > zp3)
	{
		best = zp1;
		cout << "������ �������� � ���������: " << best << " $ � �����." << endl;
		best = best + 200;
		cout << "�������� ������� ��������� � ������ ������ � 200 $ = " << best << endl;
	}
	else if (zp2 > zp1 && zp2 > zp3)
	{
		best = zp2;
		cout << "������ �������� ������� ��������: " << best << " $ � �����." << endl;
		best = best + 200;
		cout << "�������� ������� ��������� � ������ ������ � 200 $ = " << best << endl;
	}
	else if (zp3 > zp1 && zp3 > zp2)
	{
		best = zp3;
		cout << "������ �������� � ���������: " << best << " $ � �����." << endl;
		best = best + 200;
		cout << "�������� ������� ��������� � ������ ������ � 200 $ = " << best << " $" << endl;
	}
	else if (zp1 == zp2 || zp2 == zp3 || zp3 == zp1)
	{
		if (sales1 > sales2 && sales1 > sales3)
		{
			best = zp1;
			cout << "������ �������� ����� ������� �� ������: " << sales1 << " $ ������� ��������: " << best << " $ �� �����" << endl;
			best = best + 200;
			cout << "�������� ������� ��������� � ������ ������ � 200 $ = " << best << endl;
		}
		else if (sales2 > sales1 && sales2 > sales3)
		{
			best = zp2;
			cout << "������ �������� ����� ������� �� ������: " << sales2 << " $ ������� ��������: " << best << " $ �� �����" << endl;
			best = best + 200;
			cout << "�������� ������� ��������� � ������ ������ � 200 $ = " << best << endl;
		}
		else if (sales3 > sales1 && sales3 > sales2)
		{
			best = zp3;
			cout << "������ �������� ����� ������� �� ������: " << sales3 << " $ ������� ��������: " << best << " $ �� �����" << endl;
			best = best + 200;
			cout << "�������� ������� ��������� � ������ ������ � 200 $ = " << best << " $" << endl;
		}
	}
	return 0;
}