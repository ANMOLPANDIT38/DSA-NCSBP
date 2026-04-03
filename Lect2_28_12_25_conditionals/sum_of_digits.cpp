#include <iostream>
using namespace std;
int main(){

    int n=4255;
    int sum=0;
    int ld;
    while(n>0){
        ld=n%10;
        sum=sum+ld;
        n/=10;
    }
    cout<<sum;
    return 0;
}