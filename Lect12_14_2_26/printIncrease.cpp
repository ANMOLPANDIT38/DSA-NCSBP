#include<iostream>
using namespace std;

void printnIncrease(int i,int n){

    if(i==n+1){
        return;
    }
    cout<<i<<" ";
    printnIncrease(i+1,n);
}
int main()
{
    printnIncrease(1,5);
    return 0;
}