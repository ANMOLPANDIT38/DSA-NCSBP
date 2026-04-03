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

    int n;
    cin>>n;
    bool ans=checkPrime(n);

    if(ans==true){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;

} 