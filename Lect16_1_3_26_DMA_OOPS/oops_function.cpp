#include<iostream>
#include<cstring>
using namespace std;
// modern data type
class car {
    public: 
    // Data members -->uss class ke andr 
    // jo chie store karna cha rhe hai woh
    char name[100];
    int model;
    int price;

    void print(){
        cout<<"address : "<<this <<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Model :"<<model<<endl<<endl;
    }
 };  // semicolon lagnaa compulsory

int main()
{
    car A;
    cout<<"&A : "<<&A<<endl ;
    // to access data memebrs we use dot operator 
    // A.name ="Maruti"  eshe nhi kar stke 

    strcpy(A.name,"Maruti");
    A.price=100;
    A.model=2020;

    // print data of car A
    A.print();

    // creating another car 
    car B;
    cout<<"&B : "<<&B<<endl ;
    strcpy(B.name,"tata");
    B.price=700;
    B.model=2000;

    B.print();

    return 0;
}