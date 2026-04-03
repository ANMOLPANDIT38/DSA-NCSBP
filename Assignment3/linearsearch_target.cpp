#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cin>>target;
    int ansi=-1;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            ansi=i; 
            break; 
        }
    }
    
    cout<<ansi;

    return 0;
}