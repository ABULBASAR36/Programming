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

void insertHead(Node* &head, int d) 
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void _delete(Node *&head, int n) {
    if (head == nullptr) {
        cout << "Underflow: List is empty." << endl;
        return;
    }

   
    if (head->data == n) {
        Node* temp = head;  
        head = head->next;  
        delete temp;       
        return;
    }

    Node *tmp = head;
    while (tmp->next != nullptr) {
        if (tmp->next->data == n) {
            Node* nodeToDelete = tmp->next; 
            tmp->next = tmp->next->next;     
            delete nodeToDelete;               
            return;
        }
        tmp = tmp->next;
    }
    
    cout << "Item doesn't exist." << endl; 
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

    cout << "Before deleting: ";
    print(head);
    
    cout << "Insert the node which to delete:\n";
    int n;
    cin >> n;
    _delete(head, n);
    
    cout << "After deleting: ";
    print(head);

    return 0;
}
