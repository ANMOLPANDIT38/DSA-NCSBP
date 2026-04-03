#include <iostream>
using namespace std;
int main(){

    int a[10];
    int n,i;
    cin>>n; //phele yh btao kitne no. input honge 
    for(i=0;i<n;i++){ //number input lo
        cout<<"enter a number : ";
        cin>>a[i];
    }
    for(int i= n-1;i>=0;i--){ //print karo reverse no.
        cout<<a[i]<<" ";

    }
}