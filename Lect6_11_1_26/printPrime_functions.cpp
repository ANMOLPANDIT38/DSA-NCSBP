#include <iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<=n-1;i++){
        cout <<n<<" "<<i<<endl;
        if(n%i==0){
            return false;
        }
    }
    return true;

}

void PrintPrime(int n){
    for(int i=2;i<=n;i++)
    {//if checkPrime(i) retruns true print i ,else ignore it
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}
int main(){

    int n;
    cin>>n;
    PrintPrime(n);
    return 0;
}