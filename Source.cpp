#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	char name1 = 'o'; // Имя первого игрока
	char name2 = 'o'; // Имя второго игрока

	int a = 0; // Значение хода первого игрока
	int b = 0; // Значение хода второго игрока

	int c = 0; // Счет первого игрока
	int d = 0; // Счет второго игрока

	int e = 0;
	int j = 0;

	cout << "Игра рандом. Каждый игрок по очереди генерирует собственное число от 0 до 10.\n";
	cout << "Побеждает тот, чье число окажется больше. Победителю присваивается одно очко, игра до 10 очков\n\n";

	cout << "Первый игрок, введите свое имя: " << endl;
	cin >> name1;
	cout << "Второй игрок, введите свое имя: " << endl;
	cin >> name2;

	cout << "Игра начинается: " << endl << endl;

	while ((c != 3) && (d != 3))
	{
		cout << "Игрок " << name1 << " Нажмите 0 и Enter" << endl;
		cin >> e;
		a = rand() % 100;
		cout << "Ваше число: " << a << endl;

		cout << "Игрок_ " << name2 << " Нажмите 0 и Enter" << endl;
		cin >> j;
		b = rand() % 100;
		cout << "Ваше число: " << b << endl;

		if (a > b)
		{
			c++;
		}
		else if (a == b)
		{
			cout << "В этом туре ничья, играем дальше:\n";
		}

		else
		{
			d++;
		}

		cout << "Счет: " << c << "/" << d << endl;
	}

	cout << "Общий счет: " << endl << "Игрок " << name1 << ": " << c << endl << "Игрок " << name2 << ": " << d << endl;

	if (c > d)
	{
		cout << "Победил игрок: " << name1 << endl;
	}
	else
	{
		cout << "Победил игрок: " << name2 << endl;
	}
	return 0;
}