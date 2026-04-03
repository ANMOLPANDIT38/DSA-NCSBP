#include <iostream>
#include <climits>
#include <algorithm> // for max()
using namespace std;

int findMax(int a[], int n, int i) {
    // Base Case: If we reach the last element
    if (i == n) {
        return INT_MIN;
    }

    // Recursive Case: 
    // Compare current element with the maximum of the rest of the array
    return max(a[i], findMax(a, n, i + 1));
}

int main() {
    int n;
    cin >> n;

    // Use a large enough size or dynamic allocation
    int a[100000]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Start recursion from index 0
    cout << findMax(a, n, 0);

    return 0;
}
