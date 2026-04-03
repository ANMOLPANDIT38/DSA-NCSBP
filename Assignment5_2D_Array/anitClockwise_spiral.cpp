#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int m, n;
    if (!(cin >> m >> n)) return 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int sc = 0, sr = 0, ec = n - 1, er = m - 1;
    int count = 0;
    int total = m * n;

    while (count < total) {
        // 1. Left Column: Top to Bottom
        for (int row = sr; row <= er && count < total; row++) {
            cout << a[row][sc] << ", ";
            count++;
        }
        sc++;

        // 2. Bottom Row: Left to Right
        for (int col = sc; col <= ec && count < total; col++) {
            cout << a[er][col] << ", ";
            count++;
        }
        er--;

        // 3. Right Column: Bottom to Top
        for (int row = er; row >= sr && count < total; row--) {
            cout << a[row][ec] << ", ";
            count++;
        }
        ec--;

        // 4. Top Row: Right to Left
        for (int col = ec; col >= sc && count < total; col--) {
            cout << a[sr][col] << ", ";
            count++;
        }
        sr++;
    }
    cout << "END" << endl;
    return 0;
}
