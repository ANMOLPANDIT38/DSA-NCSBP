#include<iostream>
#include <cstring>
using namespace std;

void compressString(char s[] ){
    int i=0;
    while(s[i]!='\0'){
        char current =s[i];
        int count =1;

        while(s[i]==s[i+1]){
            count++;
            i++;
        }
        cout<<current<<count;
        i++;
    }
}

int main()
{
    char s[1000];
    cin>>s;
    compressString(s);

    return 0;
}