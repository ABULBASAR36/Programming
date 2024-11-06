#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void inserTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool search(Node* &head, int key) 
{
    Node* temp = head; // Use a separate pointer for traversal
    while (temp != NULL) { // Traverse the list
        if (temp->data == key)
            return true;
        // if(temp->data>key)
        // break;
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertHead(head, 29);
    insertHead(head, 20);
    inserTail(tail, 27);
    inserTail(tail, 16);
    print(head);

    int key = 16;
    if (search(head, key))
        cout << "Found " << key << endl;
    else
        cout << "Not Found " << key << endl;

    return 0;
}
