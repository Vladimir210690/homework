#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Pin { // Класс точка, хранящий координаты точки в трехмерной системе координат
private:
    int x = 0;
    int y = 0;
    int z = 0;
public:
    Pin() { // Конструктор класса точка
        cout << "const completed " << this << endl;
    }
    ~Pin() { // Деструктор класса точка
        cout << "dist completed " << this << endl;
    }
    void set_x(int x) { // Сеттеры каждой оси координаты
        this->x = x;
    }
    void set_y(int y) {
        this->y = y;
    }
    void set_z(int z) {
        this->z = z;
    }
    int get_x() { // Геттеры каждой оси координаты
        return x;
    }
    int get_y() {
        return y;
    }
    int get_z() {
        return z;
    }
};

int main() {
    int x, y, z;
    string text; // Переменная для сохранения текста из файла
    Pin pin; // Обьект класса точка
    ofstream go; // Обьект для сохранения записи в файл
    go.open("txst.txt", iostream::app); // Открываем файл и добавляем данные

    cout << "Enter coordinate pin: " << endl; // Запрашиваем координаты от пользователя и сохраняем в файл
    cout << "Enter x: ";
    cin >> x;
    pin.set_x(x);
    cout << "Enter y: ";
    cin >> y;
    pin.set_y(y);
    cout << "Enter z: ";
    cin >> z;
    pin.set_z(z);

    cout << "You data " << endl;
    cout << "x = " << pin.get_x() << " y = " << pin.get_y() << " z = " << pin.get_z() << endl;
    go << "x = " << pin.get_x() << " y = " << pin.get_y() << " z = " << pin.get_z() << endl;

    go.close(); // Закрываем файл
    cout << endl;

    cout << "Read file: " << endl; // Читаем файл
    ifstream read; // Обьект для чтения из файла
    read.open("txst.txt"); // Открываем файл
    while (getline(read, text)) { // Пока в файле есть записи, считываем их в переменную
        cout << text << endl; // Выводим переменную
    }
    read.close(); // Закрываем файл

    return 0;
}