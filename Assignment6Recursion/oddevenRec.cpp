#include <iostream>
using namespace std;

void printOdd(int n) {
    if(n <= 0) return;
    if(n % 2 != 0) cout << n << endl;
    printOdd(n - 1);
}

void printEven(int n, int i) {
    if(i > n) return;
    if(i % 2 == 0) cout << i << endl;
    printEven(n, i + 1);
}

int main() {
    int n;
    cin >> n;
    printOdd(n);
    printEven(n, 1);
    return 0;
}