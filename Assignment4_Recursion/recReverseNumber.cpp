#include <iostream>

using namespace std;

int main() {
    long long n;
    
    // Standard input for N
    if (!(cin >> n)) return 0;

    // Handle the case for N = 0
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    long long reversedNum = 0;

    // Loop to reverse digits
    while (n > 0) {
        int lastDigit = n % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + lastDigit; // Shift left and add digit
        n = n / 10;                     // Remove the last digit from N
    }

    // Output the reversed integer
    cout << reversedNum << endl;

    return 0;
}
