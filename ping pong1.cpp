#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

enum Move {STOP = 0, UP, DOWN};
Move run;

const int COL = 50;
const int ROW = 20;

int x = COL - 2;
int y = ROW / 2;

void Draw() 
{
	for (int i = 0; i < COL; i++)
	{
		cout << "#";
	}
	cout << endl;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			
			if (j == 0 || j == COL - 1) {
				cout << "#";
			}
				
			else if (x == j && y == i ) {
				cout << "*";
			}

			else {
				cout << " ";
			}
			
		}
		cout << endl;
	}

	for (int i = 0; i < COL; i++)
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
		case 'w':
			run = UP;
			break;
		case 's':
			run = DOWN;
		}
	}
}

void Logik()
{
	switch (run)
	{
	case STOP:
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;

	}

}


int main() 
{
	while (true) {
		
		system("cls");
		Draw();
		Input();
		Logik();
	}
	return 0;
}