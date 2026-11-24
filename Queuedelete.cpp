
#include <iostream>
using namespace std;

const int MAX = 5;
int queueArr[MAX];
int front = -1;
int rear = -1;


// ENQUEUE
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


// DEQUEUE
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


// DELETE A SPECIFIC ELEMENT
void deleteElement(int value) {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }

    // Step 1: Search for the value
    int pos = -1;

    for (int i = front; i <= rear; i++) {
        if (queueArr[i] == value) {
            pos = i;
            break;
        }
    }

    // Step 2: Check if value exists
    if (pos == -1) {
        cout << value << " not found in queue" << endl;
        return;
    }

    // Step 3: Shift elements to the left
    for (int i = pos; i < rear; i++) {
        queueArr[i] = queueArr[i + 1];
    }

    // Step 4: Reduce rear
    rear = rear - 1;

    // Step 5: Reset if queue becomes empty
    if (front > rear) {
        front = -1;
        rear = -1;
    }

    cout << value << " has been deleted" << endl;
}


// DISPLAY
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


// MAIN FUNCTION
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
