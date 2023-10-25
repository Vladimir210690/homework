#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

const int ROW = 20;
const int COL = 40;

int x = ROW / 2;
int y = COL / 2;
int check = 0;

bool gameOver = false;
enum po {STOP = 0, LEFT, RIGHT, UP, DOUN};
po run;
int xfr = rand() % ROW;
int yfr = rand() % COL;

void Draw1()

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
			else if (b == x && c == y)
			{
				cout << "0";
			}
			else if (b == xfr && c == yfr)
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

	for (int a = 0; a < COL; a++)
	{
		cout << "#";
	}
	cout << endl;
}

void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			run = LEFT;
			break;
		case 'd':
			run = RIGHT;
			break;
		case 'w':
			run = UP;
			break;
		case 's':
			run = DOUN;
			break;
		}
	}
}

void Logik()
{
	switch (run)
	{
	case LEFT:
		y--;
		break;
	case RIGHT:
		y++;
		break;
	case UP:
		x--;
		break;
	case DOUN:
		x++;
		break;
	default:
		break;
	}
	cout << "Check: " << check << endl;

	if (x == xfr && y == yfr)
	{
		check++;
		xfr = rand() % ROW;
		yfr = rand() % COL;
	}
	if ((x == -1 || y == 0) || (x == 20 || y == 40))
	{
		gameOver = true;
	}
}

int main()
{
	while (!gameOver)
	{
		srand(time(NULL));
		
		Draw1();
		Input();
		Logik();
	}
	cout << "You Lose" << endl;

	return 0;
}