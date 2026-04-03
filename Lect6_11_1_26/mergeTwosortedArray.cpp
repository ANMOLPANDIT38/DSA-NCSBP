#include <iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//order is very important a,m,b,n
void mergeSorted(int a[],int m,int b[],int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 and j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            i--;
            k--;
        }
        else{
            a[k]=b[j];
            k--;
            j--;
        }

    }
    while(j>=0){
        a[k]=b[j]; 
        k--;
        j--;
    }

}
int main(){
    int a[7]={3,6,7};
    int m=3;

    int b[]={1,2,4,5};
    int n=4;
    //order is important a,m,b,n
    mergeSorted(a,m,b,n);
    print(a,m+n);

    return 0;
}