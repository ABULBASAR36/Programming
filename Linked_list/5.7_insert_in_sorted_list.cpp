#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int data)
  {
    this->data=data;
    this->next=NULL;
  }
};
Node* insertHead(Node* &head,int d) 
{
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}
void add(Node *&node, int n)
{
    Node *itm = new Node(n);
    Node *tmp = node;
    if (node == nullptr)
        node = itm;
    while (tmp->next->data < n)
    {
        if(tmp->next->next==nullptr){tmp=tmp->next;break;};
        tmp = tmp->next;
    }
    itm->next = tmp->next;
    tmp->next = itm;
}

void print (Node* &head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main()
{
     Node* node1 =new Node(10);
     Node* head=node1;
     insertHead(head,29);
     insertHead(head,20);
    cout << "before add: ";
    print(head);
    cout << "insert the node to be added:\n";
    int n;
    cin >> n;
    add(head, n);
    cout << "after add: ";
    print(head);
    return 0;
}
