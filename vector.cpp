#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr; // Объявление пустого вектора с типом int
    // Добавление элементов в вектор
    int number = 0;
   

    for (int j = 0; j < 3; j++) {
        cin >> number;
        arr.push_back(number);
    }
    cout << endl;
  

    // Доступ к элементам вектора

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    // Размер вектора
    cout << arr.size() << endl;

    return 0;
}