#include <iostream>
using namespace std;
int main(){

    
    int a[10];
    int n;
    cin>>n;
    int i;
    int largest =0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int posIndex;
    for(i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
            // yh index store karva le rha hu then print karva dunga baad m 
            posIndex=i; //to give the index value 
        }
    }
    cout<<largest<<" "<<posIndex;
    return 0;
}