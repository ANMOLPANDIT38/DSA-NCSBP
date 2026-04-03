#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int r=1;
    int c;
    // row ke liye 
    while(r<=n){
        // print r time numebr
        c=1;
        while(c<=r){
            cout<<c <<" ";
            c++;
        }
        cout<<endl;
        r++;
    }
    return 0;
}