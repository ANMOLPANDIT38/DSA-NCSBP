#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int nd;
    nd = ((n + 1) / 2);
    int c, r;
    // row time ke liye loop
    for (r = 1; r <= nd; r++)
    {
        // star
        if (r == 1)
        {
            for (c = 1; c <= n; c++)
            {
                cout << "*    ";
            }
        }
        else
        {   //stars
            for(c=1;c<=nd-r+1;c++){
                cout<<"*    ";
            }
            // spaces
            for(c=1;c<=2*r-3;c++){
                cout<<"     ";
            }
            //stars
            for(c=1;c<=nd-r+1;c++){
                cout<<"*    ";
            }
        }
        cout <<endl;
    }

    //pattern mirroring 
    for (r = nd-1; r >= 1; r--)
    {
        // star
        if (r == 1)
        {
            for (c = 1; c <= n; c++)
            {
                cout << "*    ";
            }
        }
        else
        {   //stars
            for(c=1;c<=nd-r+1;c++){
                cout<<"*    ";
            }
            // spaces
            for(c=1;c<=2*r-3;c++){
                cout<<"     ";
            }
            //stars
            for(c=1;c<=nd-r+1;c++){
                cout<<"*    ";
            }
        }
        cout <<endl;
    }
    return 0;
}