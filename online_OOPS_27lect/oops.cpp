#include<iostream>
#include<cstring>

using namespace std;

/////BLUEPRINT///////
class car{
public: 
    char name[100];
    int price;
    int model;
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

    cout<<A.name<<endl;
    cout<<A.price<<endl;
    cout<<A.model<<endl;

    return 0;
}