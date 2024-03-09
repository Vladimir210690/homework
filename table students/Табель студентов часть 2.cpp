#include <iostream>

using namespace std;

struct students {
	int id, age, ball;
	string name, surname;
};

students Enter(students& people, int & id) { // Запись нового студента
	cout << "Enter name: ";
	cin >> people.name;
	cout << "Enter surname: ";
	cin >> people.surname;
	cout << "Enter age: ";
	cin >> people.age;
	cout << "Enter ball: ";
	cin >> people.ball;
	people.id = id;

	return people;
}

void Output(students idnumber[], const int SIZE) { // Вывод списка всех студентов
	for (int i = 0; i < SIZE; i++) {
		cout << idnumber[i].id << " Name: " << idnumber[i].name << " Surname: " << idnumber[i].surname << " Age: " << idnumber[i].age << " Ball: " << idnumber[i].ball << endl;
	}
}

int menu(int &select) { // Меню пользователя
	cout << "Select the desired action: " << endl;
	cout << "Creat student, Enter 1: " << endl;
	cout << "Delete student, Enter 2: " << endl;
	cout << "Show table students, Enter 3: " << endl;
	cout << "Find the student with the highest grade point average, Enter 4: " << endl;
	cout << "Exit, Enter 5: " << endl;
	cin >> select;

	return select;
}

int main() {
	setlocale(LC_ALL, "RU");
	const int SIZE = 10;
	int colpeople = 0, select = 0, id = 1; // Переменные для подсчета количества студентов, создания уникального номера и выбора позиции меню

	students people; // Создаем обьект "Студент"
	students idnumber[SIZE]{}; // Создаем массив обьектов типа "студент"

	do { // Создаем цикл пользования опциями меню, при том что 1 раз можно зайти обязательно, а дальше в зависимости от выбора
		system("cls");
		menu(select);
		switch (select) {
		case 1: // Опция добавления студентов
			system("cls");
			Enter(people,id);
			idnumber[colpeople] = people;
			colpeople++; // Увеличиваем номер ячейки для следующего студента
			id++; // Увеличиваем уникальный номер для следующего студента
			system("cls");
			cout << "Student is created! Number: " << people.id << endl;
			break;
		case 2: // Опция удаления студентов (пока нет)
			break;
		case 3: // Опция вывода списка студентов
			system("cls");
			Output(idnumber, SIZE);
			break;
		case 4: // Опция поиска студентов с высшим балом (пока нет)
			break;
		case 5: // Выход из меню и завершение программы (выходим из цикла)
			break;
		default: // Если выбран отсутствующий пункт меню
			cout << "Error! Enter menu posution: " << endl;
			break;		
		} 
		
		system("pause");
	} while (select != 5); // Условия выхода из цикла
	return 0;
}