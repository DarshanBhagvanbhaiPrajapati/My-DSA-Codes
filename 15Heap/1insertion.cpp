#include<bits/stdc++.h>
using namespace std;

class Heap {
public:
    int arr[101];
    int size;

    Heap() {
        size = 0;
    }

    void insert(int value) {
        // Insert value at the end of the heap
        size = size + 1;
        int index = size;
        arr[index] = value;

        // Restore heap property by moving the newly inserted element to its correct position
        while (index > 1) {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }
};
int main() {
    Heap h;

    h.insert(100);
    h.insert(50);
    h.insert(60);
    h.insert(40);
    h.insert(45);

    cout << "Printing the heap" << endl;
    for (int i = 1; i <= h.size; i++) { // Start from index 1 because index 0 is not used
        cout << h.arr[i] << " ";
    }
    cout << endl;

    h.insert(110);

    cout << "Printing the heap after insertion of 110" << endl;
    for (int i = 1; i <= h.size; i++) { // Start from index 1 because index 0 is not used
        cout << h.arr[i] << " ";
    }
    cout << endl;

    return 0;
}
