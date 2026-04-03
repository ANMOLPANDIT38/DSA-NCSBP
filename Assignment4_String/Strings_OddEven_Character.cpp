#include <iostream>
#include <string>

using namespace std;

string transformString(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            // Even index: increment ASCII
            s[i] = (char)(s[i] + 1);
        } else {
            // Odd index: decrement ASCII
            s[i] = (char)(s[i] - 1);
        }
    }
    return s;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    cout << transformString(s) << endl;

    return 0;
}
