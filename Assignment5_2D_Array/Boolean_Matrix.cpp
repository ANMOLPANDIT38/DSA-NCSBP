#include <iostream>
using namespace std;
int main()
{
    int a[10000][10000];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>> a[i][j];
        }
    }

        for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0) {
                a[i][j] = 1; 
            }
            cout << a[i][j] << " "; 
        }
        cout << endl; 
    }


    return 0;
}