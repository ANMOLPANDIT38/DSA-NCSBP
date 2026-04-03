#include <iostream>
using namespace std;
int main (){

    char a[]={'a','b','c'};
    char b[]={'d','e','f'};
    //jab tk (\0 === null) ni mil jata tab tk print karta jayega 
    // character array ka address hota hai lekin jab ham print karte hai tho woh byte by byte print karta jata hai 
   //isliye ham null use karte hai 
    cout<<a <<endl; /// abc ␦@
    cout<<b<<endl;/// defabc ␦@ 
    
    char c[]="hii"; 
    cout<<c<<endl;;
    return 0;
}