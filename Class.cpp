#include <iostream>
#include <string>

using namespace std;

int main() {

    setlocale(LC_ALL, "RUS");

    class People // Create class people
    {
    public:
        string name;
        int age;
        int wight;
        int hight;

    };

    People First;
    People Seckond;
    cout << "Input you name: " << endl;
    cin >> First.name;

    cout << "Input you age: " << endl;
    cin >> First.age;

    cout << "Input you wight: " << endl;
    cin >> First.wight;

    cout << "Input you hight: " << endl;
    cin >> First.hight;

    cout << "Input you name: " << endl;
    cin >> Seckond.name;

    cout << "Input you age: " << endl;
    cin >> Seckond.age;

    cout << "Input you wight: " << endl;
    cin >> Seckond.wight;

    cout << "Input you hight: " << endl;
    cin >> Seckond.hight;

    cout << "\nPeople № 1:" << endl;
    cout << "Name: " << First.name << endl;
    cout << "Age: " << First.age << endl;
    cout << "Wight: " << First.wight << endl;
    cout << "Hight: " << First.hight << endl << endl;

    cout << "People № 2:" << endl;
    cout << "Name: " << Seckond.name << endl;
    cout << "Age: " << Seckond.age << endl;
    cout << "Wight: " << Seckond.wight << endl;
    cout << "Hight: " << Seckond.hight << endl << endl;

    return 0;
}
