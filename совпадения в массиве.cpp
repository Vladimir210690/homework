//Написать программу, которая находит в массиве
//значения, повторяющиеся два и более раз, и
//показывает их на экран.


#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); // Создаем точку отсчета для функции рандома
	setlocale(LC_ALL, "RU"); // Подключаю русскую локаль, чтобы не забыть как это делать

    const int SIZE = 10; // Создаю константный размер массива
    int arr[SIZE] = {}; // Создаю массив и инициальзирую нулями
    bool number = false; // Переменная отвечающая за наличие повторений впринципе
  
    for (int i = 0; i < SIZE; i++) { // Инициализирую массив рандомными цифрами от 0 до 9
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < SIZE ; i++) { // Пробегаюсь по заполненному массиву
        int count = 1;
        for (int j = i + 1; j < SIZE; j++) { // Сравниваю каждое значение разряда массива со всеми остальными
            if (arr[i] == arr[j]) {
                count++; // Если значения совпадают добавляю единицу к счетчику совпадений
            }
        }
        if (count >= 2) { // Если количество совпадших чисел в одной итерации первого цикла, больше или равно 2, то выводим текущее значение разряда
            number = true;
            cout << arr[i] << endl;
        }
    }
    if (number == false) {
        cout << "В массиве нет совпадающих значений" << endl;
    }

	return 0;
}
