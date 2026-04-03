#include <iostream>
using namespace std;

int firstIndex(int arr[], int n, int i, int m) {
    if(i == n) return -1;
    if(arr[i] == m) return i;
    return firstIndex(arr, n, i + 1, m);
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
    
    cout << firstIndex(arr, n, 0, m);
    
    return 0;
}