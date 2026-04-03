#include <iostream>
using namespace std;

int convert(int n) {
    if(n == 0) return 0;
    int digit = n % 10;
    if(digit == 0) digit = 5;
    return convert(n / 10) * 10 + digit;
}

int main() {
    int n;
    cin >> n;
    
    if(n == 0) {
        cout << 5;
        return 0;
    }
    
    cout << convert(n);
    return 0;
}