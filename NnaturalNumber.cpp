// WAP in C++ to calculate the sum of first N natural numbers using recursion
#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = sumOfNaturalNumbers(n);
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}