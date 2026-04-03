#include <iostream>
using namespace std;

int printPairs(int arr[],int N){
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            if(arr[i]+arr[j]==N){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }

}

int main(){
int a[]={4,3,1,6,2,5};
int n=sizeof(a)/sizeof(int);

printPairs(a,n);
    return 0;
}