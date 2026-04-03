#include <iostream>
#include <climits>
using namespace std;
int main(){

    int max=INT_MIN;
    int no;
    cin>>no;
    int i=1;
    while(i<=no){
        int n;
        cin>>n;
        if(n>=max){
            max=n;
        }
        i++;
    }
    cout<<max;


    return 0;
}