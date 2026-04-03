#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[100], res[100]; 

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 3: Inverse ka asli magic loop
    for (int i = 0; i < n; i++) {
        int value = arr[i];   // Purani value uthayi
        res[value] = i;       // Use naya index bana kar purana i store kiya
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }

    return 0;
}
