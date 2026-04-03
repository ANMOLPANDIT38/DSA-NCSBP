#include <iostream>

using namespace std;

void BubbleRec(int *a,int n,int i){
    if(i==n-1) return ;
//isko j ko argumrnt m karna hai

    for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    BubbleRec(a,n,i+1);
}

int main()
{
    int a[100];
    int n;
    cin >> n;
    int i, j;

    // input liya loop m aaray ke
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    BubbleRec(a,n,0);

    cout << "sorted array :  ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}