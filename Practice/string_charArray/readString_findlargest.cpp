#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[1000];
    char largest[1000];
    int llen=0;

    int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        int len=strlen(a);
        if(len>llen){
            llen=len;
            strcpy(largest,a);
        }
    }
    cout<<largest<<endl;
    return 0;
}