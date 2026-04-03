#include<iostream>
using namespace std;

void decPrintN(int i,int n){

    if(i==n+1){
        return;
    }
    
    decPrintN(i+1,n);
    cout<<i<<" ";
}
int main()
{
    decPrintN(1,5);
    return 0;
}