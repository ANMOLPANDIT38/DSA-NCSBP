#include <iostream>
using namespace std;

string replacePi(string s, int i) {
    if(i >= s.length()) return "";
    if(i < s.length() - 1 && s[i] == 'p' && s[i + 1] == 'i')
        return "3.14" + replacePi(s, i + 2);
    return s[i] + replacePi(s, i + 1);
}

int main() {
    int n;
    cin >> n;
    
    while(n--) {
        string s;
        cin >> s;
        cout << replacePi(s, 0) << endl;
    }
    
    return 0;
}