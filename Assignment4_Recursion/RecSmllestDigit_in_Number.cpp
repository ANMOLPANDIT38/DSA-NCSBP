#include <iostream>
using namespace std;

int smallest(int n) {
    if(n < 10) return n;
    int d = n % 10;
    int s = smallest(n / 10);
    return d < s ? d : s;
}

int main() {
    long long n;
    cin >> n;
    
    if(n == 0) {
        cout << 0;
        return 0;
    }
    
    cout << smallest(n);
    return 0;
}