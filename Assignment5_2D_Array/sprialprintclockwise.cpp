#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int m, n;
    if (!(cin >> m >> n)) return 0;

    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
    

    int sc = 0, sr = 0, ec = n - 1, er = m - 1;
    while (sc <= ec && sr <= er) {
        // 1. Top Row
        for (int col = sc; col <= ec; col++) cout << a[sr][col] << ", ";
        sr++;

        // 2. Right Column
        for (int row = sr; row <= er; row++) cout << a[row][ec] << ", ";
        ec--;

        // 3. Bottom Row
        if (sr <= er) {
            for (int col = ec; col >= sc; col--) cout << a[er][col] << ", ";
            er--;
        }

        // 4. Left Column
        if (sc <= ec) {
            for (int row = er; row >= sr; row--) cout << a[row][sc] << ", ";
            sc++;
        }
    }
	cout<<"END";
    cout << endl;
    return 0;
}
