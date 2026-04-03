#include <iostream>
using namespace std;

int add(int a,int b,int c=0){ //idhr zero kar do
    return a+b+c;
}
int main(){
    cout<<add(10,20,30)<<endl;
    //  cout<<add(10,20)<<endl; // agr parameter m value nhi deta tho arguemtn m jake initialize zero kar do 
    //   cout<<add(10,20)<<endl;

    return 0;
}