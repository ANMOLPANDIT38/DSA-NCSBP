#include <iostream>
#include <string>

using namespace std;

string compressStringVariant(string s) {
    int n = s.length();
    if (n == 0) return "";

    string result = "";

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Count consecutive occurrences
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        // Always add the character
        result += s[i];

        // Only add the number if count is greater than 1
        if (count > 1) {
            result += to_string(count);
        }
    }

    return result;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    cout << compressStringVariant(s) << endl;

    return 0;
}
