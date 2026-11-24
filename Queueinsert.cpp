#include <iostream>
using namespace std;

const int MAX = 5;
int queueArr[MAX];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        cout << "Queue is Full" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = rear + 1;
        queueArr[rear] = x;
        cout << x << " has been added" << endl;
    }
}

void insertAt(int pos, int x) {
    if (rear == MAX - 1) {
        cout << "Queue is Full" << endl;
        return;
    }
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }

    int actualPos = front + pos;

    if (actualPos < front || actualPos > rear + 1) {
        cout << "Invalid position" << endl;
        return;
    }

    for (int i = rear; i >= actualPos; i--) {
        queueArr[i + 1] = queueArr[i];
    }

    queueArr[actualPos] = x;
    rear = rear + 1;
    cout << x << " has been inserted at position " << pos << endl;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << "\t";
    }
    cout << endl;
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    cout << endl;
    display();

    cout << endl;
    insertAt(1, 15);

    cout << endl;
    display();

    return 0;
}