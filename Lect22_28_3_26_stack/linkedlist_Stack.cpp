#include<iostream>
#include<vector>
using namespace std;

// using linkdedlist  to implement stack
class node {
public:
	int data;
	node* next;

	// Constructor
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Stack{
public:
    node *head;

    Stack(){
        head=NULL;
    }
    void push(int d){
        node *n=new node(d);
        n->next=head;
        head=n;
    }

    void pop(){
        node * temp=head;
        head=head->next;
        delete temp;
    }
    bool empty(){
        return head==NULL;
    }
    int top(){
        return head->data;
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