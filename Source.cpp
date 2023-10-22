#include <iostream>

using namespace std;

bool gameover; // ���������� �������� �� ������� - ��������
const int width = 40; // ������ ������
const int heigth = 20; // ������ ������
int x, y, fruitX, fruitY,score; // ���������� ������, ���������� ������� � ����
enum motion {STOP = 0, LEFT, RIGHT, UP, DOWN}; // ������� ������ ������ � �������� � ���� ����������
motion run;

void Setup() // ������� ��� �������� ������ ���������� ����
{
	gameover = false; // ������ �� ��������� ��� �� ��� �� ���������
	run = STOP; // ������ ������� ��������� ����
	x = width / 4; // ������ ���������� ����������� ��������� ������
	y = heigth / 2 + 9; // ������ ���������� ����������� ��������� ������
	fruitX = rand() % width; // ������ ��������� ��������� �������
	fruitY = rand() % heigth; // ������ ��������� ��������� �������
	score = 0; // ���������� ������ ������� ����
}

void Draw() // ������� ��� ��������� �����
{
	system("cls"); // ������ ��� ������� �������� ��� ������ ���� �������
	for (int a = 0; a < width; a++) // ������ � ����� ������� ����
	{
		cout << "#";
	}
	cout << endl;

	for (int b = 0; b < heigth; b++)
	{
		for (int c = 0; c < width; c++)
		{
			if (c == 0 || c == width - 1)
			{
				cout << "#";
			}
			else if (b == x && c == y)
			{
				cout << "0";
			}
			else if (b == fruitX && c == fruitY)
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

	for (int i = 0; i < width; i++) // ������ � ����� ������� ����
	{
		cout << "#";
	}
	cout << endl;
}

void Input() // ������� ������������� ��� ������� �� ������������
{

}

void Logik() // ������� ���������� �� ������ ����
{

}

int main()
{
	Setup();
	while (!gameover) // �������� ��� ������� � �����, ��� ����� ����������, ���� ���� �� �����������
	{
		Draw();
		Input();
		Logik();
	}
	return 0;
}