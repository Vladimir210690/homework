#include <iostream>

using namespace std;

int main(){
	int row = 0;
	int col = 0;

	cout << "Input row and col: ";
	cin >> row;
	col = row;
	
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			if (i == col / 2 || j == row / 2 ) {
				cout << "#";
			}
			else if (i == j) {
				cout << "#";
			}
			else if (col - j == i) {
				cout << "#";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}