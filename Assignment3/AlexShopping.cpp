#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int price[10000];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }

    int q;
    cin>>q;

    int amount,k;
    
    for(int i=0;i<q;i++){
        cin>>amount>>k;
        int count=0;
        for(int j=0;j<n;j++){
            if(amount%price[j]==0){
                count++;
            }
        }
        if(count>=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}