#include<iostream>
using namespace std;
int main()
{
    // int a[1000];
    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++){
    //     int mi=i;
    //     for(int j=i+1;j<n;j++){
    //         if(a[j]<a[mi]){
    //             mi=j;
    //         }
    //     }
    //     swap(a[i],a[mi]);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    int a[10000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // slow and fast two pointer same direction approach
    int s=0;
    for(int f=0;f<n;f++){
        if(a[f]==0){
            int temp=a[s];
            a[s]=a[f];
            a[f]=temp;

            s++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}