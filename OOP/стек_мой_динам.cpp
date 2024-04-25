#include <iostream>
#include <ctime>

using namespace std;

class Stack {
private:
    enum { EMPTY = -1, FULL = 20 }; // границы стека
    char * st; // указатель на массив символов в стеке
    int top; // количество символов в стеке
public:
    Stack();
    ~Stack();
    void Push(char c); // помещение символа в стек
    char Pop(); // выталкивание символа из стека
    int GetCount(); // количество символов в стеке
    void Clear(); // очистить стек
    bool IsEmpty(); // проверка на наличие символов в стеке
    bool IsFull(); // проверка на переполнение стека
    char Pop_verh(); // получение без выталкивания символа из стека
};

Stack::Stack() { // по умолчанию стек пустой
    st = new char[FULL + 1];
    top = EMPTY;
}

Stack::~Stack() {
    delete[]st;
}

void Stack::Clear() { // очищаем стек
    top = EMPTY;
}

bool Stack::IsEmpty() { // проверяем стек на пустоту
    if (top == EMPTY) {
        return true;
    }
    else
        return false;
}

bool Stack::IsFull() { // проверяем стек на заполнение
    if (top == FULL) {
        return true;
    }
    else
        return false;
}

int Stack::GetCount() { // спрашиваем количество символов в стеке
    return top + 1;
}

void Stack::Push(char c) { // добавляем символ в стек если он не переполнен
    if (IsFull() != true) {
        st[++top] = c;
    }
}

char Stack::Pop() { // убираем символ из стека если он не пуст
    if (IsEmpty() != true) {
        return st[top--];
    }
    else
        return 0;
}

char Stack::Pop_verh() { // убираем символ из конца стека если он не пуст
    if (IsEmpty() != true) {
        return st[top];
    }
    else
        return 0;
}

int main()
{
    srand(time(0));
    Stack ST;
    char c;
    while (ST.IsFull() != true) { // заполняем и выводим стек
        c = rand() % 4 + 2;
        cout << c << " ";
        ST.Push(c);
    }
    cout << endl;
    while (c = ST.Pop()) { // извлекаем символы из стека в обратном порядке
        cout << c << " ";
    }
    cout << endl;

    ST.Push('a'); // добавляем символы в стек, но так как стек полон - символы не отображаются
    ST.Push('b');
    ST.Push('c');

    c = ST.Pop_verh(); // добавляем новый символ в верх стека
    cout << c << endl;

    while (c = ST.Pop()) { // выводим все символы сверху стека
        cout << c << " ";
    }
    cout << endl;

    return 0;
}