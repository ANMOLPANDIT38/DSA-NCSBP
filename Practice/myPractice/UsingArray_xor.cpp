#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    // sabse phele zero ke sath xor jarur karna 
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    while(i<n){
        ans=ans^a[i];
        i++;
    }
    cout<<ans;
    return 0;
}