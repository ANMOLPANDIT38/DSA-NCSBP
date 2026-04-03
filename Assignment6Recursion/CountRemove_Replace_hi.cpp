#include <iostream>
using namespace std;

int countHi(string s) {
    if (s.length() < 2) return 0;

    if (s.substr(0, 2) == "hi")
        return 1 + countHi(s.substr(2));
    else
        return countHi(s.substr(1));
}

string removeHi(string s) {
    if (s.length() < 2) return s;

    if (s.substr(0, 2) == "hi")
        return removeHi(s.substr(2));
    else
        return s[0] + removeHi(s.substr(1));
}

string replaceHi(string s) {
    if (s.length() < 2) return s;

    if (s.substr(0, 2) == "hi")
        return "bye" + replaceHi(s.substr(2));
    else
        return s[0] + replaceHi(s.substr(1));
}

int main() {
    string str;
    cin >> str;

    cout << countHi(str) << endl;
    cout << removeHi(str) << endl;
    cout << replaceHi(str) << endl;

    return 0;
}