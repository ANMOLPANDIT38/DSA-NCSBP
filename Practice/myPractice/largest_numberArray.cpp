#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;

    int max=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max;

    return 0;
}