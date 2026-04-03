#include <iostream>
using namespace std;

long long removeZero(long long n) {
    if(n == 0) return 0;
    long long d = n % 10;
    long long res = removeZero(n / 10);
    if(d == 0) return res;
    return res * 10 + d;
}

int main() {
    long long n;
    cin >> n;
    
    if(n == 0) {
        cout << 0;
        return 0;
    }
    
    cout << removeZero(n);
    return 0;
}