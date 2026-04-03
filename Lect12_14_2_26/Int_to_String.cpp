#include<iostream>
using namespace std;

char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void intToString(int n){
    if(n==0){
        return ;
    }
    
    // intToString(n/10); //-> yha rkhne se starting se print hoga
    int lastdigit=n%10;
    cout<<a[lastdigit]<<" ";
    intToString(n/10); // -->yha rkhne se reverse print ho rha hai

}
int main()
{
    intToString(2048);
    return 0;
}