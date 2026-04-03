#include <iostream>
using namespace std;
int length(char *a){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    //i is pointing at null character and its value would bethe length 
    return i;
}

int main(){

    char a[100];
    cin.getline(a,100);
    cout<<length(a);

    return 0;
}