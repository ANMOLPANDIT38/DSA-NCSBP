#include <iostream>

using namespace std;

int main() {
    long long n;
    
    // Taking input N
    if (!(cin >> n)) return 0;

    // Calculating sum using the formula (n * (n + 1)) / 2
    // Using long long to handle values up to 10^12
    long long sum = (n * (n + 1)) / 2;

    // Output the result
    cout << sum << endl;

    return 0;
}
