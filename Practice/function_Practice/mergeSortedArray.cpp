#include<iostream>
using namespace std;


void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void mergeSorted(int a[],int m, int b[],int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 and j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            i--;
            k--;
        }
        else{
            a[k]=b[j];
            j--;
            k--;
        }

        while(j>=0){
            a[k]=b[j];
            j--;
            k--;
        }
    }

}

int main()
{
    int a[7]={0,4,5};
    int m=3;
    int b[4]={7,8,9,19};
    int n=4;

    // yh bhul gya tha m+n karna 
    printArray(a,m+n);
    // printArray(a,m+n);
    mergeSorted(a,m,b,n);
    printArray(a,m+n);
    return 0;
}