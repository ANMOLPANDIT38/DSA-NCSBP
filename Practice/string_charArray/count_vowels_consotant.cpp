#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    string s ="Himanshu";
    int vowels=0;
    int consonants=0;

    for(int i=0;i<s.length();i++){
        char ch=tolower(s[i]);
        if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'){
            vowels++;
        }
        else if( ch>='a'&& ch<='z'){
            consonants++;
        }
    }
    cout<<vowels<<" "<< consonants<<endl;
    return 0;
}