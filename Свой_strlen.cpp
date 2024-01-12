#include <iostream>

using namespace std;

int STRlEN(char* str) {
	int count = 0; 
	for (;; count++) {
		if (str[count] == '\0')
			break;
	}
	return count;
}

int main() {
	setlocale(LC_ALL, "Russian");

	char* brr = new char[100];

	cout << "Напишите какое-нибудь слово: ";
	cin >> brr;

	cout << "Количество символов в слове: ";
	cout << STRlEN(brr);
	
	return 0;
}