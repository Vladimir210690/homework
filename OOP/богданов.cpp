#include <iostream>

using namespace std;

class Drobe {
private:
	double one = 0.0;
	double two = 0.0;
public:
	void setChisl(double a) {
		one = a;
	}
	void setZnam(double b) {
		two = b;
	}
	double sum() {
		double sum = one + two;
		return sum;
	}
	double min() {
		double min = one - two;
		return min;
	}
	double mnog() {
		double mnog = one * two;
		return mnog;
	}
	double del() {
		if (two == 0) {
			cout << "Error:" << endl;
		}
		else {
			double del = one / two;
			return del;
		}
	}
};

int main() {
	int select = 0;
	double a, b;
	Drobe number;

	do {
		cout << "Enter first number: ";
		cin >> a;
		number.setChisl(a);
		cout << "Enter operation: 1 - sum, 2 - min, 3 - mnog, 4 - del, 0 - stop: ";
		cin >> select;
		cout << "Enter second number: ";
		cin >> b;
		number.setZnam(b);

		switch (select) {
		case 1:
			cout << number.sum() << endl;
			break;
		case 2:
			cout << number.min() << endl;
			break;
		case 3:
			cout << number.mnog() << endl;
			break;
		case 4:
			cout << number.del() << endl;
			break;
		default:
			cout << "Enter correct number menu: ";
			break;
		}

		cout << "Exit? Enter - 0, Repeat - somesing number: ";
		cin >> select;
		system("cls");
	} while (select != 0);

	return 0;
}