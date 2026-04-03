#include <iostream>

using namespace std;

// Recursive function to calculate GCD
int findGCD(int a, int b) {
    // Base Case: when the remainder becomes 0, 
    // the current 'a' is the GCD.
    if (b == 0) {
        return a;
    }
    
    // Recursive Step: pass 'b' as the new 'a', 
    // and the remainder (a % b) as the new 'b'.
    return findGCD(b, a % b);
}

int main() {
    int a, b;

    // Read the two input integers
    if (!(cin >> a >> b)) return 0;

    // Call the recursive function and output the result
    cout << findGCD(a, b) << endl;

    return 0;
}
