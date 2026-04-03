#include <iostream>
using namespace std;

int countWays(int curr, int n, int m) {
    if (curr == n) return 1;
    if (curr > n) return 0;

    int count = 0;
    for (int dice = 1; dice <= m; dice++) {
        count += countWays(curr + dice, n, m);
    }
    return count;
}

void printWays(int curr, int n, int m, string path) {
    if (curr == n) {
        cout << path << " ";
        return;
    }
    if (curr > n) return;

    for (int dice = 1; dice <= m; dice++) {
        printWays(curr + dice, n, m, path + to_string(dice));
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    printWays(0, n, m, "");
    cout << endl;

    cout << countWays(0, n, m);

    return 0;
}