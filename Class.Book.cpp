#include <iostream>

using namespace std;

class Book {
private:
	string title;
	string autor;
public:
	Book(){ // Создаем конструктор класса и присваиваем полям значения по умолчанию
		title = "Название";
		autor = "Автор";
		cout << title << "\t"<< autor;
		cout << endl;
	}
	~Book() { // Создаем деструктор класса и выводим сообщения для проверки его работоспособности
		cout << "Деструктор сработал";
	}
};

int main() {
	setlocale(LC_ALL, "Ru");
	Book Read;
	return 0;
}