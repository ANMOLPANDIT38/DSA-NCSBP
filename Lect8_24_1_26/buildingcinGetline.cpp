#include <iostream>
using namespace std;
int main(){

    // char ch;
    // cin>>ch;
    // if(ch=='\n' or ch=='\t' or ch==' '){
    //     cout<<"you entered whitespace ";
    // }
    // else{
    //     cout<<"not a whitespace char";
    // }


    //using cin

    // char ch1;
    // cin>>ch1;
    // while(ch1!='$'){
    //     cout<<ch1;
    //     cin>>ch1; // cin -- ignore the ' ' whitespaces from input
    // }


    //using cinget 
    
    char ch2;
    ch2=cin.get();
    while(ch2!='$'){
        cout<<ch2;
        ch2=cin.get();  
    }



    
    return 0;
}