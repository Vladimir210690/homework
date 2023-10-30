#include <iostream>
#include <conio.h>

using namespace std;

const int ROW = 20;
const int COL = 40;

int x = COL / 2;
int y = ROW / 2;


int gunX = COL / 2;
int gunY = ROW / 2;


int gunX2 = COL / 2;
int gunY2 = ROW / 2;

bool gameOver = false;
int enemyX = rand() % COL;
int enemyY = ROW - 20;

int score = 0;
bool gameOwer = false;
enum qwe { STOP = 0, FIRE , LEFT, RIGHT, UP, DOWN };
qwe run;

void Draw() // Функция отрисовки игрового поля
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
            else if ((c == x - 1 || c == x + 1 || c == x) && (b == y + 9))
            {
                cout << "#";
            }
     
            else if (c == gunX && b == gunY + 8)
            {
                cout << "^";
            }
            else if (c == gunX2 && b == gunY2 + 8)
            {
                cout << "^";
            }
            else if (c == enemyX && b == enemyY)
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


void Input() // Функция отслеживания ввода с клавиатуры
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
            run = DOWN;
            break;

        }
    }
}

void Logik() // Функция логики 
{
    enemyY++;
    gunY--;

    switch (run)
    {
    case LEFT:
        x--;
        gunX--;
        gunX2--;
        break;
    case RIGHT:
        x++;
        gunX++;
        gunX2++;
        break;
    }

    if (gunY == - 10)
    {
        gunY = 10;
    }
    if (enemyY == 21)
    {
        enemyX = rand() % COL;
        enemyY = ROW - 20;
    }
    else if ((enemyY == gunY && enemyX == gunX) || (enemyY == gunY2 && enemyX == gunX2))
    {
        score = score + 5;
        enemyX = rand() % COL;
        enemyY = ROW - 20;
    }
    else if (enemyY == y + 9 && (enemyX == x || enemyX == x - 1 || enemyX == x + 1))
    {
        score++;
        enemyX = rand() % COL;
        enemyY = ROW - 20;
    }
   

    cout << "Score: " << score << endl;
}

int main()
{
    while (!gameOwer)
    {
       Draw();
       Input();
       Logik();
    }
    return 0;
}
