#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generate(string str, int i, vector<string> &res, string original) {
    if (i == str.length()) {
        if (str < original)
            res.push_back(str);
        return;
    }

    for (int j = i; j < str.length(); j++) {
        swap(str[i], str[j]);
        generate(str, i + 1, res, original);
        swap(str[i], str[j]);
    }
}

int main() {
    string str;
    cin >> str;

    vector<string> res;

    generate(str, 0, res, str);

    sort(res.begin(), res.end());

    for (string s : res)
        cout << s << endl;

    return 0;
}