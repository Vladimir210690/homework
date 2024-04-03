#include <iostream>
#include <math.h>

// Тут буду честен, никогда не слышал про комплексные числа и не понимаю с чем их едят
// Выдрал какой то код из интернета и основательно переделал по своему, хоть навык работы с чужим кодом качнул
// Было приятно осознавать что я знаю что делаю, и всё заработало. Только за правильность формул отвечать не могу

using namespace std;

class Complex
{
private:
	double real; // Действительная часть
	double image; // Мнимая часть
public:
	Complex() { // Конструкторы и деструктор
	
	};  
	Complex(double r, double i) { 
		real = r, image = i;
	} 
	~Complex() {
	} 
	void set_real(double r) { // Сеттеры для ввода чисел
		real = r;
	}
	void set_image(double i) { 
		image = i;
	}
	double get_real() { // Геттеры для вывода чисел
		return real;
	}
	double get_image() {
		return image;
	}
	double sq() { // Корень комплексного числа, без изятия корня
		double rt = real * real - image * image;
		return rt;
	}
	
	Complex operator+(Complex& set){ // Перегрузка +
		set.real = real + set.real;
		set.image = image + set.image;
		return set;
	}
	
	Complex operator-(Complex& set){ // Перегрузка -
		set.real = real - set.real;
		set.image = image - set.image;
		return set;
	}
	
	Complex operator*(Complex& set){ // Перегрузка *
		double i, j;
		i = real * set.real - image * set.image;
		j = real * set.image + set.real * image;
		set.real = i;
		set.image = j;
		return set;
	}

	Complex operator/(Complex& set){ // Перегрузка 
		double k, i, j;
		k = set.real * set.real + set.image * set.image;
		i = (real * set.real + image * set.image) / k;
		j = (set.real * image - real * set.image) / k;
		set.real = i;
		set.image = j;
		return set;
	}
};

int main(){

	double r, i; // Переменные для ввода

	cout << "Enter first complex number1: " << endl; // Запрашиваем и сохраняем первое число
	cout << "Real mode: ";
	cin >> r;
	cout << "Image mode: ";
	cin >> i;
	
	Complex c1;
	c1.set_real(r);
	c1.set_image(i);

	cout << "Enter first complex number2: " << endl; // Берем второе число
	cout << "Real mode: ";
	cin >> r;
	cout << "Image mode: ";
	cin >> i;

	Complex c2;
	c2.set_real(r);
	c2.set_image(i);
	
	cout << "SQRT c1: " << sqrt(c1.sq()) << endl; // Извлекаем корень из первого числа
	
	cout << "c1 + c2 = " << (c1 + c2).get_real() << " " << (c1 + c2).get_image() << endl; // Производим арифметические операции с выводом результата
	cout << "c1 - c2 = " << (c1 - c2).get_real() << " " << (c1 - c2).get_image() << endl;
	cout << "c1 * c2 = " << (c1 * c2).get_real() << " " << (c1 * c2).get_image() << endl;
	cout << "c1 / c2 = " << (c1 / c2).get_real() << " " << (c1 / c2).get_image() << endl;
	
	return 0;
}