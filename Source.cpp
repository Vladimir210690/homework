#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct NODE { // ������� ������ ������
	int number;
	string name;
	NODE* next;
};

struct List { // �o����� ������ ������
	int col;
	NODE* first;
};

void push_beak(List* lst, int col) { // ������� ���������� ����� ��������� � ������
	string go;
	NODE* node = new NODE;
	node->number = col;
	cin >> go;
	node->name = go;
	node->next = lst->first;
	lst->first = node;
	lst->col++;
}

void print(List* lst) { // ������� ������ �����
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