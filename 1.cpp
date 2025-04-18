#include <iostream>
#include <cmath>
using namespace std;

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double computeEx(int x) {
    double sum = 1.0;
    for (int i = 1; i <= 10; i++) {
        sum += pow(x, i) / factorial(i);
    }
    return sum;
}

int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "The value of e^" << x << " is: " << computeEx(x) << endl;
    
    return 0;
}