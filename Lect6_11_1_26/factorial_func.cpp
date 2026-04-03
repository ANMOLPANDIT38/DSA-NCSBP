#include <iostream>
using namespace std;


int factorial(int n){
    int ans=1;
    for(int i=n;i>=1;i--){
        ans=ans*i; //multiple all the values of i from [i,n]in the ans bucket
    }
    return ans;
}

int ncr(int n, int r){
    int ans=factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    cout<<factorial(n)<<" ";
    
    cout<<ncr(5,2);
    return 0;
}