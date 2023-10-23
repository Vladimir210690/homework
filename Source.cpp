#include <iostream>

using namespace std;

const int ROW = 11;
const int COL = 13;

void Draw()
{
	system("cls");

	for (int a = 0; a < ROW; a++)
	{
		for (int b = 0; b < COL; b++)
		{
			if (b == 4 || b == 9)
			{
				cout << "#";
			}
			if (a == 3 || a == 7)
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

}

int main()
{
	while (true)
	{
		Draw();
	}
	
	return 0;
}