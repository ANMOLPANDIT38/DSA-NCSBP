#include <iostream>
using namespace std;

int convert(string s, int n) {
    if(n == 0) return 0;
    return convert(s, n - 1) * 10 + (s[n - 1] - '0');
}

int main() {
    string s;
    cin >> s;
    cout << convert(s, s.length());
    return 0;
}