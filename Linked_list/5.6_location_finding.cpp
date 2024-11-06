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

Node* location_find(Node* &head, int n) {
    Node* tmp = head;
    while (tmp != nullptr && tmp->data != n) {
        tmp = tmp->next;
    }
    return tmp; // Return the node itself if found
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

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    insertHead(head, 29);
    insertHead(head, 20);
    print(head);

    //cout << "Enter the node data to be found:\n";
    int n;
    cin >> n;

    Node* foundNode = location_find(head, n);
    if (foundNode != nullptr) 
    {
        cout << "Node found with data: " << foundNode->data << endl;
    } else {
        cout << "Node with data " << n << " not found." << endl;
    }

    return 0;
}
