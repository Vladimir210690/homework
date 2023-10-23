#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

const int ROW = 20;
const int COL = 40;

int x = 0;
int y = 0;
int fruX = 0;
int fruY = 0;
bool gameOver = false;
enum motion {STOP = 0, LEFT, RIGHT, UP, DOWN};
motion run;

int score = 0;

void Setup()
{
	srand(time(NULL));

	x = ROW / 2 - 1;
	y = COL / 2 - 1;

	fruX = rand() % ROW + 1;
	fruY = rand() % COL + 1;
}

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
			else if (b == x  && c == y)
			{
				cout << "0";
			}
			else if (b == fruX && c == fruY)
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
		case 'w':
			run = UP;
			break;
		case 'd':
			run = RIGHT;
			break;
		case 's':
			run = DOWN;
			break;
		case 'p':
			gameOver = true;
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
	case DOWN:
		x++;
		break;
	}

	if ((x > ROW || x < 0) || (y > COL || y < 0))
	{
		gameOver = true;
	}

	if (x == fruX && y == fruY)
	{
		score++;
		fruX = rand() % ROW + 1;
		fruY = rand() % COL + 1;
	}
	cout << "You game score: " << score << endl;
}

int main()

{
	Setup();

	while (gameOver == false)
	{
		Draw();
		Input();
		Logik();
	}
	
	cout << "Game Ower" << endl;
	return 0;
}