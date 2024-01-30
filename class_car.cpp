#include <iostream>

using namespace std;

class Vehicle { // Создаю класс - транспортных средств
private: // Закинул в приват поля класа, так как они используются через методы
	string model = "nullname";  // Поле отвечает за название транспортного средства, по умолчанию присваиваю никакое название
	int year = 0; // Поле отвечает за год выпуска
public:
	void getYear() { // Метод отвечает за ввод пользователем года выпуска
		cout << "Enter year car: ";
		cin >> year;
	}

	void PrintModel() { // Метод отвечает за ввод пользователем названия
		cout << "Enter name model car: ";
		cin >> model;
	}

	void startEngine() { // Метод отвечает за запуск устройства и за вывод данных
		if (year > 1900 && model != "nullname") { // Небольшое условие для разнообразия, т.е год не может быть моложе 1990 и название должно быть
			cout << "Start Engine" << endl;
			cout << model << "\t" << year;
		}
		else {
			cout << "Error data";
		}
	}
};

class Car : public Vehicle { // Класс Машина с унаследованным классом транспортных средств
	
};

class Motorcycle : public Vehicle { // Класс мотоциклы с унаследованным классом транспортных средств (его не использую)
	
};


int main() { // Для примера создал обьект класса - машны и вызвал его методы
	Car Ferrary;
	Ferrary.PrintModel();
	Ferrary.getYear();
	system("cls"); // Это для красоты, т.е убираю введенные данные и оставляю выведенные
	Ferrary.startEngine();

	return 0;
}