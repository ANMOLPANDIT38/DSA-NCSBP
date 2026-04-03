#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result =0;
    int multiplier=1;
    while(n>0){
        int ld=n%10;
        if(ld==0){
            ld=5;
        }

        result =result+ld*multiplier;
        multiplier=multiplier*10;
        cout<<multiplier<<" ";
        n=n/10;
    }
    cout<<result;
    return 0;
}