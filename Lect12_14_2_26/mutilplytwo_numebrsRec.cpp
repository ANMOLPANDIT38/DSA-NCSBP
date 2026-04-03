#include<iostream>
using namespace std;

int  multiply(int a,int b){
    // base case 
    if(b==0) return 0; //kisi number ke sath 0 se multiply tho zero hi aayega 
    
    // recusrive case 
    return a+ multiply(a,b-1);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b);
    return 0;
}