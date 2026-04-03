#include<iostream>
using namespace std;


void printnto1(int n,int i){
    // base case 
    if(i==n+1){
        return ;
    }
    // recursive case
    printnto1(n,i+1);
    cout<<i<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    printnto1(n,1);
    return 0;
}