#include <iostream>
#include <algorithm>
using namespace std;
// Function to calculate mean of elements in array
double calculateMean(int arr[], int size) {
double sum = 0;
 for (int i = 0; i < size; ++i) {
sum += arr[i];
}
return sum / size;
}
// Function to calculate median of elements in array
double calculateMedian(int arr[], int size) {
sort(arr, arr + size); // Sort the array
if (size % 2 == 0) {
// If number of elements is even, median is average of two middle elements
return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
} else {
// If number of elements is odd, median is the middle element
return arr[size / 2];
}
}
int main() {
int size;
cout << "Enter the size of the array: ";
cin >> size;
if (size <= 0) {
cout << "Invalid array size." << endl;
return 1;
}
int arr[size];
cout << "Enter " << size << " numbers: ";
for (int i = 0; i < size; ++i) {
cin >> arr[i];
}
double mean = calculateMean(arr, size);
double median = calculateMedian(arr, size);
cout << "Mean: " << mean << endl;
cout << "Median: " << median << endl;
return 0;
}