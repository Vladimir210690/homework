#include <iostream>

using namespace std;

struct students {
	int id, age, ball;
	string name, surname;
};

students Enter(students& people) { // Запись нового студента
	cout << "Enter name: ";
	cin >> people.name;
	cout << "Enter surname: ";
	cin >> people.surname;
	cout << "Enter age: ";
	cin >> people.age;
	cout << "Enter ball: ";
	cin >> people.ball;
	int id = 1;
	people.id = id;
	id++;

	return people;
}

void Output(students idnumber[], const int SIZE) { // Вывод списка всех студентов
	for (int i = 0; i < SIZE; i++) {
		cout << idnumber[i].id << " Name: " << idnumber[i].name << " Surname: " << idnumber[i].surname << " Age: " << idnumber[i].age << " Ball: " << idnumber[i].ball << endl;
	}
}

int main() {
	setlocale(LC_ALL, "RU");
	const int SIZE = 10;
	int colpeople = 0;

	students people;
	students idnumber[SIZE]{};

	Enter(people);
	idnumber[colpeople] = people;

	Output(idnumber, SIZE);

	return 0;
}