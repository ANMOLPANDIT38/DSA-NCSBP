#include <iostream>
using namespace std;

int countPaths(int r, int c, int dr, int dc) {
    if (r == dr && c == dc) return 1;
    if (r > dr || c > dc) return 0;

    int v = countPaths(r + 1, c, dr, dc);
    int h = countPaths(r, c + 1, dr, dc);
    int d = countPaths(r + 1, c + 1, dr, dc);

    return v + h + d;
}

void printPaths(int r, int c, int dr, int dc, string path) {
    if (r == dr && c == dc) {
        cout << path << " ";
        return;
    }
    if (r > dr || c > dc) return;

    printPaths(r + 1, c, dr, dc, path + "V");
    printPaths(r, c + 1, dr, dc, path + "H");
    printPaths(r + 1, c + 1, dr, dc, path + "D");
}

int main() {
    int n, m;
    cin >> n >> m;

    printPaths(1, 1, n, m, "");
    cout << endl;

    cout << countPaths(1, 1, n, m);

    return 0;
}