#include <iostream>

using namespace std;

class Student { // Создаем класс студента с приватными полями
private:
	friend class Course; // Делаем класс курс дружественным
	int group;
	string name;
public:
	Student(string name, int group) { // Создаем конструктор класса для студента
		this->name = name;
		this->group = group;
	}
};

class Teacher { // Создаем класс учиталь с приватными полями
private:
	int age;
	string name;
	friend class Course; // Делаем класс курс дружественным
public:
	Teacher(string name, int age) { // Создаем конструктор класса для преподавателя
		this->name = name;
		this->age = age;
	}
};

class Course {
public:
	string name;
	int rang;
	Course(int rang, string name) { // Создаем конструктор класса для курса
		this->name = name;
		this->rang = rang;
	}
	void ShowStudents(const Student& stud) { // Создаем метод просмотра полей у студента
		cout << "Group: " << stud.group << endl;
		cout << "Name: " << stud.name << endl;
		cout << endl;
	}
	void ShowTeacher(const Teacher& teach) { // Создаем метод просмотра полей у преподавателя
		cout << "Name: " << teach.name << endl;
		cout << "Age: " << teach.age << endl;
		cout << endl;
	}
};

int main() {
	Student stud("Pavel",1); // Создаем обьекты классов
	Teacher teach("Nicolay", 56);
	Course director(10,"Vladimir Vladimirovich");

	director.ShowStudents(stud);
	director.ShowTeacher(teach);

	return 0;
}