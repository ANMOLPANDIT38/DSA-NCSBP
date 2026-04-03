#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i=2;
    while(i<=n-1){
       if(n%i==0){ //n ko i se divide karna hai na ki i ko n se 
        cout<<"primenot";
        return 0; //exit , pata lag gya prime nhi hai tho return kar do end karo
       } 
       i++;      
    }
    
    cout<<"prime";
    
    return 0;
}