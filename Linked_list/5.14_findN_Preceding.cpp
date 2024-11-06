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

void insertTail(Node* &tail, int d) {
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

void search(Node* node, int key) {
    while (node != nullptr) {
        if (node->next != nullptr && node->next->data == key) {
            cout << "Found node\nLocation (address): " << node->next 
                 << "\nPreceding node data: " << node->data << endl;
            return;
        } else if (node->data == key) {
            cout << "This is the first element in the list." << endl;
            return;
        }
        node = node->next;
    }
    cout << "Not found" << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertTail(tail, 12);
    insertTail(tail, 15);

    print(head);

    //cout << "Enter the node value to search: ";
    int n;
    cin >> n;
    search(head, n);

    return 0;
}
