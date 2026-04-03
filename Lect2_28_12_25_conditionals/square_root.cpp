#include <iostream>
using namespace std;

int main (){

    // perfect square -- 4,9,16,25,36 etc (integer )

    int n;
    cin>>n;
    int i =0;
    while(i*i<=n){
        i=i+1;
    }
    i=i+1; //isliye quki increment ho gya tha woh value nhi chiaye thi isliye decreae kar diya 

    cout<<i<<endl;
    return 0;
}