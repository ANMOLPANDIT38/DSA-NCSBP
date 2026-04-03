#include <iostream>
using namespace std;
int main(){

    int n,c;
    cin>>n;
    int r=1;
    while(r<=n){
        // yh logic nhi likh paya m
        //space ka 
        int c = 1;
        while (c< r) {
            cout << " ";
            c++;
        }
        c=n-r+1;
        while(c>0){
            cout<<"* ";
            c--;
            
        }
        cout<<endl;
        r++;
        
    }
    cout<<endl;
    return 0;
}