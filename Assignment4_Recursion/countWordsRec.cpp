#include <iostream>
#include <string>

using namespace std;

// Recursive function to count words
// 'inWord' tracks if we are currently inside a sequence of characters
int countWordsRecursive(const string &s, int index, bool inWord) {
    // Base Case: end of string
    if (index == s.length()) {
        return 0;
    }

    if (s[index] != ' ' && !inWord) {
        // We found the start of a new word
        return 1 + countWordsRecursive(s, index + 1, true);
    } 
    else if (s[index] == ' ') {
        // We hit a space, so we are no longer in a word
        return countWordsRecursive(s, index + 1, false);
    } 
    else {
        // We are still inside the same word
        return countWordsRecursive(s, index + 1, true);
    }
}

int main() {
    string s;
    // getline is necessary to capture the full sentence with spaces
    if (getline(cin, s)) {
        // Start recursion at index 0, initially not in a word
        cout << countWordsRecursive(s, 0, false) << endl;
    }
    return 0;
}
