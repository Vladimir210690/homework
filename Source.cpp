#include <iostream>

using namespace std;

float SUM(float a, float b)
{
	return a + b;
} 
float SUB(float a, float b)
{
	return a - b;
}
float MUL(float a, float b)
{
	return a * b;
}
float DIV(float a, float b)
{
	if (b == 0)
	{
		cout << "ќшибка, нельз€ делить на 0 " << endl;
	}
	else
		return a / b;
}


int main()
{
	setlocale(LC_ALL, "RU");

	float a = 0;
	float b = 0;
	char c = 'y';

	while (c != 'o')
	{
		cout << "”кажите действие: '+', '-','*','/' и нажмите ввод: " << endl;
		cin >> c;

		if (c == 'o')
		{
			break;
		}
		else
		{
			cout << "¬ведите первое число: " << endl;
			cin >> a;
			cout << "¬ведите второе число: " << endl;
			cin >> b;
		}
		switch (c)
		{
		case 'o':
			break;
		case '+':
			cout << SUM(a, b) << endl;
			break;
		case '-':
			cout << SUB(a, b) << endl;
			break;
		case '*':
			cout << MUL(a, b) << endl;
			break;
		case '/':
			cout << DIV(a, b) << endl;
			break;
		}

	} 

	cout << "—умма чисел равна: " << SUM(a, b) << endl;

	return 0;
}