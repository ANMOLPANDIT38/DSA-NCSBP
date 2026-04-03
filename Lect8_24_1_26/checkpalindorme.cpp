#include <iostream>
#include <cString>
using namespace std;

//character array ke andr fucntion m  size dena is not needed
//we knoew tha character aaray ends at '\0' --> null character
bool isPalindorme(char *a){
    int i=0,j=strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}

int main(){

char a[100];
cin>>a;
cout<<isPalindorme(a);

    return 0;
}