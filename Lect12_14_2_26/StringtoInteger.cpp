#include<iostream>
#include <cstring>
using namespace std;

int stringtoInt(char* a,int n){
    if(n==0){
        return 0;
    }
    int digit=a[n-1]-'0';
    int chotiProblem=stringtoInt(a,n-1);
    return chotiProblem*10+digit;
}
int main()
{
    char a[]="1234";
    int ans=stringtoInt(a,strlen(a));
    cout<<ans<<endl;
    return 0;
}