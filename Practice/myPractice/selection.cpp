#include<iostream>
#include<Algorithm>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i,j;
    for(i=0;i<n-1;i++){
        int mi=i;
        
        for(j=i+1;j<n;j++){
            if(a[j]<a[mi]){
                mi=j;
            }
        }
        swap(a[i],a[mi]);
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}