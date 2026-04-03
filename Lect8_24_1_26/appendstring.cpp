#include <iostream>
#include <cstring>
using namespace std;

void append(char *b, char*a){
    int i=strlen(a);
    int j=0;
    while(j<=strlen(b)){
        a[i]=b[j];
        i++;
        j++;
    }
    
}
 int main (){
char a[100]="hello";
char b[]="world";  //b shoudl have enough sspace to store a 

append(b,a);
cout<<a;

    return 0;

 }