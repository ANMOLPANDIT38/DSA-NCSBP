#include<iostream>
using namespace std;

// int fact(int n){
//     // base case
//     if(n==0){
//         return 1;
//     }
//     // recursive equation --> fact(n)=n*fact(n-1)
//     int smaller=fact(n-1); //fucntion calling itself(Assumption)
//     int bigger= n*smaller;
//     return bigger;
// }

int fact(int n){
    // base case
    if(n==0){
        return 1;
    }
    // recursive equation --> fact(n)=n*fact(n-1)
    
    return fact(n-1)*n;
}

int main()
{
    cout<<fact(5);
    return 0;
}