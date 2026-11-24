
#include <iostream>
using namespace std;

const int MAX = 5;
int arr[MAX] = {50, 20, 40, 10, 30};


// INSERTION SORT
void insertionSort() {

    for (int i = 1; i < MAX; i++) {

        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Array has been sorted" << endl;
}


// DISPLAY
void display() {

    for (int i = 0; i < MAX; i++) {
        cout << arr[i] << "\t";
    }

    cout << endl;
}


// MAIN FUNCTION
int main() {

    cout << "Before sorting:" << endl;
    display();

    cout << endl;

    insertionSort();

    cout << "\nAfter sorting:" << endl;
    display();

    return 0;
}
