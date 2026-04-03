#include <iostream>

using namespace std;

// Recursive function to count even numbers
int countEvens(int remaining) {
    // Base case: no more numbers to read
    if (remaining <= 0) {
        return 0;
    }

    long long currentNumber;
    cin >> currentNumber;

    // Check if current number is even (1 if true, 0 if false)
    int isEven = (currentNumber % 2 == 0) ? 1 : 0;

    // Recursive step: return current check + result of the rest of the numbers
    return isEven + countEvens(remaining - 1);
}

int main() {
    int n;
    
    // Read the total count N
    if (!(cin >> n)) return 0;

    // Call the recursive function and print result
    cout << countEvens(n) << endl;

    return 0;
}
