#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) 
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertHead(Node* &head, int d) 
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertTail(Node* &tail, int d) 
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp; 
}

void insertPosition(Node* &tail, Node* &head, int position, int d) 
{
    if (position == 1) 
    {
        insertHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1; 
    while (cnt < position - 1 ) 
    {
        temp = temp->next;
        cnt++;
    }

    // If inserting at the end
    if (temp->next == NULL)
    {
        insertTail(tail, d);
        return;
    }

    // Insert in the middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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

int main() 
{
    Node* node1 = new Node(10);//instance
    Node* head = node1;
    Node* tail = node1;

    insertTail(tail, 12);
    insertTail(tail, 15);
    print(head);

    insertPosition(tail, head, 2, 22);
    print(head);

    cout << "Head data: " << head->data << endl;
    cout << "Tail data: " << tail->data << endl;

    return 0;
}
