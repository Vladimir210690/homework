#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	const int DATA = 10;
	int age[DATA];
	char name[DATA];

	cout << "Введите ваше имя: " << endl;
	cin >> name;

	for (int c = 0; c < DATA; c++)
	{
		switch (c)
		{
		case 0:
			cout << "Сколько вам лет? " << endl;
			cin >> age[c];
			break;
		case 1:
			cout << "Какой ваш рост в сантиметрах? " << endl;
			cin >> age[c];
			break;
		case 2:
			cout << "Какой ваш вес в килограммах? " << endl;
			cin >> age[c];
			break;
		case 3:
			cout << "Какой ваш заработок в рублях? " << endl;
			cin >> age[c];
			break;
		case 4:
			cout << "Сколько лет работаете в вашей профессии? " << endl;
			cin >> age[c];
			break;
		}
	}
	cout << "Анкетные данные собраны: " << endl << endl;

	cout << "Имя исследуемого: " << name << endl;
	cout << "Возраст исследуемого: " << age[0] << " лет" << endl;
	cout << "Рост исследуемого: " << age[1] << " см" << endl;
	cout << "Вес исследуемого: " << age[2] << " кг" << endl;
	cout << "Заработок исследуемого: " << age[3] << " руб" << endl;
	cout << "Стаж работы исследуемого: " << age[4] << " лет" << endl;

	return 0;
}