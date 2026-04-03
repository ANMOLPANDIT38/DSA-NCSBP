#include<iostream>
using namespace std;
int main()

{   
    int a=2;
    cout<<a<<endl;
    a=a<<1;
    // agr ham left sfhit karte hai tho value multiply by 2 ho jati hai 
    cout<<a<<endl;

    int b=16;
    cout<<b<<endl;
    // rigth shift karne se divide by 2 ho jatah hai value
    b=b>>1;
    cout<<b<<endl;
    return 0;
}
