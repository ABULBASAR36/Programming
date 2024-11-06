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

void find_node(Node* &node, int n) {
    Node* tmp = node;
    
    if (node->data == n) {
        cout << "loc = NULL;" << endl;
        return;
    }
    
    while (tmp->next != nullptr && tmp->next->data != n) {
        tmp = tmp->next;
    }
    
    if (tmp->next == nullptr) {
        cout << "item doesn't exist;" << endl;
    } else {
        cout << "preceding node: " << tmp->data << "\n";
        cout << "location: " << tmp->next << endl;
    }
}

void print(Node* &head) {
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
    insertHead(head, 13);
    insertHead(head, 18);
    
    print(head);
    
    cout << "Insert the node value to find its preceding location:\n";
    int n;
    cin >> n;
    find_node(head, n);

    return 0;
}
