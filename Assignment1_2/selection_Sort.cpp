#include <iostream>
using namespace std;
int main(){

    int a[]={5,3,1,2,4,8,0,-7};
    int n=sizeof(a)/sizeof(int);
    // 5 hai tho 4 baar loop chlega 
    for(int i=0;i<=n-1;i++){
        //to find the minimum index value 
        //assume mi=i; 
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]){
                minIndex=j;
            }
        }
        //agr mimimum index milgya tho swap kar do
        swap(a[i],a[minIndex]);
    }
    //print the array
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}