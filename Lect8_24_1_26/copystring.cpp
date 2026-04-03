#include <iostream>
#include <cstring>
using namespace std;

void copy(char *b, char*a){
    int len=strlen(a);
    for(int i=0;i<=len;i++){
        b[i]=a[i];
    }
}
 int main (){
char a[]="hi you";
char b[100];  //b shoudl have enough sspace to store a 

copy(b,a);
cout<<b;
//strcpy(b,a);
    return 0;

 }