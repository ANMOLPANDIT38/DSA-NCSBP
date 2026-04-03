#include <iostream>
#include <climits>
using namespace std;
int main (){

    int a[100];
    int n,i;
    cin>>n;
    int max=INT_MIN;

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];   
        }
    }
    cout<<max;
    

    return 0;
}