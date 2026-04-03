#include <iostream>
using namespace std;

void bs(int *a, int n, int i, int j)
{
    // base case
    if (i == n + 1)
        return;

    if (j < n - 1 - i)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
        bs(a, n, i, j + 1);
    }
    else
    {
        bs(a, n, i + 1, 0);
    }
}

// recusrive case

int main()

{
    int a[] = {2, 3, 4, 1, 5};
    int n = sizeof(a) / sizeof(int);

    bs(a, n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}