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
void insertTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print (Node* &head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<endl;
}
int main()
{
     Node* node1 =new Node(10);
     Node* head=node1;
     Node* tail=node1;
     
    insertTail(tail,12);
    //print(head);
    insertTail(tail,15);
    insertTail(tail,10);
    print(head);
}
