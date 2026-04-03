#include <iostream>
#include <cstring>
using namespace std;
int main(){

    
    char a[]="hello";
    int len=strlen(a);

    //1st approach of reverse 
    int i=0,j=len-1;
    while(i<j){

        swap(a[i],a[j]);
            i++;
            j--;
        
    }
    cout<<a<<endl;

    ///2nd approach of reverse 
    for(int i=0;i<len/2;i++){
        swap(a[i],a[len-i-1]);
    }
    cout<<a<<endl;
    return 0;

}