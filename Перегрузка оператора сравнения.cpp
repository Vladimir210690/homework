#include <iostream>
#include <string>

using namespace std;

class Book { // Создаем класс Книга
private:
	string title; // Создаем поле класса Книга - название
public:
	Book(string title) { // Создаем конструктор класса, принимающий название книги
		this->title = title;
	}
	bool operator == (Book & object) { // Перегружаем оператор сравнения для сравнения двух обьектов классов
		if (this->title == object.title) {
			return true;
		}
		else {
			return false;
		}
	}
};


int main() {

	Book History("King"); // Создаем первый обьект класса
	Book Math("Kings"); // Создаем второй обьект класса

	bool yas = History == Math;  // Создаем булевую переменную для сравнения двух обьектов класса и сразу производим сравнение
	
	cout << yas; // Выводим результат сравнения обьектов. в данном примере обьекты не равны по названию

	return 0;
}