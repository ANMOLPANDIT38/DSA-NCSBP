#include <iostream>
using namespace std;

int largest(long long n) {
    if(n < 10) return n;
    int d = n % 10;
    int l = largest(n / 10);
    return d > l ? d : l;
}

int main() {
    long long n;
    cin >> n;
    
    if(n == 0) {
        cout << 0;
        return 0;
    }
    
    cout << largest(n);
    return 0;
}