#include<iostream>
using namespace std;

void max_freq(char s[]){
    int i=0;
    int max=0;
    char current;
    while(s[i]!='\0'){
         int cnt=1;
        while(s[i]==s[i+1]){
             current=s[i];
            cnt++;
            i++;
        }
        if(cnt>max){
            max=cnt;
        }
        i++;
    }
    cout<<current;
}

int main()
{
    char s[100];
    cin>>s;

    max_freq(s);
    return 0;
}