#include <iostream>
using namespace std;
int main(){

    int a[100];
    int n,i;
    cin>>n;
    int key;
    cin>>key;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=0;
    for(i=0;i<n;i++){
        if(a[i]==key){
            cout<<i;
            flag=1;
            break;
        }
        
    }
    if(flag==0){
    cout<<"-1"<<endl;    
    }


    
    // int a[5];
    // int n;
    // cin>>n;
    // int i;
    // int key=3;
    // for(i=0;i<n;i++){
    //     cin>>a[i];
    //     cout<<" ";
    // }
    
    // //for array printing 
    // for(i=0;i<n;i++){
    //     if(a[i]==key){
    //      cout<<"key found :"<<i;
    //     }
    // }
    
    

    return 0;
}