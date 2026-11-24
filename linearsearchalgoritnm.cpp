
#include <iostream>
using namespace std;

const int MAX = 5;
int arr[MAX] = {10, 20, 30, 40, 50};


// LINEAR SEARCH
void linearSearch(int value) {

    int pos = -1;

    for (int i = 0; i < MAX; i++) {

        if (arr[i] == value) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << value << " not found" << endl;
    } else {
        cout << value << " found at position " << pos + 1 << endl;
    }
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

    cout << "Array elements:" << endl;
    display();

    cout << endl;

    linearSearch(30);

    linearSearch(70);

    return 0;
}
