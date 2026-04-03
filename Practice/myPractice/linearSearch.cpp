#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin>>n;
    int target =5;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<arr[i]<<" "<<i;
        }
    }

    return 0;
}