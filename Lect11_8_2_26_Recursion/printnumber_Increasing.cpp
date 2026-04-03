#include<iostream>
using namespace std;

// print increasing

void printinc(int n){

// base case 
if(n==0) return;
// recursive case 
printinc(n-1);
cout<<n<<" ";
}

int main()
{
    printinc(5);

    return 0;
}