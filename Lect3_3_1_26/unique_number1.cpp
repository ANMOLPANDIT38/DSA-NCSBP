#include <iostream>
using namespace std;
int main(){


    int n;
    cout<<"enter a number";
    cin>>n;
    int ans=0;
    int i;
    for(i=0;i<n;i++){
        int no; //yha dikkat aati hai 
        cin>>no;
        ans=ans^no; 
    }
    cout<<"this is the unique numebr"<<ans<<endl;
    return 0;
}