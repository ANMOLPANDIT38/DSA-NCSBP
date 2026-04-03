#include <iostream>

using namespace std;

// Recursive function to sum even digits
long long sumEvenDigits(long long n) {
    // Base Case: If the number becomes 0, stop recursion
    if (n == 0) {
        return 0;
    }

    // Extract the last digit
    int lastDigit = n % 10;
    int currentSum = 0;

    // Check if the digit is even
    if (lastDigit % 2 == 0) {
        currentSum = lastDigit;
    }

    // Return current even digit + result from the remaining digits
    return currentSum + sumEvenDigits(n / 10);
}

int main() {
    long long n;
    
    // Using long long to handle constraints up to 10^14
    if (!(cin >> n)) return 0;

    // Special case for input 0
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    cout << sumEvenDigits(n) << endl;

    return 0;
}
