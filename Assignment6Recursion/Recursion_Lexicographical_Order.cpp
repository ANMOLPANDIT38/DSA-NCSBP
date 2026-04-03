#include <iostream>
using namespace std;

void lexicographical(int curr, int n) {
    if (curr > n) return;

    cout << curr << " ";

    for (int i = 0; i <= 9; i++) {
        int next = curr * 10 + i;
        if (next > n) return;
        lexicographical(next, n);
    }
}

int main() {
    int n;
    cin >> n;

    cout << 0 << " ";

    for (int i = 1; i <= 9; i++) {
        lexicographical(i, n);
    }

    return 0;
}