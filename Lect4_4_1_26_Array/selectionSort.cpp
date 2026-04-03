#include <iostream>
using namespace std;

int main(){
    int a[1000];
    int n;
    cout<<"enter how many numbers :"<<" ";
    cin>>n;
    int i,j;

    // input value lena hai for using loop
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n-1;i++){
        int mi=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[mi]){
                mi=j;  
            }
        }
        swap(a[i],a[mi]);

    }

    cout<<"sorted array :  ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;

}