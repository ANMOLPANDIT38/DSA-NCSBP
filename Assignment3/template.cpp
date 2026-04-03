#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    if (!(cin >> t))
        return 0;

    int a[10000];
    int n;
    cin >> n;

    for (int count = 0; count < t; t++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int target;
        cin >> target;

        sort(a, a + n);

        int price1,price2=0;
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            if (a[l] + a[r] == target)
            {
                 price1 = a[l];
                price2 = a[r];
                l++;
                r--;
            }
            else if (a[l] + a[r] < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout << "Deepak should buy roses whose prices are " << price1 << " and " << price2 << "." << endl;
        // Blank line har test case ke baad
        cout << endl;

    }


    return 0;
}