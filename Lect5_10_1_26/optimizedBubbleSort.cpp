#include <iostream>
using namespace std;

int main()
{
    int a[]={4,2,5,1,3};
    int n=sizeof(a)/sizeof(int);
    int i, j;
    // initialize karlo cnt=0
    
    for (i = 0; i < n - 1; i++)
    {
        int cnt = 0;
        cout<<"running is i: "<<i<<" ";
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // yha cnt++ karte jao jab swap kaorge
                cnt++;
                swap(a[j], a[j + 1]);
            }
        }
        cout<<endl;
        // if cnt is zero
        if (cnt == 0)
        {
            break; // i wale loop se exit akar jao no need to continue
        }
    }

    cout << "sorted array :  ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}