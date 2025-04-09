#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    int count = 0, num = 2;
    while (true) {
        if (isPrime(num)) {
            count++;
            if (count == n) return num;
        }
        num++;
    }
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}