#include <iostream>
using namespace std;
int main(){

    // method -1 use arithemetic operations 
    int no;
    cin>>no;
    int cnt=0;
    for(;no>0;no=no>>1){
        if((no&1)==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    
    return 0;
}