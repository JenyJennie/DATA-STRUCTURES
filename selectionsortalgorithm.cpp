
#include <iostream>
using namespace std;

const int MAX = 5;
int arr[MAX] = {50, 20, 40, 10, 30};


// SELECTION SORT
void selectionSort() {

    for (int i = 0; i < MAX - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < MAX; j++) {

            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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

    selectionSort();

    cout << "\nAfter sorting:" << endl;
    display();

    return 0;
}
