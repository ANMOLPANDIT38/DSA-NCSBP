#include<iostream>
#include <vector>
using namespace std;

class Vector{
public:
    int *a;
    int cs ,ts;
    Vector(int s=4){
        a=new int [s];
        cs=0;
        ts=s;
    }

    void push_back(int d){
        if(cs==ts){
            int *old_a=a;
            int old_ts=ts;
            a=new int[2*ts];
            ts*=2;
            for(int i=0;i<old_ts;i++){
                a[i]=old_a[i];
            }
            delete[]old_a;
        }
        a[cs]=d;
        cs++;
    }

    void pop_back(){
        if(cs>0){
            cs--;
        }
    }
    int size(){
        return cs;
    }
    int capacity(){
        return ts;
    }
    // operator overloading
    int &operator[](int indx){
        return a[indx];
    }
};
int main()
{
    Vector v;
    for(int i=0;i<5;i++){
        v.push_back(i);
    }

    cout<<v.size()<<" "<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}