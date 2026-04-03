#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int n;
    cin>>n;
    int temp;
    int i=0;
    while(i<n){
        cin>>temp;
        ans=ans^temp;
        i++;
    }
    cout<<ans;
    return 0;
}
