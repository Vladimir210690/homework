#include <iostream>

using namespace std;

class Rectangle {
private:
	int length = 0;
	int width = 0;
public:
	Rectangle() { // Создаем 2 конструктора, по умолчанию он будет вызывать просто текст
		cout << "Compieted" << endl;
	}
	Rectangle(int length, int width) { // Второй конструктор будет принимать данные для вывода в консоль
		this->length = length;
		this->width = width;
		cout << "length = " << length << "\t" << "width = " << width << endl;
	}
};

int main() {
	Rectangle First(45,12); // Создаем 2 обьекта, в зависимости от наличия переданных значений - срабатывает один из конструкторов
	Rectangle Second;

	return 0;
}