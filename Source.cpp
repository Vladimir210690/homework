#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct NODE { // Создаем ячейку списка
	int number;
	string name;
	NODE* next;
};

struct List { // Создаем голову списка
	int col;
	NODE* first;
};

void push_beak(List* lst, int col) { // Создаем функцию добавления новой ячейки
	string go;
	NODE* node = new NODE;
	node->number = col;
	cin >> go;
	node->name = go;
	node->next = lst->first;
	lst->first = node;
	lst->col++;
}

void print(List* lst) { // Создаем функцию вывода всех ячеек списка
	NODE* node = lst->first;
	while (node != nullptr) {
		cout << node->number << "\t" << node->name << endl;
		node = node->next;
	}

}

int main() {
	srand(time(NULL));

	int run = 5;
	List head;
	head.col = 0;
	head.first = nullptr;

	for (int i = 0; i < run; i++) {
		push_beak(&head, rand() % 100);
		
	}

	print(&head);
	

	return 0;
}
