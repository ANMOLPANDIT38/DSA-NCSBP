#include <iostream>
using namespace std;
int main(){
// check prime with break statement

    int n;
    // tell n is prime or not 
    cin>>n;
    int i=2;
    while(i<=n-1){
        if(n%i==0){
            break;
            }
            i++;
        }
        if(i==n){
            cout<<n<<"prime ";
  
        }
        else{
            cout<<n<<"not prime ";
        }
       
       i++;      
    
    
    
    
    return 0;
}