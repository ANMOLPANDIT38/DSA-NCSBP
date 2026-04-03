#include <iostream>
using namespace std;

string solve(string s) {
    if (s.length() == 0) return "";

    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++)
        freq[s[i] - 'a']++;

    int pos = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] < s[pos])
            pos = i;

        freq[s[i] - 'a']--;

        if (freq[s[i] - 'a'] == 0)
            break;
    }

    char ch = s[pos];

    string remaining = "";
    for (int i = pos + 1; i < s.length(); i++) {
        if (s[i] != ch)
            remaining += s[i];
    }

    return ch + solve(remaining);
}

int main() {
    string s;
    cin >> s;

    cout << solve(s);

    return 0;
}