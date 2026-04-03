#include<iostream>
using namespace std;


void merge(int *a, int *b,int *c,int s,int e){
    int m=(s+e)/2;
    int i=s;
    int j=m+1;
    int k=s;

    while(i<=m and j<=e){
        if(c[j]<b[i]){
            a[k++]=c[j++];
        }
        else{
            a[k++]=b[i++];
        }
    }

    while(j<=e){
        a[k++]=c[j++];
    }
    while(i<=m){
        a[k++]=b[i++];
    }
}
void mergeSort(int *a,int s, int e){
    //base case 
    if(s>=e) return ;

    //recurion case 
    //1. divide
    int m=(s+e)/2;
    int b[100];
    int c[100];
    for(int i=s;i<=m;i++){
        b[i]=a[i];
    }
    for(int i=m+1;i<=e;i++){
        c[i]=a[i];
    }

    //2.sort 
    mergeSort(b,s,m);
    mergeSort(c,m+1,e);

    // 3. merge 
    merge(a,b,c,s,e);
}

int main()
{
    int a[]={2,3,4,1,7,6,9,0,5};
    int n=sizeof(a)/sizeof(int);

    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}