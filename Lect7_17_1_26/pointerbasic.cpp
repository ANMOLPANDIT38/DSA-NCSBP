#include <iostream>
using namespace std;
int main(){

    int a=1;
    float f=1.11;
    bool b =true;

    //pointers
    int *ap=&a; //initalization  -->bucket bante wqt time value dena


/*
int *ap; e
ap=&a;*/  //--> assignment -->already bani hue hucket mei value dena

    cout<<&a<<endl;
    cout<<sizeof(&a)<<endl;
    cout<<ap<<endl;
    cout<<&f<<endl;
    cout<<sizeof(&f)<<endl;
    cout<<&b<<endl;
    cout<<sizeof(&b)<<endl;
    //derefernce operator
    cout<<*(&a); 
    //pointer have never garbage value it 
    int *x,*y,*z;
    cout<<*x<<endl;

    return 0;
}