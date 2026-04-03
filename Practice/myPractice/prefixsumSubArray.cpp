#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int ans=INT_MIN;
    int ansi,ansj=0;
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    int prefx[1000];
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        prefx[i]=sum;
    }

    for(int i=0;i<n;i++){
        cout<<prefx[i]<<" ";
    }
    cout<<endl;
    // for finding sub array of maximum sum
    for(int i=0;i<n;i++){
        int sum1=0;
        for(int j=0;j<n;j++){
            if(i-1>=0){
                sum1=prefx[j]-prefx[i-1];
            }
            else{
                sum1=prefx[j];
            }

            if(sum1>ans){
                ans=sum1;
                ansi=i;
                ansj=j;
            }
        }
        
    }

    cout<<ans<<" "<<ansi<<" "<<ansj;
    cout<<endl;
    
    for(int i= ansi;i<=ansj;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}