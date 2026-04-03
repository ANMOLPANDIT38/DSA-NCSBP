#include<iostream>
#include<cstring>

using namespace std;

/////BLUEPRINT///////
class car{
public: 
    char name[100];
    int price;
    int model;

    void print(){
    cout<<name<<endl;
    cout<<price<<endl;
    cout<<model<<endl;
}

};
//////BLUEPRINT///////


int main()
{
    car A; //A is an object of class car 
    strcpy(A.name,"BMW");
    A.price=10;
    A.model=2000;

    car B; //B is an object of class car 
    strcpy(B.name,"Audi");
    B.price=150;
    B.model=2020;

    A.print();
    B.print();
    

    return 0;
}