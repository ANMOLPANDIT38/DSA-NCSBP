#include <iostream>
using namespace std;

int main(){
    int i,j;
    int a[]={5,4,3,2,1,-1,-4};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<=n-1;i++){ 
        //j<n-i-1 -->(isme jo sort hai usko waps se compare nhi karega)
        //or 
        //j<=n-2 --> (jo shi sort usko bhi compare kar rha hai )
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    //for printing the  array
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}