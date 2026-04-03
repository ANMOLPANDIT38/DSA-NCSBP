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

node* mergeSortedLL(node* a, node* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;

    if (a->data < b->data) {
        a->next = mergeSortedLL(a->next, b);
        return a;
    } else {
        b->next = mergeSortedLL(a, b->next);
        return b;
    }
}

int main() {
    node *head, *tail, *head1, *tail1;
    head = tail = head1 = tail1 = NULL;

    // create a first sorted ll 
    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 8);

    // create a second sorted  ll 
    insertAtEnd(head1, tail1, 2);
    insertAtEnd(head1, tail1, 4);
    insertAtEnd(head1, tail1, 6);
    insertAtEnd(head1, tail1, 7);
    insertAtEnd(head1, tail1, 9);
    insertAtEnd(head1, tail1, 10);

    printLL(head);
    printLL(head1);

    node* newHead = mergeSortedLL(head, head1);
    printLL(newHead);

    return 0;
}