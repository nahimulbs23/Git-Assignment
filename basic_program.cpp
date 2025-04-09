#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    cout << "Enter a number to calculate its Fibonacci: ";
    cin >> num;

    cout << "Fibonacci number at position " << num << " is " << fibonacci(num) << endl;

    return 0;
}