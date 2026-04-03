#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[100][100];
    int n;
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int max = INT_MIN;
    int index;
    for (int j = 1; j <= n; j++)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum = a[i][j] + sum;
        }
        if (sum > max)
        {
            index = j;
            max = sum;
        }
    }
    cout << index << " " << max;

    return 0;
}