#include<iostream>
#include<cstring>
using namespace std;

void append(char *b,char *a){

    int i=strlen(a);
    int j=0;
    while(j<=strlen(b)){

        a[i]=b[j];
        i++;
        j++;
    }
}
int main()
{
    char a[8]="hi";
    char b[6]="world";
    append(b,a);
    cout<<a;

    return 0;
}