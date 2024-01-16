#include <iostream>
#include <string>

using namespace std;

struct VDMarket {
	string title;
	string director;
	string genre;
	int price;
};

int main() {
	// Локаль убрал, можно вводить по русски
	const int SIZE = 3; // Количество фильмов в массиве
    VDMarket Film[SIZE]; // Массив фильмов

	int menu = 0; // Переменная выбора действия - использовать фильтр или посмотреть всю базу фильмов
	string title2; // Переменная фильтр, принимает название фильма для сравнение с базой
	
	for (int i = 0; i < SIZE; i++) { // Самостоятельно заносим данные о фильмах, так удобнее
		cout << "Enter title film: ";
		cin >> Film[i].title;
		cout << "Enter director film: ";
		cin >> Film[i].director;
		cout << "Enter genre film: ";
		cin >> Film[i].genre;
		cout << "Enter price film: ";
		cin >> Film[i].price;
		system("cls");
	}
	cout << endl;

	cout << "Input menu: Do you wich all data or using filter: 0 - all data, 1 - filter?"; // Написал используя свои знания английского, думаю вы поняли что тут
	cin >> menu; // Меню для пользователя - можно посмотреть все списки или воспользоваться фильтром

	switch (menu) { // Проверяем что ввел пользхователь, по сути дела всё кроме 1 показывает весь список
	case 0:
		break;
	case 1:
		cout << "Enter do you search film: ";
		cin >> title2;
	default:
		break;
	}

	cout << endl;

	if (menu == 1) { // Если пользователь ввел 1, ищем позицию нужного фильма, сравнивая названия
		cout << "ID\t" << "Title\t" << "Director\t" << "Genre\t" << "Price" << endl; // Добавил шапку для красоты, правда выходит криво. Зависит от длинны позиций
		for (int i = 0; i < SIZE; i++) {
			if (Film[i].title == title2) {
				cout << i + 1 << "\t" << Film[i].title << "\t" << Film[i].director << "\t" << Film[i].genre << "\t" << Film[i].price << endl;
			}
		}
	}
	else { // Иначе выводим все
		cout << "ID\t" << "Title\t" << "Director\t" << "Genre\t" << "Price" << endl; // Таже шапка, тот же принцип
		for (int i = 0; i < SIZE; i++) {
			cout << i + 1 << "\t" << Film[i].title << "\t" << Film[i].director << "\t" << Film[i].genre << "\t" << Film[i].price << endl;
		}
	}
	return 0;
}