#include <iostream>
using namespace std;

void inputchar(char *a,int s, char delimiter ='\n'){
    char ch;
    ch=cin.get();
    int i=0;
    //s-1 isliye chlya quki ek byte bhi null== \0 hia 
    while(i<s-1 and ch!=delimiter){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}

int main(){
 char a[100];
 inputchar(a,100);
cout<<a<<endl;

    return 0;
}