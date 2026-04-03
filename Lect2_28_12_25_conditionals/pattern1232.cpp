#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        // spaces
        int i = 1;
        while (i <= n - r)
        {
            cout <<"\t";
            i++;
        }
        // increasing number
        i = 1;
        int val = r;
        while (i <= r)
        {
            cout << val <<"\t";
            i++, val++;
        }
        // decreasing number
        i = 1, val = 2 * r - 2;
        while (i <= r - 1)
        {
            cout << val <<"\t";
            i++, val--;
        }
        cout << endl;
        r++;
    }
    return 0;
}