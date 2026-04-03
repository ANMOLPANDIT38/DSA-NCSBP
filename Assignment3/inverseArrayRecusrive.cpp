#include <iostream>
using namespace std;

// yh smz nhi ayaa baad m dekhta hu 
void inverse(int original[], int inv[], int n, int i) {
    
    if (i == n) return;

    // 2. Main logic: purani value ko naya index banao
    int position = original[i];
    inv[position] = i;

    // 3. Agle element ke liye function ko phir se bulao
    inverse(original, inv, n, i + 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n], inv[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    inverse(arr, inv, n, 0); // i=0 se shuru kiya

    for (int i = 0; i < n; i++) cout << inv[i] << " ";

    return 0;
}
