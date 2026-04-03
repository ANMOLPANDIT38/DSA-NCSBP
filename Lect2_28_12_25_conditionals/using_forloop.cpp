#include<iostream>
using namespace std;

int main(){
    // 2 se n tk no. print karnah ai
    int n;
    cin>>n;
    int i,j;
    for(int i=2;i<=n; i++){
        // for checking prime to n tk 
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<" ";
        }
       
    }
    return 0;
}