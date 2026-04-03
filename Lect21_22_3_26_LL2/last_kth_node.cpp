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

node* kthFromLast(node* head, int k) {
    node* slow = head;
    node* fast = head;

    for(int i = 0; i < k; i++) {
        if(fast == NULL) return NULL;
        fast = fast->next;
    }

    while(fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
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

    int k;
    cin >> k;

    node* ans = kthFromLast(head, k);

    if(ans != NULL) cout << ans->data;
    else cout << "Invalid";
    printLL(head);
    return 0;
}