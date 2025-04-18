#include <iostream>
#include <algorithm>
using namespace std;
// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
for (int i = 0; i < size; ++i) {
if (arr[i] == target) {
return i; // Return index if target found
}
}
return -1; // Return -1 if target not found
}
// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
int low = 0;
int high = size - 1;
while (low <= high) {
int mid = low + (high - low) / 2;
if (arr[mid] == target) {
return mid; // Return index if target found
} else if (arr[mid] < target) {
low = mid + 1; // Update start index
} else {
high = mid - 1; // Update end index
}
}
return -1; // Return -1 if target not found
}
int main() {
const int MAX_SIZE = 100;
int arr[MAX_SIZE];
int size;
cout << "Enter the size of the array: ";
cin >> size;
if (size <= 0 || size > MAX_SIZE) {
cout << "Invalid array size." << endl;
return 1;
}
cout << "Enter " << size << " elements in non-decreasing order: ";
for (int i = 0; i < size; ++i) {
cin >> arr[i];
}
char choice;
cout << "Do you want to perform (L)inear search or (B)inary search? ";
cin >> choice;
int target;
cout << "Enter the target value: ";
cin >> target;
int index;
if (choice == 'L' || choice == 'l') {
index = linearSearch(arr, size, target);
} else if (choice == 'B' || choice == 'b') {
sort(arr, arr + size); // Binary search requires sorted array
index = binarySearch(arr, size, target);
} else {
cout << "Invalid choice." << endl;
return 1;
}
if (index != -1) {
cout << "Target value found at index " << index << "." << endl;
} else {
cout << "Target value not found in the array." << endl;
}
return 0;
}