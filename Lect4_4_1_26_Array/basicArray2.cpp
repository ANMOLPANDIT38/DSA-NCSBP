#include <iostream>
using namespace std;
int main(){

    
    int a[50];
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    //for array printing 
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}