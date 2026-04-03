#include <iostream>
using namespace std;
//callbyvalue
void update(int n){
    n=n+1;
}
//refernce variable hai
void updateByRef(int &n){
    n=n+1;
}
int main(){

    int a=1;
    cout<<"a before"<<a<<endl;

    updateByRef(a);
    cout<<"a after"<<a<<endl;

    return 0;
}