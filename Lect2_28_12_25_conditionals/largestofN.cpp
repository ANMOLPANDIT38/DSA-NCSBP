#include <iostream>
#include <climits>
using namespace std;

int main(){
    // INT MAX=2^31-1
    // INT_MIN=-2^31
    int n;
    cout<<"enter how many digit to print ";
    cin>>n;
    int i=1;
    int ans=INT_MIN;
    while(i<=n){
        int x;
        cout<<"enter the numbers ";
        cin>>x;
        if(x>ans){
            ans=x;
        }
        i++;

    }
    cout<<ans;

    return 0;
}