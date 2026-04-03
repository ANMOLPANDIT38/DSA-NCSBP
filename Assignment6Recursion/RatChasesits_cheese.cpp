#include <iostream>
using namespace std;

int n, m;
char grid[10][10];
int path[10][10];

bool solve(int i, int j) {
    if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 'X' || path[i][j] == 1)
        return false;

    path[i][j] = 1;

    if(i == n - 1 && j == m - 1)
        return true;

    if(solve(i + 1, j) || solve(i, j + 1) || solve(i - 1, j) || solve(i, j - 1))
        return true;

    path[i][j] = 0;
    return false;
}

int main() {
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            path[i][j] = 0;
        }
    }

    if(solve(0, 0)) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NO PATH FOUND";
    }

    return 0;
}