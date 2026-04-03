#include <iostream>
using namespace std;

string removeX(string s, int i) {
    if(i == s.length()) return "";
    string res = removeX(s, i + 1);
    if(s[i] == 'x') return res;
    return s[i] + res;
}

int main() {
    string s;
    cin >> s;
    cout << removeX(s, 0);
    return 0;
}