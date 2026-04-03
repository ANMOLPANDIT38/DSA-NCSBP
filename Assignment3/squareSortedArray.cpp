#include<iostream>
using namespace std;
int main()
{

    int nums[10000];
    int  n;
    if (!(cin >> n) || n <= 0) {
        // Case: n is 0 or input failed
        return 0; 
    }
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
        nums[i]=nums[i]*nums[i];
    }

    for(int   i=0;i<n;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[mi]){
                mi=j;
            }
        }
        swap(nums[i],nums[mi]);
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}