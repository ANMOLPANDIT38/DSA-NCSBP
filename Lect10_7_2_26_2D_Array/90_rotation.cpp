#include <iostream>
using namespace std;

void rotation(int a[][100], int n, int m)
{ 
    // traspose of 2d array 
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    // reverse row 
    for (int i = 0; i < n; i++)
    {
        int ii=0;
        int j = n - 1;
        while (i < j)
        {
            swap(a[i][ii], a[i][j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int a[][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int n = 3;
    int m = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    rotation(a, n, m);

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