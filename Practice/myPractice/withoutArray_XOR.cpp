#include<iostream>
using namespace std;
int main()
{
 
    int ans=0;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        ans=ans^temp;
    }
    cout<<ans;
    return 0;
}