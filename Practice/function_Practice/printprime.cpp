#include <iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            //not prime
            return false;
        }
    }
    //prime
    return true;
}
void printPrime(int n){
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    printPrime(n);

    return 0;
}