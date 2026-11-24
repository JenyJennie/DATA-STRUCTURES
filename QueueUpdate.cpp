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


void updateElement(int oldValue, int newValue) {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }

    
    int pos = -1;
    for (int i = front; i <= rear; i++) {
        if (queueArr[i] == oldValue) {
            pos = i;
            break;
        }
    }

    
    if (pos == -1) {
        cout << oldValue << " not found in queue" << endl;
        return;
    }

    
    queueArr[pos] = newValue;
    cout << oldValue << " has been updated to " << newValue << endl;
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

    
    updateElement(30, 99);  

    cout << endl;
    display();              

    cout << endl;

    
    updateElement(77, 88);  

    return 0;
}