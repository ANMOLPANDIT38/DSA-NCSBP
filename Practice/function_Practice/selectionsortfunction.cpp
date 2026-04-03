#include<iostream>
using namespace std;


void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mi]){
                mi=j;
            }
        }
        swap(a[i],a[mi]);
    }
}




int main()
{
    int a[]={2,3,6,7,4,1,0};
    int n=sizeof(a)/sizeof(int);
    printArray(a,n);

    SelectionSort(a,n);
    cout<<endl;
    
    printArray(a,n);
    return 0;
}