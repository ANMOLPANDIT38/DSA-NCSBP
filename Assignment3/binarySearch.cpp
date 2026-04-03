#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;

    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            ans= mid;
            break;
        }
        else if(key>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;

    return 0;
}