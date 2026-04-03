#include <iostream>

using namespace std;

int main() {
    int N;
    // Corrected prompt string syntax
    cout << "Enter a number to check if it's a Fibonacci number: ";
    cin >> N;

    int a = 0;
    int b = 1;
    int c = 0; // Initialize c correctly

    // Handle the edge cases 0 and 1 separately
    if (N == 0 || N == 1) {
        cout << N << " is a Fibonacci number." << endl;
        return 0;
    }

    // Iterate until c exceeds N
    while (c < N) {
        c = a + b;
        a = b;
        b = c;
    }

    // After the loop finishes, check if the last generated 'c' exactly matches 'N'
    if (c == N) {
        cout << N << " is a Fibonacci number." << endl;
    } else {
        // If it doesn't match, N is not a Fibonacci number
        cout << N << " is not a Fibonacci number." << endl;
    }

    return 0;
}
