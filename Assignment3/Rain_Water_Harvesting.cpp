#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[1000000];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int leftMax[1000000], rightMax[1000000];
    
    leftMax[0] = arr[0];
    for(int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }
    
    rightMax[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], arr[i]);
    }
    
    int water = 0;
    for(int i = 0; i < n; i++) {
        water += min(leftMax[i], rightMax[i]) - arr[i];
    }
    
    cout << water;
    
    return 0;
}