#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "RUS");

	const int SAW = 10;
	int keis[SAW];
	int j = 0;

	for (int h = 0; h < SAW; h++)
	{
		cin >> j;
		keis[h] = j;
	}

	cout << "\nМассив загружен! " << endl << endl;

	for (int h = 0; h < SAW; h++)
	{
		cout << keis[h] << endl;
	}

	
	return 0;
}