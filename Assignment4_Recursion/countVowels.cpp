#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Recursive function to count vowels
int countVowels(const string &s, int index) {
    // Base Case: end of string reached
    if (index == s.length()) {
        return 0;
    }

    // Check current character and add to the result of the rest of the string
    int count = isVowel(s[index]) ? 1 : 0;
    return count + countVowels(s, index + 1);
}

int main() {
    string s;
    // Using getline to ensure we capture the full string if it contains spaces
    if (getline(cin, s)) {
        cout << countVowels(s, 0) << endl;
    }
    return 0;
}
