#include <iostream>

using namespace std;

// Recursive function to count zeros
int countZeros(long long n) {
    // Base case: if number is a single digit
    if (n < 10) {
        return (n == 0) ? 1 : 0;
    }

    // Check if current last digit is zero
    int currentDigitZero = (n % 10 == 0) ? 1 : 0;

    // Add result of current digit to the recursive call of the rest
    return currentDigitZero + countZeros(n / 10);
}

int main() {
    long long n;
    if (cin >> n) {
        // Handle the unique case of the number 0 separately or 
        // let the function handle it (works both ways with this logic)
        cout << countZeros(n) << endl;
    }
    return 0;
}
