#include <iostream>

using namespace std;

class Array {
private:
	int size;
	int* data;
public:
	Array() { // Запрашиваем длину массива в конструкторе и выделяем динамическую память под указанную длину
		cout << "Enter size array: ";
		cin >> size;
		data = new int[size](); // Инициализируем выделенную память нулями
	}
	Array(Array& object) { // Конструктор копирования
		this->data = object.data;
		this->size = object.size;
	}
	~Array() { // Очищаем выделенную динамическую память
		delete[] data;
	}
	void input_int() { // Инициализируем массив
		cout << "Enter data: " << endl;
		for (int i = 0; i < size; i++) {
			cin >> data[i];
		}
	}
	void output_int() { // Выводим содержание массива
		cout << "Data array: ";
		for (int i = 0; i < size; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
	int* overwriting(int new_size) { // С огромным трудом, ошибками в коде и танцами с бубном добавлена опция - изменять размер и наполнение массива
		int* data2 = new int[new_size](); // Создаем временный массив с новым заданным размером
		if (new_size < size) { // Если новый размер меньше старого
			for (int i = 0; i < new_size; i++) {
				data2[i] = data[i]; // Копируем старый массив в новый
			}
			size = new_size; // Задаем новый размер нового масива
			delete[] data; // Удаляем старый массив
			data = new int[new_size]; // Создаем старый массив с новым размером
			for (int i = 0; i < size; i++) {
				data[i] = data2[i]; // Копируем данные из временного массива в новый
			}
			delete[] data2; // Удаляем временный массив
		}
		else {
			for (int i = 0; i < new_size; i++) { // Если новый размер больше старого
				data2[i] = 0; // Набиваем временный массив нулями
			}
			for (int i = 0; i < size; i++) {
				data2[i] = data[i]; // Копируем старый массив в новый
			}
			delete[] data; // Удаляем старый массив
			data = new int[new_size]; // Создаем старый массив с новым размером
			for (int i = 0; i < new_size; i++) { // Дополняем временный массив новыми данными в нулевые ячейки
				if (data2[i] == 0 && i >= size) { // Если по номеру текущей ячейки лежит 0 и номер доступной ячейки больше чем был прошлый размер массива
					cout << "Data array number: " << i + 1 << " "; // Запрашиваем новые данные в нулевую ячейка
					cin >> data2[i];
				}
				data[i] = data2[i]; // Копируем данные из временного массива в новый
			}
			delete[] data2; // Удаляем временный массив
			size = new_size; // Сохраняем новый размер массива
		}
	    return data; // Возвращаем указатель на новый массив
	}
	void swap_array() { // Метод сортировки массива от меньшего к большему
		bool flag = true; // Создаем булевый флажок чтобы завершить сортировку если масив отсортирован
		while(flag != false){ 
			flag = false; // Опускаем флаг, как будто сортировка закончена
			for (int j = 0; j < size - 1; j++) {
				if (data[j] > data[j + 1]) { 
					swap(data[j], data[j + 1]); // Если следующая позиция массива меньше предыдущей - меняем их местами
					flag = true; // Поднимаем флаг, если условие соблюдено хоть раз
				}	
			}
		}
	}
	int show_max_item() { // С помощью нехитрых действий, находим максимальное значение в массиве
		int max = 0;
		max = data[0];
		for (int i = 0; i < size; i++) {
			if (data[i] > max) {
				max = data[i];
			}
		}
		return max;
	}
	int show_min_item() { // То-же только наоборот, ищем минимальное значение
		int min = 0;
		min = data[0];
		for (int i = 0; i < size; i++) {
			if (data[i] < min) {
				min = data[i];
			}
		}
		return min;
	}
};

int main() {
	int new_size = 0, select = 0, repeat = 0; // Переменные новой длины массива, выбора опции и нового цикла

	do {
		system("cls"); // Обновляем консоль чтобы её не засорять старыми данными
		Array arr;
		arr.input_int(); // Заполняем массив от пользователя
		arr.output_int(); // Выводим заполненный массив
		cout << "Select data: 1 - sort array, 2 - overwriting array, 3 - show min item array, 4 - show max item array: ";
		cin >> select;

		switch (select)
		{
		case 1:
			arr.swap_array(); // Сортируем массив по возрастанию
			arr.output_int(); // Выводим массив
			break;
		case 2:
			cout << "Enter new size array: ";
			cin >> new_size; // Запрашиваем новый размер массива от пользователя
			arr.overwriting(new_size); // Изменяем размер массива и дополняем данными при необходимости
			arr.output_int(); // Выводим массив
			break;
		case 3:
			cout << "Data min item array = " << arr.show_min_item() << endl; // Показываем минимальное значение
			break;
		case 4:
			cout << "Data max item array = " << arr.show_max_item() << endl; // Показываем максимальное значение
			break;
		default:
			cout << "Error! Select correct item menu: "; // Ошибка если выбран неправильный пункт меню
			break;
		}

		cout << "Repeat? 1 - yas, 0 - no: ";
		cin >> repeat; // Запрашиваем желание новой операции от пользователя

	} while (repeat != 0);
	
	cout << "Programm completed!" << endl;
	
	return 0;
}