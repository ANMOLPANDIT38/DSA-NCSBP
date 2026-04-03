#include <iostream>
using namespace std;

int lastIndex(int arr[], int n, int i, int m) {
    if(i == n) return -1;
    int idx = lastIndex(arr, n, i + 1, m);
    if(idx != -1) return idx;
    if(arr[i] == m) return i;
    return -1;
}

int main() {
    int n;
    cin >> n;
    
    int arr[1000];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int m;
    cin >> m;
    
    cout << lastIndex(arr, n, 0, m);
    
    return 0;
}