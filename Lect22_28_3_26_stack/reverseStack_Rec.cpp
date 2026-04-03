#include<iostream>
#include<vector>
using namespace std;

// using vector to implement stack
void reverseStack(){
    
}
int main()
{
    stack<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);

    reverseStack();
    while(!v.empty()){
        cout<<v.top()<<endl;
        v.pop();
    }
    return 0;
}