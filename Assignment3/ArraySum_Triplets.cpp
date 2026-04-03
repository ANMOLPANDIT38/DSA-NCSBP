#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
     
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;

    sort(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int currentSum=a[i]+a[j]+a[k];
                if(currentSum==target){
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                }
            }
        }
    }
    return 0;
}