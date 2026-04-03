#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int a[] = {11, -2, -3, -9, 10};
    int n;
    n=sizeof(a)/sizeof(int );
    
    int ans = INT_MIN;
    int i, j, k;
    int ansi, ansj;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            // yh sum yhi declare karna hoga khi or nhi kar skte
            // before printing the subarray lets create a bucket to find the sum
            int sum = 0;
            for (k = i; k <= j; k++)
            {

                sum += a[k];
            }
            if (sum > ans)
            {
                ansi = i;
                ansj = j;
                ans = sum;
            }
        }
    }
    cout<<ans<<endl;;
    for(int i= ansi;i<=ansj;i++){
        cout<<a[i]<<" "<<ansi<<" "<<ansj<<" ";
    }
    cout<<endl;
    return 0;
}