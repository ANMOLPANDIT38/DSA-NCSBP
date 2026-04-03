#include<iostream>
#include<vector>
using namespace std;

// using vector to implement stack
class Stack{
public:
    vector<int>v;
    void push(int d){
        v.push_back(d);
    }
    void pop(){
        v.pop_back();
    }
    bool empty(){
        return v.size()==0;
    }
    int top(){
        return v[v.size()-1];
    }
};
int main()
{
    Stack v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);

    while(!v.empty()){
        cout<<v.top()<<endl;
        v.pop();
    }
    return 0;
}