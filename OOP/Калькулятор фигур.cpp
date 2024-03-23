#include <iostream>
#include <cmath> // Решил использовать готовые формулы, но очень долго не мог написать их правильно из за мелкой ошибки

using namespace std;

class triangle {  // Класс треугольник
private:
	double side1 = 0.0; // Первая сторона
	double side2 = 0.0; // Вторая сторона
	double side3 = 0.0; // Третья сторона
public:
	triangle() { // Конструктор
	}
	~triangle() { // Деструктор
		cout << "Программа завершена!" << endl;
	}
	void set_side1(double &a) { // Сеттеры для значений длинн сторон
		this->side1 = a;
	}
	void set_side2(double &b) {
		this->side2 = b;
	}
	void set_side3(double &c) {
		this->side3 = c;
	}
	int get_side1() { // Геттеры для значений длинн сторон
		return side1;
	}
	int get_side2() {
		return side2;
	}
	int get_side3() {
		return side3;
	}
	double half_meter() { // Метод рассчета полупериметра
		double half_meter = (side1 + side2 + side3) / 2;
		return half_meter;
	}
	void enter_data(double& a, double& b, double& c) { // Меню запроса данных у пользователя
		cout << "Введите длину первой стороны в см: " << endl;
		cin >> a;
		set_side1(a);
		cout << "Введите длину второй стороны в см: " << endl;
		cin >> b;
		set_side2(b);
		cout << "Введите длину третьей стороны в см: " << endl;
		cin >> c;
		set_side3(c);
	}
	double calculation(double& half) { // Метод рассчета площади треугольника по 3 сторонам
		double result = sqrt(half * (half - side1) * (half - side2) * (half - side3));
		return result;
	}
};

class rhomb { // Класс ромб
private:
	double side11 = 0.0; // Диагонали внутри ромба от одного угла к другому
	double side22 = 0.0;
public:
	rhomb() { // Также пустой конструктор
	}
	~rhomb() { // Деструктор
		cout << "Программа завершена!" << endl;
	}
	void set_side11(double& d) { // Сеттеры 
		this->side11 = d;
	}
	void set_side22(double& e) {
		this->side22 = e;
	}
	double get_side11() { // Геттеры
		return side11;
	}
	double get_side22() {
		return side22;
	}
	void enter_data(double& d, double& e) { // Метод взятия данных от пользователя и записи в поля класса
		cout << "Введите первую диагональ ромба в см: " << endl;
		cin >> d;
		set_side11(d);
		cout << "Введите вторую диагональ ромба в см: " << endl;
		cin >> e;
		set_side22(e);
	}
	double calculation1() { // Метод рассчета площади ромба по 2 диагоналям
		double result = 0.5 * side11 * side22;
		return result;
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	double a, b, c, d, e; // Переменные для взятия размеров фигур от пользователя
	double half; // Переменная для сохранения полупериметра треугольника
	int select, repeat = 0; // Переменные выбора операции и новой операции
	triangle tr; // Обьект треугольника
	rhomb rb; // Обьект ромба

	do {
		system("cls");
		cout << "Какое действие желаете провести? 1 - вычислить площадь треугольника, 2 - вычислить площадь ромба: ";
		cin >> select; // Запрос выбора действия

		switch (select) {  
		case 1:
			cout << "Рассчет площади треугольника по 3 сторонам: " << endl; // Рассчет площади треугольника по 3 сторонам
			tr.enter_data(a, b, c);
			half = tr.half_meter();
			cout << "Площадь треугольника равна: " << tr.calculation(half) << endl << endl;
			break;
		case 2:
			cout << "Рассчет площади ромба по двум диагоналям: " << endl; // Рассчет площади ромба по 2 диагоналям
			rb.enter_data(d, e);
			cout << "Площадь ромба равна: " << rb.calculation1() << endl;
			break;
		default:
			break;
		}
		cout << "Еще раз? 1 - да, 0 - нет: ";
		cin >> repeat; // Запрос на новую операцию или выход

	} while (repeat != 0);
	return 0;
}