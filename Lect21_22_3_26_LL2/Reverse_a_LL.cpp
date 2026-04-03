#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

void insertAtEnd(node* &head, node* &tail, int data) {
    node* n = new node(data);
    if (head == NULL) {
        head = tail = n;
    } else {
        tail->next = n;
        tail = n;
    }
}

void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << "NULL\n";
}

void reverseLL(node* &head, node* &tail) {
    node* p = NULL;
    node* c = head;
    node* n = NULL;

    while (c != NULL) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    swap(head, tail);
}

int main() {
    node *head, *tail;
    head = tail = NULL;

    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 5);

    printLL(head);
    reverseLL(head, tail);
    printLL(head);

    return 0;
}