#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int row = 0;
	int col = 0;

	cout << "Введите количество строк" << endl;
	cin >> row;

	cout << "Введите количество колонок" << endl;
	cin >> col;

	for (int a = 0; a < col; a++)
	{
		cout << "*";
	}
	cout << endl;

	for (int b = 0; b < row - 2; b++)
	{
		for (int c = 0; c < col; c++)
		{
			if (c == 0 || c == col - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int a = 0; a < col; a++)
	{
		cout << "*";
	}
	cout << endl;

	return 0;
}
