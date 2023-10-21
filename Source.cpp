#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	const int ROW = 3;
	const int COL = 4;

	int arr[ROW][COL];

	cout << "«аполн€ем числами двухмерный массив: " << endl << endl;

	for (int a = 0; a < ROW; a++)
	{
		for (int b = 0; b < COL; b++)
		{
			cin >> arr[a][b]; // можно использовать команду rand() дл€ автоматического заполнени€ массива
		}
	}

	cout << "¬ыводим числа из массива: " << endl << endl;

	for (int a = 0; a < ROW; a++)
	{
		for (int b = 0; b < COL; b++)
		{
			cout << arr[a][b] << endl;
		}
	}

	// —оздание и инициализаци€ двухмерного массива вручную

	const int RAZ = 4;
	const int NIZ = 10;

	char name[RAZ][NIZ]
	{
		{'V','l','a','d','i','m','i','r'},
	    {'D', 'a', 'r', 'i', 'a'},
		{'N','i','c','o','l','a','y'},
		{'K','r','i','s','t','i','n','a'},
	};

	cout << name[0] << endl;
	cout << name[1] << endl;
	cout << name[2] << endl;
	cout << name[3] << endl;

	return 0;
}