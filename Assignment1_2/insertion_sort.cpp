#include <iostream>
using namespace std;
int main(){

    int a[]={3,5,-6,7,1,4,0};
    //bucket hmesa bhar hi bnao 
    int i,j;
    int n=sizeof(a)/sizeof(int);
    for( i=0;i<=n-1;i++){
        int hpc=a[i];
        for(j=i-1;a[j]>hpc && j>=0;j--){
            a[j+1]=a[j];
        }
        a[j+1]=hpc;
    }

    //printing array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}