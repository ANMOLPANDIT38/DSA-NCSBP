#include <iostream>
#include <string>

using namespace std;

int countPalindromesAroundCenter(string s, int left, int right) {
    int count = 0;
    // Expand as long as left and right are within bounds and characters match
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}

int countAllPalindromicSubstrings(string s) {
    int totalCount = 0;
    for (int i = 0; i < s.length(); i++) {
        // 1. Odd length palindromes (center is a single character)
        totalCount += countPalindromesAroundCenter(s, i, i);

        // 2. Even length palindromes (center is between two characters)
        totalCount += countPalindromesAroundCenter(s, i, i + 1);
    }
    return totalCount;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    cout << countAllPalindromicSubstrings(s) << endl;

    return 0;
}
