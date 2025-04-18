#include <iostream>
using namespace std;
void insertElement(int arr[], int size, int element, int position) {
if (position < 0 || position > size) {
cout << "Invalid position for insertion." << endl;
return;
}
for (int i = size; i > position; --i) {
arr[i] = arr[i - 1];
}
arr[position] = element;
size++;
cout << "Element " << element << " inserted at position " << position << "." << endl;
}
void deleteElement(int arr[], int& size, int position) {
if (position < 0 || position >= size) {
cout << "Invalid position for deletion." << endl;
return;
}
for (int i = position; i < size - 1; ++i) {
arr[i] = arr[i + 1];
}
size--;
cout << "Element at position " << position << " deleted successfully." << endl;
}
int main() {
const int MAX_SIZE = 100;
int arr[MAX_SIZE];
int size = 0;
cout << "Enter the size of the array: ";
cin >> size;
if (size <= 0 || size > MAX_SIZE) {
cout << "Invalid array size." << endl;
return 1;
}
cout << "Enter " << size << " elements: ";
for (int i = 0; i < size; ++i) {
cin >> arr[i];
}
char choice;
cout << "Do you want to (I)nsert or (D)elete an element? ";
cin >> choice;
if (choice == 'I' || choice == 'i') {
int element, position;
cout << "Enter the element to insert: ";
cin >> element;
cout << "Enter the position to insert (0 to " << size << "): ";
cin >> position;
insertElement(arr, size, element, position);
} else if (choice == 'D' || choice == 'd') {
int position;
cout << "Enter the position of element to delete (0 to " << size - 1 << "): ";
cin >> position;
deleteElement(arr, size, position);
} else {
cout << "Invalid choice." << endl;
return 1;
}
cout << "Modified array: ";
for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl;
return 0;
}