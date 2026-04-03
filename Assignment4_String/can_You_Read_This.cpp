#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void printCamelCaseWords(string s) {
    if (s.empty()) return;

    // Print the first character (always uppercase in this format)
    cout << s[0];

    for (int i = 1; i < s.length(); i++) {
        // If the current character is uppercase, start a new line
        if (isupper(s[i])) {
            cout << endl;
        }
        cout << s[i];
    }
    cout << endl;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    printCamelCaseWords(s);

    return 0;
}
