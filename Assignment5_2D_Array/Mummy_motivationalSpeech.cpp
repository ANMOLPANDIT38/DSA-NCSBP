#include <iostream>
using namespace std;

bool lowertriangular(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // diaognal ke liye yh nhi lga payaa
            if (j > i)
            {
                if (a[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int a[100][100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    if (lowertriangular(a, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}