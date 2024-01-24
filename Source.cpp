#include <iostream>
#include <string>

using namespace std;
struct Nota {
	int age;
	string name;
	Nota* next;
};
struct Head {
	int size;
	Nota* first;
};



void push_front(Head* a) {
	int b = 0;
	string name;
	cout << "Enter you name: ";
	cin >> name;
	cout << "Enter you age: ";
	cin >> b;
		

	Nota* pntr = new Nota;
	pntr->age = b;
	pntr->name = name;
	pntr->next = a->first;
	a->first = pntr;
	a->size++;
}

void print(Head* a) {
	Nota* note = a->first;
	while (note != nullptr) {
		cout << note->name << "\t" << note->age << endl;
		note = note->next;
	}
}

int main() {
	Head list;
	list.size = 0;
	list.first = nullptr;
	int run = 5;
	for (int i = 0; i < run; i++) {
		push_front(&list);
	}

	print(&list);
	return 0;
}