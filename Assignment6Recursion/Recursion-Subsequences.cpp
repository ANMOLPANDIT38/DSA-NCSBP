#include <iostream>
using namespace std;

int countSubseq(string s) {
    if(s.length() == 0) return 1;
    return 2 * countSubseq(s.substr(1));
}

void printSubseq(string s, string ans) {
    if(s.length() == 0) {
        cout << ans << " ";
        return;
    }
    printSubseq(s.substr(1), ans);
    printSubseq(s.substr(1), ans + s[0]);
}

int main() {
    string s;
    cin >> s;
    
    printSubseq(s, "");
    cout << endl;
    cout << countSubseq(s);
    
    return 0;
}