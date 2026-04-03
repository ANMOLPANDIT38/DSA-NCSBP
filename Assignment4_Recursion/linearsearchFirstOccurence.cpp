#include<iostream>
using namespace std;

int linearSearch(int a[],int n,int target,int i){

    // base case 
    if(i==n) return -1;
    // reursive case
    if(a[i]==target) return i;

    return linearSearch(a,n,target,i+1);
}

int main()
{
    int n;
    cin>>n;

    int a[10000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;

    cout<<linearSearch(a,n,target,0);

    return 0;
}