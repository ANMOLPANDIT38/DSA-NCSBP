#include <iostream>
#include <string>

using namespace std;

// Recursive function to check palindrome
bool isPalindrome(string &s, int start, int end) {
    // Base case: if we've crossed the middle, it's a palindrome
    if (start >= end) {
        return true;
    }

    // Check if characters at the current boundaries match
    if (s[start] != s[end]) {
        return false;
    }

    // Move inward recursively
    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string s;
    // Using cin >> s to read the input string
    if (cin >> s) {
        int n = s.length();
        
        // Initial call with the first and last indices
        if (isPalindrome(s, 0, n - 1)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    
    return 0;
}
