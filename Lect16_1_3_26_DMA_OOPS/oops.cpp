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
 };  // semicolon lagnaa compulsory

int main()
{
    car A;
    // to access data memebrs we use dot operator 
    // A.name ="Maruti"  eshe nhi kar stke 

    strcpy(A.name,"Maruti");
    A.price=100;
    A.model=2020;

    // print data of car A
    cout<<"Name : "<<A.name<<endl;
    cout<<"Price :"<<A.price<<endl;
    cout<<"Model :"<<A.model<<endl<<endl;

    // creating another car 
    strcpy(A.name,"tata");
    A.price=700;
    A.model=2000;

    cout<<"Name : "<<A.name<<endl;
    cout<<"Price :"<<A.price<<endl;
    cout<<"Model :"<<A.model<<endl<<endl;

    return 0;
}