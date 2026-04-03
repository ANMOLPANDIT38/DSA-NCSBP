#include <iostream>
using namespace std;
int main(){

    char a[100];
    // cin>>a;  //using cin we cannot take white space character ka input 
    // cout<<a<<endl;

    //agr mujhe chiaye pura ruke na tho cingetline use karo
     char b[100];
    // cin.getline(b,20); 
    //arguments --> (character_array,no.of buckets,delimiter_character)
    //delimiter mtlb jha rukna hai ab --> by default '\n' hota hai 
    cin.getline(b,20,'&');
    //20 --> bta rha ki kitne no. inputs tumhe print karvane hia 
    cout<<b<<endl;
    return 0;
}