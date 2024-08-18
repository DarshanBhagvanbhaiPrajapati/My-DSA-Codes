#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int n = 5; // Current size of the array
    int pos;

    cout << "Enter the position of the element you want to delete: ";
    cin >> pos;

    // Validate position
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrement the size of the array

    // Display the array after deletion
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
