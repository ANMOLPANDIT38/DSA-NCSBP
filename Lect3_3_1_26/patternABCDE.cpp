#include <iostream>
using namespace std;
int main()
{

    int n, r, i;
    cin >> n;
    // loop n times chlega 
    for (int r = 1; r <= n; r++)
    {
        char ch = 'A';
        // increasing ABCDE
        for (i = 0; i < n - r + 1; i++)
        {
            cout << ch++;
        }
        // decreaing order 
        for (i = n - r + 1; i > 0; i--)
        {
            // phele decrease kar rhe hai then character
            // print kar rhe hai
            cout << --ch;
        }
        cout << endl;
    }

    return 0;
}