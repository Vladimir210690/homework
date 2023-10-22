#include <iostream>

using namespace std;

bool gameover; // переменная отвечает за выигрыш - проигрыш
const int width = 40; // ширина экрана
const int heigth = 20; // высота экрана
int x, y, fruitX, fruitY,score; // координаты змейки, координаты фруктов и счет
enum motion {STOP = 0, LEFT, RIGHT, UP, DOWN}; // создаем список команд и помещаем в одну переменную
motion run;

void Setup() // функция для настроек нужных параметров игры
{
	gameover = false; // задаем по умолчанию что мы еще не проиграли
	run = STOP; // задаем команду остановки игры
	x = width / 4; // задаем изначально центральное положение змейки
	y = heigth / 2 + 9; // задаем изначально центральное положение змейки
	fruitX = rand() % width; // задаем рандомное появление фруктов
	fruitY = rand() % heigth; // задаем рандомное появление фруктов
	score = 0; // изначально задаем нулевой счет
}

void Draw() // функция для рисования карты
{
	system("cls"); // каждый раз очищает терминал при вызове этой функции
	for (int a = 0; a < width; a++) // рисуем в цикле границы игры
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

	for (int i = 0; i < width; i++) // рисуем в цикле границы игры
	{
		cout << "#";
	}
	cout << endl;
}

void Input() // функция отслеживающая все нажатия от пользователя
{

}

void Logik() // функция отвечающая за логику игры
{

}

int main()
{
	Setup();
	while (!gameover) // вызываем все функции в цикле, они будут выводиться, пока игра не закончиться
	{
		Draw();
		Input();
		Logik();
	}
	return 0;
}