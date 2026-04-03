#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Helper function to check if a character is a vowel
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int longestGoodSubstring(string s) {
    int maxLen = 0;
    int currentLen = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i])) {
            // Increment current vowel sequence length
            currentLen++;
            // Update global maximum
            maxLen = max(maxLen, currentLen);
        } else {
            // Reset current length if a consonant is encountered
            currentLen = 0;
        }
    }

    return maxLen;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    cout << longestGoodSubstring(s) << endl;

    return 0;
}
