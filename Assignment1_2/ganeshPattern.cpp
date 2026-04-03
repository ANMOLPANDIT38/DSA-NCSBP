#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = n / 2 + 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            
            // 1. First Row
            if (i == 1) {
                if (j == 1 || j >= mid) cout << "*";
                else cout << " ";
            }
            // 2. Upper Half (Rows between 1 and Middle)
            else if (i < mid) {
                if (j == 1 || j == mid) cout << "*";
                else cout << " ";
            }
            // 3. Middle Row
            else if (i == mid) {
                cout << "*";
            }
            // 4. Lower Half (Rows between Middle and Last)
            else if (i < n) {
                if (j == mid || j == n) cout << "*";
                else cout << " ";
            }
            // 5. Last Row
            else {
                if (j <= mid || j == n) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
