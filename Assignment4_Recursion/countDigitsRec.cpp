#include<iostream>
using namespace std;

int countdigit(long long n){
// base case 
if(n==0) return 0;

// recursive case 

long long ld=n%10;

return 1+countdigit(n/10);
}
int main()
{
    long long n;
    cin>>n;
    cout<<countdigit(n);
    return 0;
}