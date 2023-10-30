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

//int missX = ROW - 19;
//int missY = COL / 2;

int enemyX = ROW - 20;
int enemyY = rand() % COL;

int score = 0;
bool gameOwer = false;
enum qwe { STOP = 0, FIRE , LEFT, RIGHT, UP, DOWN };
qwe run;

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
            else if (c == x - 1 && b == y + 9 )
            {
                cout << "#";
            }
     
            else if (c == gunX - 1 && b == gunY + 8)
            {
                cout << "^";
            }
            else if (c == gunX2 - 1 && b == gunY2 + 8)
            {
                cout << "^";
            }
            else if (c == enemyY && b == enemyX)
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


void Input() // функция отслеживающая все нажатия от пользователя
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

void Logik() // функция отвечающая за логику игры
{
    enemyX++;
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
 /*   case UP:
        gunY--;
        break;*/
    /*case DOWN:
       ;
        break;*/
    }
    if (gunY == - 10)
    {
        gunY = 10;
    }
  
    if ((gunX == enemyX && gunY == enemyY) || (gunX2 == enemyX && gunY2 == enemyY))
    {
        score++;
        enemyX = ROW - 20;
        enemyY = rand() % COL;
    }
    if (enemyX == 20)
    {
        enemyX = ROW - 20;
        enemyY = rand() % COL;
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