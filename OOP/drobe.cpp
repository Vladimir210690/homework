#include <iostream>

using namespace std;

class drobe { // Создаем клас дробь
private:
	int up; // Создаем поля - верх и низ
	int down;
public:
	drobe() { // Инициализируем поля в конструкторе и показываем что он сработал
		up = 0.0;
		down = 0.0;
		cout << "Constructor completed" << endl;
	}
	drobe(int a, int b) { // Инициализируем конструктор с принятыми значениями от пользователя 
		up = a;
		down = b;
		cout << "Constructor completed" << endl;
	}
	~drobe() { // Добавляем деструктор и показываю что он срабатывает
		cout << "Destructor completed" << endl;
	}
	drobe operator +(drobe& other) { // Перегрузка оператора сложения
		drobe time;
		time.up = this->up + other.up;
		time.down = this->down + other.down;
		return time;
	}
	drobe operator -(drobe& other) { // Перегрузка оператора вычитания
		drobe time;
		time.up = this->up - other.up;
		time.down = this->up - other.down;
		return time;
	}
	drobe operator *(drobe& other) { // Перегрузка оператора умножения
		drobe time;
		time.up = this->up * other.up;
		time.down = this->up * other.down;
		return time;
	}
	drobe operator /(drobe& other) { // Перегрузка оператора деление
		drobe time;
		time.up = this->up / other.up;
		time.down = this->up / other.down;
		return time;
	}

	int get_up() { // Геттер для поля верха
		return up;
	}
	int get_down() { // Геттер для поля низа
		return down;
	}
};

int main() {
	int a, b, select = 0, repeat = 0; // Создаем необходимые переменные
	
	do {
		cout << "Enter first number: "; // Запрашиваем данные для первого обьекта класса
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;

		drobe aa(a, b);
		cout << "Enter first number: "; // Запрашиваем данные для второго обьекта класса
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;
		drobe bb(a, b);
		drobe c; // Создаем третий обьект класса
		cout << "Select mode: 1: '+', 2: '-', 3: '*', 4: '/' "; // Запрашиваем тип операции с двумя обьектами класса - который будет пресвоен третьему
		cin >> select;

		switch (select) { // Меню действий с классами
		case 1:
			c = aa + bb; // Сложение 
			cout << "Up = " << c.get_up() << " Down = " << c.get_down() << endl;
			break;
		case 2:
			c = aa - bb; // Вычитание
			cout << "Up = " << c.get_up() << " Down = " << c.get_down() << endl;
			break;
		case 3:
			c = aa * bb; // Умножение
			cout << "Up = " << c.get_up() << " Down = " << c.get_down() << endl;
			break;
		case 4:
			c = aa / bb; // Деление
			cout << "Up = " << c.get_up() << " Down = " << c.get_down() << endl;
			break;
		}

		cout << "Repeat? 1 - yas, 0 - no: "; // Запрос на повторение операции
		cin >> repeat;
		system("cls");

	} while (repeat != 0);

	cout << "Programm completed" << endl;

	return 0;
}