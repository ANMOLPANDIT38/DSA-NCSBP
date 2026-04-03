#include <iostream>
using namespace std;

int countdigitsOccurence(int n,int digit)
{
    int rem;
    int count = 0;
    while (n > 0)
    {
        rem=n%10;
        if(rem==digit){
            count++;
        }
        n = n / 10;
        
    }
    return count;
}

int main (){

    int n;
    cin>>n;
    int digit;
    cin>>digit;
    cout<<countdigitsOccurence(n,digit);
    return 0;
}