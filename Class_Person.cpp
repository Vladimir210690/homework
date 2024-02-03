#include <iostream>
#include <string>

using namespace std;

class Person { // Создаем указанный класс
private: // В приват заносим поля класса
	int age;
	string name;
public: // В паблике пишем геттеры и сеттеры для взаимодействия с полями класса
	void setAge(int result) { // Принимаем из вне возраст поля обьекта
		age = result;
	}
	void setName(string title) { // Принимаем из вне имя поля обьекта
		name = title;
	}
	int getAge() { // получаем из приватной области значения переменной возраста для текущего обьекта
		return age;
	}
	string getName() { // получаем из приватной области значения переменной имя для текущего обьекта
		return name;
	}
};


int main() {

	Person Date; // Создаем обьект класса
	int number = 0; // Создаем переменную для получения данных о возрасте
	string name; // Создаем переменную для получения данных о имени
	cout << "Enter you age: "; // Запрашиваем в консоли нужные данные
	cin >> number;
	cout << "Enter you name: ";
	cin >> name;
	system("cls"); // Очищаем консоль от введенных данных
	Date.setAge(number); // Загружаем введенные данные в поля обьекта класса
	Date.setName(name);
	cout << "You age: " << Date.getAge() << "\t" << "You name: " << Date.getName(); // Выводим данные из полей обьекта класса

	return 0;
}