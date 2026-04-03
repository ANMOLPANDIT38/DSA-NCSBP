#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100][100];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sort(a[i], a[i] + m); 
        // Yeh ek puri row ko O(M \log M) mein sort kar dega
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
