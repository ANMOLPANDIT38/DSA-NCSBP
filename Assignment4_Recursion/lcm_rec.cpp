#include <iostream>

using namespace std;

// Recursive function to find GCD using Euclidean Algorithm
long long findGCD(long long a, long long b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main() {
    long long a, b;
    
    // Input two integers
    if (!(cin >> a >> b)) return 0;

    // Calculate GCD
    long long gcd = findGCD(a, b);

    // Calculate LCM
    // We divide one of the numbers by GCD first to prevent overflow 
    // before multiplying by the other number.
    long long lcm = (a / gcd) * b;

    cout << lcm << endl;

    return 0;
}
