#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int r,c;
    //row ke liye 
    for (r=1;r<=n;r++){
        //spaces
        for(c=1;c<=n-r;c++){
            //yha glti kar rha tha double space ayega 
            cout<<"  ";
        }
        //star ke liye 
        for(c=1;c<=r;c++){
            cout<<"* ";
            
        }
        cout<<endl;

    }
    return 0;
}