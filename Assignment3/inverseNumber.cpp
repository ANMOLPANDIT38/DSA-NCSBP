#include <iostream>
#include <cmath>

using namespace std;

int getInverse(int n) {
    int inverse = 0;
    int currentPosition = 1;

    while (n > 0) {
        // Extract the digit (this is the 'value' at the current position)
        int digit = n % 10;

        // In the inverse, the currentPosition becomes the digit 
        // at the place value determined by 'digit'
        inverse += currentPosition * pow(10, digit - 1);

        // Move to the next digit and increment position
        n /= 10;
        currentPosition++;
    }

    return inverse;
}

int main() {
    int n;
    if (cin >> n) {
        cout << getInverse(n) << endl;
    }
    return 0;
}
