#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    int ansi=0;
    int ansj=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(sum>ans){
                ans=sum;
                ansi=i;
                ansj=j;
                
            
            }
        }
        
    }
    cout<<ans<<" "<<ansi<<" " <<ansj;
    
   
    return 0;
}