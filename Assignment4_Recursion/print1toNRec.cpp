#include<iostream>
using namespace std;


void print1ton(int n,int i){
    // base case 
    if(i==n+1){
        return ;
    }
    // recursive case
    cout<<i<<" ";
    print1ton(n,i+1);
    
}
int main()
{
    int n;
    cin>>n;
    print1ton(n,1);
    return 0;
}