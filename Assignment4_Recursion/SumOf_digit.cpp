#include<iostream>
using namespace std;

int sumDigit(lon n){
// base case 
if(n==0){
    return 0;
}

// recursive case
    int ld=n%10;
    return ld+sumDigit(n/10);
}
int main()
{
    int n;
    cin>>n;
    if (n < 0) n = -n;
    cout<<sumDigit(n);
    return 0;
}
