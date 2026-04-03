#include <iostream>
using namespace std;

int sumAlt(string s, int i) {
    if(i >= s.length()) return 0;
    return (s[i] - '0') + sumAlt(s, i + 2);
}

int main() {
    string s;
    cin >> s;
    cout << sumAlt(s, 0);
    return 0;
}