#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cout << "enter how many numbers" << " ";
    cin >> n;
    int i, j;

    // input liya loop m aaray ke
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for loop outer ek kam tk chlya
    for (i = 0; i < n - 1; i++)
    {
        // n-i-1 isliye kya jo sorted hogye woho wpas se check na kare

        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "sorted array :  ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}