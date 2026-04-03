#include <iostream>
using namespace std;

int countTwins(string s, int i) {
    if(i >= s.length() - 2) return 0;
    int count = 0;
    if(s[i] == s[i + 2]) count = 1;
    return count + countTwins(s, i + 1);
}

int main() {
    string s;
    cin >> s;
    cout << countTwins(s, 0);
    return 0;
}