#include <iostream>
using namespace std;
template <class T>
class Queue {
private:
    T* Wait;
    int MaxQueueLength;
    int QueueLength;
public:
    Queue(int m);
    ~Queue();
    void Enqueue(T c);
    T Dequeue();
    bool IsEmpty();
    bool IsFull();
    int GetCount();
    void Show();
};
template <class T>
Queue<T>::Queue(int m) {
    MaxQueueLength = m;
    QueueLength = 0;
    Wait = new T[MaxQueueLength];
}
template <class T>
Queue<T>::~Queue() { delete[]Wait; }

template <class T>
bool Queue<T>::IsEmpty() { return QueueLength == 0; }

template <class T>
bool Queue<T>::IsFull() { return QueueLength == MaxQueueLength; }

template <class T>
void Queue<T>::Enqueue(T c) {
    if (!IsFull()) { Wait[QueueLength++] = c; }
}
template <class T>
T Queue<T>::Dequeue() {
    if (!IsEmpty()) {
        T temp = Wait[0];
        for (int i = 1; i < QueueLength; i++) {
            Wait[i - 1] = Wait[i];
        }
        QueueLength--;
        return temp;
    }
    else { return -1; }
}
template <class T>
int Queue<T>::GetCount() { return QueueLength; }

template <class T>
void Queue<T>::Show() {
    cout << endl << "------------------------" << endl;
    for (int i = 0; i < QueueLength; i++) {
        cout << Wait[i] << " ";
    }
    cout << endl << "------------------------" << endl;
}
int main()
{
    int n;
    cout << "vvedite kol-vo el";
    cin >> n;
    Queue <int>QU(n);
    for (int i = 0; i < n; i++) {
        QU.Enqueue(rand() % (2 * n));
    }
    QU.Show();
    cout << QU.Dequeue();
    QU.Show();
    QU.Enqueue(10);
    QU.Enqueue(11);
    QU.Show();
    return 0;
}