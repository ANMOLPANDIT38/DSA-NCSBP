#include <iostream>
using namespace std;

int findFact(int N){
    int ans=1;
    for(int i=N;i>=1;i--){
        ans=ans*i;
    }
    return ans;
}
int ans1=0;
int calcNCR(int N ,int R){
    ans1=findFact(N)/(findFact(R) * findFact(N-R));
    return ans1;
}

int main(){

    //factorial 
    int n,r;
    cin>>n;
    cout<<findFact(n);
    cout<<endl;
    cout<<calcNCR(5,2);
    return 0;
}