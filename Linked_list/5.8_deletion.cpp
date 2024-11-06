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
void deleteNode(int position,Node* &head)
{
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
            curr->next=NULL;
            delete curr;
    }
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
     insertHead(head,13);
    print(head);
    deleteNode(4,head);
    print(head);
}
