#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int r,c;
    r = 1;
    while ( r <= n)
    {
        int val = r;
         c = 1;
        while (c <= r)
        {
            cout << val << " ";
            c++;
        }
        c = 2;
        int val1 = r+1;
        while (c <=n)
        {
            if(val1>=n+1){
                break;
            }
            cout << val1 << " ";
            ++val1;
            c++;
            
        }
        cout << endl;
        r++;
    }

    return 0;
}