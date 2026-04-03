#include <iostream>
#include <cmath>
using namespace std;
int main(){

    //square pyramid
    int n;
    cin>>n;
    int r,c;
    r=1;
    while(r<=n){
        c=1;
        int val=1;
        while(c<=r){
            cout<<pow(val,2)<<" ";
            val++;
            c++;
        }
        cout<<endl;
        r++;
    }
    return 0;
}