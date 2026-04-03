#include <iostream>
using namespace std;

void generate(string str, int i) {
    if (i == str.length()) {
        cout << str << " ";
        return;
    }

    if (str[i] == '?') {
        str[i] = '0';
        generate(str, i + 1);

        str[i] = '1';
        generate(str, i + 1);
    } else {
        generate(str, i + 1);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        generate(s, 0);
        cout << endl;
    }

    return 0;
}