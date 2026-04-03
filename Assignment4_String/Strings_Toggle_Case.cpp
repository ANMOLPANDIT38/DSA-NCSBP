#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toggleCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        // If character is lowercase, convert to uppercase
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } 
        // If character is uppercase, convert to lowercase
        else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main() {
    string s;
    // Reading input (handles strings without spaces)
    if (!(cin >> s)) return 0;

    cout << toggleCase(s) << endl;

    return 0;
}
