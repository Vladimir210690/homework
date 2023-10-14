#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	const int PRICE = 3; // Стомость литра воды
	int water = 0; // Количество воды
	int Qwater = 0; // Стоимость воды
	int price = 0; // Внесенные средства за воду
	int start = 0; // Наличие или отсутствие оплаты
	

	while (true)
	{
		cout << "Стоимость литра воды 3 рубля." << endl << endl;
		cout << "Введите желаемое количество воды: ";
		cin >> water;
		Qwater = PRICE * water;
		cout << "Стоимость указанного количества воды равна: " << Qwater << " рублей.\n";
		cout << "Внесите стоимость указанного количествф воды: ";
		cin >> price;

		cout << "\nКоличество воды: " << water << " литров." << endl;
		cout << "Внесено средств: " << Qwater << " рублей." << endl;

		cout << "\nНажмите кнопку старт: (Нажмите любую цифру) ";
		cin >> start;

		if (Qwater <= price)
		{
			cout << 1 << " Вода пошла.\n";
			cout << 2 << " Вода налита, цикл завершен.\n";
		}
		else
		{
			cout << 0 << " Ошибка, недостаточно средств.\n\n";
		}

	}
	return 0;
}