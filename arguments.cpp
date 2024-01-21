#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int sum = 0; // Переменная для сложения аргументов
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
		sum += strtol(argv[i], NULL, 10); // Нашел функцию преобразования из чаровского символа в интовый, а дальше дело техники
	}
	
	cout << endl;
	cout << "Summa arguments = " << sum;
	return 0;
}