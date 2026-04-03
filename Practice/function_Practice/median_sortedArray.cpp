#include <iostream>
using namespace std;


//print array 
    void Printarray(int arr[],int N){
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    void mergesortedArray(int arr[],int n,int brr[],int m,int c[]){
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(arr[i]<brr[j]){ 
                c[k++]=arr[i++];
            }
            else{
                c[k++]=brr[j++];
            }

        }
        while(i<n){
            c[k++]=arr[i++];
        }
    }

int main(){
    
    int a[]={1,3,5,8,9};
    int n=sizeof(a)/sizeof(int);

    int b[]={2,4,6};
    int m=sizeof(b)/sizeof(int);
    
    int c[100]; //after merging of c[] would be n+m 
    mergesortedArray(a,n,b,m,c);
    Printarray(c,m+n);

    if((m+n)%2==1){
        cout<<c[(m+n)/2]<<endl;
    }
    else{
        cout<<(c[(m+n)/2]+c[(m+n)/2-1])/2.0 <<endl;
    }

    return 0;
}