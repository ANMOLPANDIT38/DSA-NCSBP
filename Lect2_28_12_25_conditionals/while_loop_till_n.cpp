#include <iostream>
// while--> initialization -->condition check-->updation 
using namespace std;
int main (){
    int n;
    
    cout<<"enter  n value :";
    cin >>n;
    int i=1;
    while(i<=n){
    cout<<i<<' ';
        i=i+1;
    }
    return 0;
}