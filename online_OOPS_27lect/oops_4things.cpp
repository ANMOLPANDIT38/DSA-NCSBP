#include <iostream>
#include <cstring>

using namespace std;

/////BLUEPRINT///////
class car
{
public:
    char name[100];
    int price;
    int model;

    // defualt constructor
    car()
    {
        cout << "inside defualt constructor\n";
    }
    // parameterized constructor
    car(char *n, int p, int m)
    {
        cout << "inside paramterized  constructor-1\n";
        strcpy(name, n);
        price = p;
        model = m;
    }
    car(int p, int m, char *n)
    {
        cout << "inside paramterized  constructor-2\n";
        strcpy(name, n);
        price = p;
        model = m;
    }

    // copy constructor
    car(car &S)
    { // always pass by referece
        cout << "inside copy constructor-2\n";
        strcpy(name, S.name);
        price = S.price;
        model = S.model;
    }

    // copy assignment operator
    void operator=(car &S)
    {
        cout << "inside copy assignement operator\n";
        strcpy(name, S.name);
        price = S.price;
        model = S.model;
    }

    // destructor function 
    ~car(){
        cout<<"deleting car: "<<name<<endl;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "price: " << price << endl;
        cout << "model: " << model << endl;
    }
};
//////BLUEPRINT///////

int main()
{
    car A; // A is an object of class car
    strcpy(A.name, "BMW");
    A.price = 10;
    A.model = 2000;

    car B("Audi", 150, 2020);
    car C(150, 2022, "Maurti");
    // car B; //B is an object of class car
    // strcpy(B.name,"Audi");
    // B.price=150;
    // B.model=2020;

    // copy constructor-> to create new car using existing car
    // two ways to call copy constructor
    // 1.car A=B;
    // 2.car A(B);
    car D = A;
    
    //copy assignement operator 
    // D=C;

    A.print();
    B.print();
    C.print();
    D.print();

    return 0;
}