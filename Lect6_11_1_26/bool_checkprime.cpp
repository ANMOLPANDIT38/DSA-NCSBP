#include <iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){

    int n;
    cin>>n;
    bool ans = checkPrime(n);
    if(ans==true){
        cout<<"prime";
    }
    else{
    cout<<"not prime";
    }
    return 0;
}