#include<iostream>
using namespace std;

// int fib(int n){
//     // base case 
//     if(n==0 or n==1){
//         return n;
//     }

//     // recursive case :fibo(n)=fib(n-1)+fib(n-2)
//     int smaller1=fib(n-1); //pure assumption
//     int smaller2=fib(n-2); //pure assumption
//     int bigger =smaller1+smaller2; 
//     return bigger;

// }
int fib(int n){
    // base case 
    if(n==0 or n==1){
        return n;
    }
    // recursive case :fibo(n)=fib(n-1)+fib(n-2)
    return fib(n-1)+fib(n-2);
}


int main()
{
    cout<<fib(4)<<endl; 
    return 0;
}