#include <iostream>
using namespace std;
int main(){
    //if else ki jgha ham swithc use kar skte hai 
    // switch m break lagna compulsory and default likhna not  compulsory
    char ch='e';
    switch(ch){
        case 'N':
        cout<<"North";
        break;
        case 'E':
        cout<<"east";
        break;
        case 'W':
        cout<<"west";
        break;
        case 'S':
        cout<<"South";
        break;
        default :
        cout<<"not valid";
    }
    return 0;
}