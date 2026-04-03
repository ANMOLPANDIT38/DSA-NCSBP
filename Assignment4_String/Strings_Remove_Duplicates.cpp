#include <iostream>
#include <string>

using namespace std;

string removeConsecutiveDuplicates(string s) {
    // If the string is empty, return as is
    if (s.length() == 0) {
        return "";
    }

    string result = "";
    
    // Add the first character to the result
    result += s[0];

    // Start from the second character and compare with the previous one
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string s;
    // Read the input string
    if (!(cin >> s)) return 0;

    // Call the function and print the result
    cout << removeConsecutiveDuplicates(s) << endl;

    return 0;
}
