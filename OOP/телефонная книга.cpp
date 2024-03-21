#include <iostream>
#include <vector> // Немного вник и решил использовать его для хранения обьектов телефонной книги, так удобнее

using namespace std;

class Book {
private:
	char* name = new char[20]; // Имя
	char* surname = new char[20]; // Фамилия
	char* endname = new char[20]; // Отчество
public:
	Book() {
		cout << "const completed: " << this << endl;
	}
	~Book() { // Удаляем динамические данные в деструкторе
		delete[] name;
		delete[] surname;
		delete[] endname;
		cout << "distr completed: " << this << endl;
	}
	void set_name(char name[]) { // Сеттер имени клиенета
		this->name = name;
	}
	void set_surname(char surname[]) { // Сеттер фамилии клиента
		this->surname = surname;
	}
	void set_endname(char endname[]) { // Сеттер отчества клиента
		this->endname = endname;
	}
	char * get_name() { // Геттер имени клиента
		return name;
	}
	char* get_surname() { // Геттер фамилии клиента
		return surname;
	}
	char* get_endname() { // Геттер отчества клиента
		return endname;
	}
	void read_table(vector <Book> read) { // Метод вывода списка клиентов
		for (int i = 0; i < read.size(); i++) {
			cout << read[i].get_name() << " " << read[i].get_surname() << " " << read[i].get_endname() << endl;
		}
	}
	int menu(int &select) { // Метод выбора пункта меню
		cout << "Select option: " << endl;
		cout << "Enter 1 for creat item " << endl;
		cout << "Enter 2 for delite item " << endl;
		cout << "Enter 3 for serch item " << endl;
		cout << "Enter 4 for show all item " << endl;
		cin >> select;
		return select;
	}
};

int main() {
	char name[20](" "); // Массивы для сохранения введенных данных клиентом
	char surname[20](" ");
	char endname[20](" ");
	int select = 0;
	
	Book book; // Создаем обьект нового клиента
	vector <Book> table; // Создаем вектор для хранения обьектов клиентов
	cout << "Enter name: "; // Запрашиваем данные от пользователя
	cin >> name;
	book.set_name(name); // Заносим данные от пользователя в класс через сеттеры
	cout << "Enter surname: ";
	cin >> surname;
	book.set_surname(surname);
	cout << "Enter endname: ";
	cin >> endname;
	book.set_endname(endname);
	
	table.push_back(book); // Заносим готовый обьект в вектор пользователей телефонной книги
	
	book.read_table(table); // Считываем обьекты клиентов с помощью готового метода класса

	return 0;
}