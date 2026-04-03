#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int r, c;
    // row ke liye chl rha hai like 3 n le rha hu kuch bhi le skte hai
    for (r = 1; r <= n; r++)
    {
        // star ke liye row times print hoga
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        // print spaces we use
        cout << "-";
        // cout<<endl;
        // n-r+1 time loop chlaya hai star print karne ke liye
        for (c = 1; c <= n - r + 1; c++)
        {
            cout << "*";
        }
        // print spaces
        cout << "-";
        // cout<<endl;
        // print star n-r+1
        for (c = n - r + 1; c >= 1; c--)
        {
            cout << "*";
        }
        // print spaces
        cout << "-";
        // cout<<endl;

        // print star to row times
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}