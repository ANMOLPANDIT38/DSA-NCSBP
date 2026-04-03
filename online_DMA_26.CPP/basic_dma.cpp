#include<iostream>
using namespace std;
int main()
{    
    int* a = new int ;
    *a=10;
    cout<<&a<<endl;
    cout<<*a<<endl;

    // this is a way to create memory in run time 
    int n=100;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}