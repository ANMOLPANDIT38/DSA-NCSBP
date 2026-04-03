#include<iostream>
using namespace std;



void reverseArray(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(i==j){
            cout<<a[i];
        }
        swap(a[i],a[j]);
        i++;
        j--;
        
    }
}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}