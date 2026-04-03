#include <iostream>
using namespace std;

//return sum of the array

int SumArray(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}

int main(){
    int a[1000];
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<SumArray(a,n);
    

    return 0;
}