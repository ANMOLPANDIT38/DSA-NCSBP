#include <iostream>
using namespace std;
int main(){

// print this 
    /*
    1
    23
    456
    78910
    */

    int n;
    cout<<"enter a n value to print the pattern : ";
    cin>>n;
    int r=1;

    int val=1;
    while(r<=n){
        int c=1;
        while(c<=r){
            cout<<val<<" ";
            
            val=val+1;
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
    
    return 0;
}