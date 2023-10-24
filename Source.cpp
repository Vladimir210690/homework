/*Написать программу, реализующую процедуры заказа и
расчета его суммы в мини — пиццерии.В меню пиццерии
предусмотрено 4 вида пиццы и три вида напитков.

Пользователю выводится меню(вначале пиццы, потом
напитки), содержащее код и название.Пользователь вводит
код желаемого продукта, после чего вводит количество единиц
данного продукта.

В пиццерии предусмотрены два вида скидок :
■ если общая сумма заказа более 50$, то размер скидки составляет 20 % от суммы заказа;
■ каждая пятая пицца — в подарок;
■ для напитков с ценой более 2$, если количество в заказе более трех, то скидка 15 % (только на напитки, а не на
весь заказ).

Вывести пользователю чек для оплаты, в виде: название, количество, цена , итого к оплате*/

#include <iostream>

using namespace std;

int order1 = 0; // Создаем переменные для хранения кода заказа
int order2 = 0;
int order3 = 0;
int order4 = 0;
int order5 = 0;
int order6 = 0;
int order7 = 0;

int priceP = 6; // Присваиваем цену каждой пицце
int priceC = 7;
int priceV = 7;
int priceM = 8;

int priceCo = 2; // Присваиваем цену каждому напитку
int priceFa = 3;
int priceSp = 3;

int OrderPrice = 0; // Создаем переменные для хранения стоимости заказа
int PizzaPrice = 0;
int DrinckPrice = 0;
int couP = 0; // Общее количество пиццы
int couPD = 0;
int bonP = 0; // Количество бонусной пиццы

int colP = 0; // Создаем переменные для количества каждой позиции
int colC = 0;
int colV = 0;
int colM = 0;
int colCo = 0;
int colFa = 0;
int colSp = 0;

int code = 0; // Создаем переменную для выбора кода каждой позиции


void Menu()
{
	cout << "Pizza: " << endl;
	cout << "Pepperoni" << " code: " << 1 << " price: " << priceP << " $" << endl;
	cout << "Cheese" << " code: " << 2 << " price: " << priceC << " $" << endl;
	cout << "Veggie" << " code: " << 3 << " price: " << priceV << " $" << endl;
	cout << "Meat" << " code: " << 4 << " price: " << priceM << " $" << endl << endl;

	cout << "Drinks: " << endl;
	cout << "Cola" << " code: " << 5 << " price: " << priceCo << " $" << endl;
	cout << "Fanta" << " code: " << 6 << " price: " << priceFa << " $" << endl;
	cout << "Sprite" << " code: " << 7 << " price: " << priceSp << " $" << endl << endl;
}

void Input()
{
	while (code != 9)
	{
		cout << "Inpud code product:  or 9 to check: " << endl;
		cin >> code;

		switch (code)
		{
		case 1:
			cout << "Inpud count: " << endl;
			cin >> colP;
			order1 = code;
			break;
		case 2:
			cout << "Inpud count: " << endl;
			cin >> colC;
			order2 = code;
			break;
		case 3:
			cout << "Inpud count: " << endl;
			cin >> colV;
			order3 = code;
			break;
		case 4:
			cout << "Inpud count: " << endl;
			cin >> colM;
			order4 = code;
			break;
		case 5:
			cout << "Inpud count: " << endl;
			cin >> colCo;
			order5 = code;
			break;
		case 6:
			cout << "Inpud count: " << endl;
			cin >> colFa;
			order6 = code;
			break;
		case 7:
			cout << "Inpud count: " << endl;
			cin >> colSp;
			order7 = code;
			break;
		}
	}
}

void Check()
{
	if (order1 != 0)
	{
		cout << "You order Pizza: " << order1 << " Count: " << colP << " unit " << "Price: " << priceP * colP << " $" << endl;
	}
	if (order2 != 0)
	{
		cout << "You order Pizza: " << order2 << " Count: " << colC << " unit " << "Price: " << priceC * colC << " $" << endl;
	}
	if (order3 != 0)
	{
		cout << "You order Pizza: " << order3 << " Count: " << colV << " unit " << "Price: " << priceV * colV << " $" << endl;
	}
	if (order4 != 0)
	{
		cout << "You order Pizza: " << order4 << " Count: " << colM << " unit " << "Price: " << priceM * colM << " $" << endl;
	}
	if (order5 != 0)
	{
		cout << "You order Drink: " << order5 << " Count: " << colCo << " unit " << "Price: " << priceCo * colCo << " $" << endl;
	}
	if (order6 != 0)
	{
		cout << "You order Drink: " << order6 << " Count: " << colFa << " unit " << "Price: " << priceFa * colFa << " $" << endl;
	}
	if (order7 != 0)
	{
		cout << "You order Drink: " << order7 << " Count: " << colSp << " unit " << "Price: " << priceSp * colSp << " $" << endl;
	}
	
}

void Price()
{

	couP = colP + colC + colV + colM;
	bonP = couP / 5;

	if (couP > 4)
	{
		PizzaPrice = ((colP * priceP) + (colC * priceC) + (colV * priceV) + (colM * priceM)) - (bonP * 7);
		cout << "Pizza Price: " << PizzaPrice << " $" << endl;
	}
	else
	{
		PizzaPrice = (colP * priceP) + (colC * priceC) + (colV * priceV) + (colM * priceM);
		cout << "Pizza Price: " << PizzaPrice << " $" << endl;
	}

	if (colFa > 3)
	{
		DrinckPrice = (colCo * priceCo) + ((colFa * priceFa)*0.85) + (colSp * priceSp);
		cout << "Drinck Price: " << DrinckPrice << " $" << endl;
	}
	else if (colSp > 3)
	{
		DrinckPrice = (colCo * priceCo) + (colFa * priceFa) + ((colSp * priceSp) * 0.85);
		cout << "Drinck Price: " << DrinckPrice << " $" << endl;
	}
	else if (colSp > 3 && colFa > 3)
	{
		DrinckPrice = (colCo * priceCo) + ((colFa * priceFa)* 0.85) + ((colSp * priceSp) * 0.85);
		cout << "Drinck Price: " << DrinckPrice << " $" << endl;
	}
	else
	{
		DrinckPrice = (colCo * priceCo) + (colFa * priceFa) + (colSp * priceSp);
		cout << "Drinck Price: " << DrinckPrice << " $" << endl;
	}
	

	OrderPrice = PizzaPrice + DrinckPrice;

	if (OrderPrice > 50)
	{
		OrderPrice = OrderPrice * 0.8;
		cout << "Total price order = " << OrderPrice << " $" << endl;
	}
	else
	{
		cout << "Total price order = " << OrderPrice << " $" << endl;
	}

}

int main()
{
	setlocale(LC_ALL, "RUS");

	//Выводим собранные функции

	Menu();
	Input();
	Check();
	Price();

	return 0;
}