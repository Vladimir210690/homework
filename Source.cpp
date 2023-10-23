#include <iostream>

using namespace std;

const int ROW = 20;
const int COL = 40;

void Draw()
{
	system("cls");

	for (int a = 0; a < COL; a++)
	{
		cout << "#";
	}
	cout << endl;

	for (int b = 0; b < ROW; b++)
	{
		for (int c = 0; c < COL; c++)
		{
			if (c == 0 || c == 39)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int a = 0; a < COL; a++)
	{
		cout << "#";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");

	while (true)
	{
		Draw();
	}

}