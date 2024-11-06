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

void insertTail(Node* &tail, int d) 
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head) 
{
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void search(Node* node, int key) 
{
    while (node != NULL) 
    {
        if (node->data == key) 
        {
            cout << "Found" << endl;
            return;
        }
        node = node->next;
    }
    cout << "Not found" << endl;
}

int main() 
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
     
    insertTail(tail, 12);
    insertTail(tail, 15);

    cout << "Linked list: ";
    print(head);

    cout << "Enter the node to be found: ";
    int n;
    cin >> n;
    search(head, n);

    return 0;
}
