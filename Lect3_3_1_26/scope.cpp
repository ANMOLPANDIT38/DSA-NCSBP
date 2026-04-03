#include <iostream>
using namespace std;
// global scope
int a =-1000;
int main(){

    int a=1;
    if(a>0){
        int b=10;
        int a =100;
        a++;
        cout<<a<<endl;
        cout<<b<<endl;

        // scope resolution operator :: 
        //global space se bucket a ko access karo
        cout<<::a<<endl;
        ::a=::a+1;

    }
    cout<<::a<<endl;

    return 0;
}