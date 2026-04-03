#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int a[] = {-1, -2, -3, -5, -10};
    int n;
    n = sizeof(a) / sizeof(int);
    int ansi, ansj;
    int ans = INT_MIN;
    int sum = 0;

    bool isPositivePresent = false;
    // check karlo khi sarre elements negative toh nhi hai

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            isPositivePresent = true;
            break;
        }
    }
    if (isPositivePresent == true)
    {
        // kadanes will work
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum < 0)
            {
                sum = 0;
            }
            ans = max(ans, sum);
        }
        cout <<"max ans: "<< ans<<endl;
    }
    else{
    for (int i = ansi; i <= ansj; i++)
    {
        ans=max(ans,a[i]);
    }
    cout <<"max ans: "<<ans<< endl;
    }
    return 0;
}