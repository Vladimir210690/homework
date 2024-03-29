#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>
//#include <math.h>

using namespace std;

class String {
private:
	static const int max_znach = 80;
	char* data;
	int lenth;
public:
	String() {
		data = new char[max_znach];
		lenth = max_znach;
	}
	String(int size) {
		data = new char[size];
		lenth = size;
	}
	String(const char* str) {
		lenth = strlen(str);
		data = new char[lenth];
		strcpy(data, str);
	}
	String(const String& obg) {
		lenth = obg.lenth;
		data = new char[lenth];
		strcpy(data, obg.data);
	}
	~String() {
		delete[] data;
	}

	void input() {
		cout << "enter string: ";
		cin.getline(data, lenth);
	}

	void print()const {
		cout << "you string: " << data << endl;
	}
};

int main() {

	String title;
	title.input();
	title.print();

	return 0;
}