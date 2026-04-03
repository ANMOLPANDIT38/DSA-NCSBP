#include <iostream>
using namespace std;
int main (){

    char ch;
    cin>>ch;
    // implicit case 
    if(ch>='A'&& ch<='Z'){
        // cout<<"upper case hai";  //1 thing 
        // char n=ch+32;  //2nd thing 
        // cout<<n<<endl;

        // explicit 
        cout<<(char)(ch+32)<<endl; // 3rd thing 
    }
    else{
        // cout<<"lower case hai ";   //1st thing
        //  char n=ch-32;             //2nd thing 
        // cout<<n<<endl;

        // explicit  
        cout<<(char)(ch-32)<<endl;  //3rd thing 
    }
    return 0;
}