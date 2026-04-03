#include <iostream>
using namespace std;

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
int sum=0;
int arr,i;
int SumArray(int arr[],int n){
    for( i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[]={2,3,4,5,6};
    int n= sizeof(arr)/sizeof(int);
    // printArray(arr,n);
    cout<<endl;
    cout<<SumArray(arr,n);
    return 0;
}