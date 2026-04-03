#include<iostream>
using namespace std;

int main(){
    // 2 se n tk no. print karnah ai
    int n;
    cin>>n;
    int i=2;
    while(i<=n){
        int j=2;
        // for checking prime to n tk 
        while(j<i){
            if(i%j==0){
                break;
            }
            j++;
        }
        if(j==i){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}