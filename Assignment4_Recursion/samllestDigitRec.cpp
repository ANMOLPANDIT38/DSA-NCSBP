#include <iostream>
#include <algorithm> // For min()

using namespace std;

// Recursive function to find the smallest digit
int findSmallestDigit(long long n) {
    // Base Case: If the number is a single digit, return it
    if (n < 10) {
        return (int)n;
    }

    // Extract the last digit
    int lastDigit = n % 10;

    // Recursive call to find the smallest digit in the rest of the number
    int smallestInRest = findSmallestDigit(n / 10);

    // Return the smaller of the two
    return min(lastDigit, smallestInRest);
}

int main() {
    long long n;
    
    // Using long long for constraints up to 10^15
    if (!(cin >> n)) return 0;

    // Output the smallest digit
    cout << findSmallestDigit(n) << endl;

    return 0;
}
