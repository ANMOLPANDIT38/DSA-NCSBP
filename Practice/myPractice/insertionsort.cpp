#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=1;i<n;i++){
        int hpc=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>hpc){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=hpc;
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}