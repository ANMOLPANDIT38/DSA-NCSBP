#include <iostream>
#include <climits>
using namespace std;

int maxValue(int a[],int n){
    int i=0;
    int ans=INT_MIN;
    while(i<=n){
        if(a[i]>ans){
            ans=a[i];
        }
        i++;

    }
    cout<<ans;
    return 0;
}
int main(){
    // INT MAX=2^31-1
    // INT_MIN=-2^31
    int a[10000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    maxValue(a,n);

    return 0;
}