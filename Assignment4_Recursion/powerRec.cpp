#include<iostream>
using namespace std;

int power(long long x,long long n){
    if(n==0) return 1 ;

    return x*power(x,n-1);
}
int main()
{
    long long n,x;
    cin>>n>>x;
    cout<<power(n,x);
    return 0;
}
