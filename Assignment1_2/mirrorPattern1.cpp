#include <iostream>
using namespace std;
int main(){

    int N;
    cin>>N;
    int nd;
    nd=(N+1/2);
    int r,c;
    for(r=1;r<=nd;r++){
        for(c=1;c<=nd-r;c++){
            cout<<"  ";
        }
        for(c=1;c<=2*r-1;c++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // pattern mirroring 
    // mirrroing ke liye bass outer lopp ulta chla do  rk row kam karke 
    for(r=nd-1;r>=1;r--){ 
        for(c=1;c<=nd-r;c++){
            cout<<"  "; 
        }
        for(c=1;c<=2*r-1;c++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}