# Sum of Natural Numbers (Recursive)

A C++ program to calculate the sum of the first N natural numbers using recursion.

## Description

This program demonstrates the use of recursion to calculate the sum of natural numbers up to a given input. It provides a clear and concise example of how recursion can be used to solve computational problems.

### Key Features
- Recursive function implementation
- Base case handling
- User input
- Clear output

## Code Structure

```cpp
#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    // Base Case
    if (n <= 1) {
        return n;
    } else {
        // Recursive Step
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
