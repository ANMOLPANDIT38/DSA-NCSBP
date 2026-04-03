#include<iostream>
using namespace std;

int sum(int n){

// base case 
if(n==1) return 1;

// recursive  case 
int chotiproblem=n-1;
int badiProblem=n;
badiProblem+chotiproblem;
return badiProblem;

}

// int sum(int n)
// {

//     // base case
//     if (n == 1)
//     {
//         return 1;
//     }
//     // recursive  case
//     return n + sum(n - 1);
// }
int main()
{
    cout<<sum(5);
    return 0;
}