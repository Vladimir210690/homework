#include <iostream>
#include <vector> // Решил потренироваться на нем для более удобного сохранения в массив

using namespace std;

class Book {
private:
	string name = " "; // Имя
	string surname = " "; // Фамилия
	string endname = " "; // Отчество
	string phone = " "; // Телефон
	string jobphone = " "; // Рабочий телефон
	string mobile = " "; // Мобильный телефон
public:
	Book() { // Конструктор
		cout << "constructor completed " << this << endl;
	}
	~Book() { // Деструктор
		cout << "destructor completed " << this << endl;
	}
	void set_name(string name) { // Сеттеры
		this->name = name;
	}
	void set_surname(string surname) {
		this->surname = surname;
	}
	void set_endname(string endname) {
		this->endname = endname;
	}
	void set_phone(string phone) {
		this->phone = phone;
	}
	void set_jobphone(string jobphone) {
		this->jobphone = jobphone;
	}
	void set_mobile(string mobile) {
		this->mobile = mobile;
	}
	string get_name() { // Геттеры
		return name;
	}
	string get_surname() {
		return surname;
	}
	string get_endname() {
		return endname;
	}
	string get_phone() {
		return phone;
	}
	string get_jobphone() {
		return jobphone;
	}
	string get_mobile() {
		return mobile;
	}
	void list_book(vector <Book> table) { // Метод вывода информации из вектора
		for (int i = 0; i < table.size(); i++) {
			cout << table[i].name << " " << table[i].surname << " " << table[i].endname << " " << table[i].phone << " " << table[i].jobphone << " " << table[i].mobile << endl;
		}
	}
};

int main() {
	
	int select = 0;
	string name, surname, endname, phone, jobphone, mobile; // Переменные для взятия информации от пользователя
	
	vector <Book> table; // Вектор записей

	do { 
		system("cls");
		Book book; // Создание обьекта записи

		cout << "Enter name: "; // Запрос, взятие и сохранение информации от клиента
		cin >> name;
		book.set_name(name);
		cout << "Enter surname: ";
		cin >> surname;
		book.set_surname(surname);
		cout << "Enter endname: ";
		cin >> endname;
		book.set_endname(endname);
		cout << "Enter phone: ";
		cin >> phone;
		book.set_phone(phone);
		cout << "Enter jobphone: ";
		cin >> jobphone;
		book.set_jobphone(jobphone);
		cout << "Enter mobile: ";
		cin >> mobile;
		book.set_mobile(mobile);
	
		table.push_back(book); // Добавление заполненного обьекта в вектор
		book.list_book(table); // Вывод всех обьектов из вектора
	
		cout << "Repeat? 1 - Yas 0 - No: "; // Запрос на продолжение или выход
		cin >> select;
		
	} while (select != 0);

	return 0;
}