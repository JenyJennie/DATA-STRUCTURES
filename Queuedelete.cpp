
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


int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return -1;
    }

    int x = queueArr[front];

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = front + 1;
    }

    cout << x << " has been removed" << endl;
    return x;
}


void deleteElement(int value) {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }

    int pos = -1;

    for (int i = front; i <= rear; i++) {
        if (queueArr[i] == value) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << value << " not found in queue" << endl;
        return;
    }

    for (int i = pos; i < rear; i++) {
        queueArr[i] = queueArr[i + 1];
    }

    rear = rear - 1;

    if (front > rear) {
        front = -1;
        rear = -1;
    }

    cout << value << " has been deleted" << endl;
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
    enqueue(50);

    cout << endl;
    display();

    cout << endl;

    deleteElement(30);

    cout << endl;
    display();

    cout << endl;

    deleteElement(99);

    return 0;
}
