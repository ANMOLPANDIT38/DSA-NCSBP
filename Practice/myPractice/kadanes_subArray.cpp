#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int ans=INT_MIN;
    int arr[1000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bool isPositive=false;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            isPositive=true;
            break;
        }
    }
    if(isPositive==true){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum<0){
                sum=0;
            }
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }


    return 0;
}
