#include <iostream>
#include <algorithm>
using namespace std;

string arr[100000];
int idx = 0;
string original;

void permute(string s, int l, int r) {
    if(l == r) {
        if(s > original) {
            arr[idx++] = s;
        }
        return;
    }
    for(int i = l; i <= r; i++) {
        swap(s[l], s[i]);
        permute(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main() {
    string s;
    cin >> s;
    original = s;
    sort(s.begin(), s.end());
    permute(s, 0, s.length() - 1);
    
    sort(arr, arr + idx);
    
    for(int i = 0; i < idx; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}