#include <iostream>
using namespace std;
int main(){

    // method -1 use arithemetic operations 
    int no;
    int cnt=0;
    // cout<<cnt;
    for(cin>>no; no>0 ;no=no/2){
        int rem=no % 2;
        if(rem==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}