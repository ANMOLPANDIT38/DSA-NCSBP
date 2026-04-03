#include <iostream>
#include <string>

using namespace std;

char getMaxFrequencyChar(string s) {
    // Frequency array for all ASCII characters
    int freq[256] = {0};

    // Count occurrences of each character
    for (int i = 0; i < s.length(); i++) {
        freq[(unsigned char)s[i]]++;
    }

    int maxCount = 0;
    char result = s[0];

    // Traverse the string or the frequency array to find the max
    // Traversing the string helps handle the "guaranteed single max" easily
    for (int i = 0; i < s.length(); i++) {
        if (freq[(unsigned char)s[i]] > maxCount) {
            maxCount = freq[(unsigned char)s[i]];
            result = s[i];
        }
    }

    return result;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    cout << getMaxFrequencyChar(s) << endl;

    return 0;
}
