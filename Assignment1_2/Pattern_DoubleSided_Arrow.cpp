#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int nd=(n+1)/2;
    int r,c;
    r=1;
    while(r<=n){
        //spaces
        c=1;
        while(c<=2*(nd-r)){
            cout<<"- ";
            c++;
        }

        //number
        c=1;
        int value=1;
        while(c<=r){
            cout<<value<<" ";
            c++;
            value++;
        }
        //spaces
        int c=1;
        while(c<=r-1){
            cout<<"- ";
            c++;
        }
        cout<<endl;
        r++;
    }

    return 0;
}