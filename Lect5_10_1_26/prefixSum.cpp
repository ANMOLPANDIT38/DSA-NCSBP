#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int a[] = {1, -2, -3, 5, 10};
    int n;
    n=sizeof(a)/sizeof(int );
    
    int ans = INT_MIN;
    int i, j, k;
    int ansi, ansj;

    int pre[1000]={}; //initally have in buckets have zero value
    int x=0;
    
    //caluclate the prefix sum
    for(int i=0;i<n;i++){
        x+=a[i];
        pre[i]=x;
    }



    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            // yh sum yhi declare karna hoga khi or nhi kar skte
            // before printing the subarray lets create a bucket to find the sum
            int sum = 0;
            //
            if(i-1>=0){
                sum=pre[j]-pre[i-1]; //i-1 valid index hai subtract kardo
            }
            else{
                sum=pre[j]; //i-1 index nhi exist karta tho voh nhi le skte
            }
            if (sum > ans)
            {
                ansi = i;
                ansj = j;
                ans = sum;
            } 
        }
    }
    cout<<"max ans: "<<ans<<endl;;
    for(int i= ansi;i<=ansj;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}