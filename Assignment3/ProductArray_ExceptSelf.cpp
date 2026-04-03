#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[10000], ans[10000];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Prefix (left product)
    ans[0] = 1;
    for(int i = 1; i < n; i++)
        ans[i] = ans[i-1] * arr[i-1];
        

    // Suffix (right product)
    long long right = 1;
    for(int i = n-1; i >= 0; i--) {
        ans[i] *= right;
        right *= arr[i];
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}