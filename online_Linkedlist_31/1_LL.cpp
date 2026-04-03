#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node * next;

    node(int d){
        data=d;
        next=NULL; /// we always null in pointer garbage nhi chodte


    }
};
int main()
{
    node a(1); 
    node b(2);
    node c(3);

    a.next=&b;
    b.next=&c;

    node* head=&a;

    node*tail=&c; 
    /*
    node * tail;
    tail=&c;
    */


    return 0;
}