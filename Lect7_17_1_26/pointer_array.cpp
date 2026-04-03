#include <iostream>
using namespace std;
int main(){

int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(int);
cout<<"a :"<<a<<endl;
cout<<"&a :" <<&a[0]<<endl;

cout<<"a :"<<a+1<<endl;
cout<<"&a :" <<&a[1]<<endl;
    return 0;
}