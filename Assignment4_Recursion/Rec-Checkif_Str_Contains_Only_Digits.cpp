#include <iostream>
using namespace std;

bool check(string s, int i) {
    if(i == s.length()) return true;
    if(s[i] < '0' || s[i] > '9') return false;
    return check(s, i + 1);
}

int main() {
    string s;
    cin >> s;
    
    if(check(s, 0)) cout << "True";
    else cout << "False";
    
    return 0;
}