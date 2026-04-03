#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int n, m;

    if (!(cin >> n >> m))
        return 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    int x;
    cin >> x;

    bool found = false;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == x)
            {
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    // 5. Output Format: Print 1 if present, else 0
    if (found)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
