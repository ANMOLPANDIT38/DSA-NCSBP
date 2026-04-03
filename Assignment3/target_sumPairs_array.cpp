#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    
    int ansi,ansj;
    int i=0;
    int j=n-1;
    while(i<j){
        int sum=a[i]+a[j];
        if(sum==target){
            ansi=a[i];
            ansj=a[j];
            cout<<ansi<<" and "<<ansj<<endl;
            i++;
            j--;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    
    
    return 0;
}