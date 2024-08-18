#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int n = 5; // Current size of the array
    int pos, value;

    cout << "Enter the position where you want to insert: ";
    cin >> pos;

    // Validate position
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    cout << "Enter the value to insert: ";
    cin >> value;

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value
    arr[pos] = value;
    n++; // Increment the size of the array

    // Display the array after insertion
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
