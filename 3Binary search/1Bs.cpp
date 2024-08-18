#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int binarySearch(int arr[], int size, int target) {
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start ) / 2;

  while(start <= end) {
    int element = arr[mid];

    if(element == target) {//element found, then return index
      return mid;
    }
    if(target < element) {
      //search in left
      end = mid - 1;
    }
    else {
      //search in right
      start = mid + 1;
    }
    mid = start + (end - start ) / 2;
  }

  //element not found
  return -1;
}
int main() {
  int arr[] = {2,4,6,8,10,12,16};
  int size = 7;
  int target = 20;

  int indexOftarget = binarySearch(arr, size, target);

  if(indexOftarget == -1) {
    cout << "target not found" << endl;
  }
  else  {
    cout << "target found at " << indexOftarget <<" index " << endl;
  }
 
  //// using vector also we can access pre defined function 
  // vector<int> v{1,2,3,4,5,6};
  // int arr[] = {1,2,3,4,5,6,7 };
  // int size = 7;

  // if(binary_search(arr, arr + size, 7)) {
  //   cout << "Found" << endl;
  // }
  // else {
  //   cout << "Not found. " << endl;
  // }
  return 0;
}

//------------------------------------also
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(int);
//     int s = 0, e = n - 1;
//     int pos = -1;  // To store the position of the target if found
//     int target = 5;
    
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == target) {
//             pos = mid;
//             break;
//         } else if (arr[mid] < target) {
//             // Search in the right half
//             s = mid + 1;
//         } else {
//             // Search in the left half
//             e = mid - 1;
//         }
//     }
    
//     if (pos != -1) {
//         cout << "Target found at index: " << pos << endl;
//     } else {
//         cout << "Target not found" << endl;
//     }

//     return 0;
// }
