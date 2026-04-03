#include <iostream>
using namespace std;
int n,i;
bool checkPrime(int n){
    for(i=2;i<n;i++){
        if(n%i==0){
            //not prime
            return false;
        }
    }
    //prime
    return true;
}
int main(){

    bool ans=checkPrime(83);

    if(ans==true){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;

} 