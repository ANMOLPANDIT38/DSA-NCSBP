#include <iostream>
#include <string>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        // If characters at current positions don't match, it's not a palindrome
        if (s[start] != s[end]) {
            return false;
        }
        // Move pointers towards the center
        start++;
        end--;
    }

    // If pointers meet/cross without mismatch, it's a palindrome
    return true;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    // Output "true" or "false" based on boolean result
    if (isPalindrome(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
