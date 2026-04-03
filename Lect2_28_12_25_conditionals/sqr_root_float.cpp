#include <iostream>
using namespace std;
int main()
{

    int n, precision;

    cin >> n;
    float inc = 1;
    float i = 0;
    precision = 1;
    while (precision <= 4)
    {
        while (i * i <= n)
        {
            // cout<<i<<endl;
            i = i + inc;
            
        }
        i = i - inc;
        inc = inc / 10;
        precision = precision + 1;
    }

    cout << i << endl;

    return 0;
}