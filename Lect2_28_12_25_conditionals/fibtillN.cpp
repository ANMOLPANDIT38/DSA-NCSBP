#include <iostream>
using namespace std;
int main(){
    
    int N;
    cout<< "fib till to n numbers print"<<" ";
    cin>>N;
    int a =0;
    int b=1;
    int c=a+b;
    while(c<=N){
        cout<<c<<" ";

        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}