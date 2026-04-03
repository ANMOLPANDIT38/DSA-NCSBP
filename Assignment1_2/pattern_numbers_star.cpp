#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int r=1;
    while(r<=n){
        // numbers
        int c=1;
        while(c<=r){
            cout<<c;

            c++;
        }
        //stars
        c=1;
        while(c<=n-r){
            cout<<"*";
            c++;
        }

        cout<<endl;
        r++;
    }

    return 0;
}