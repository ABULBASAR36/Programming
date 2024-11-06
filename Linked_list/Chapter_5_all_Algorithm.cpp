// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     // constuctor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertHead(Node *&head, int d)
// {
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }
// void insertTail(Node *&tail, int d)
// {
//     Node *temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }
// void insertPosition(Node *&tail, Node *&head, int position, int d)
// {
//     // inserting first position
//     if (position == 1)
//     {
//         insertHead(head, d);
//         return;
//     }

//     Node *temp = head;

//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     // inserting last position
//     if (temp->next == NULL)
//     {
//         insertTail(tail, d);
//         return;
//     }
//     // inserting any middel position
//     Node *nodetoinsert = new Node(d);
//     nodetoinsert->next = temp->next;
//     temp->next = nodetoinsert;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void deleteNode(int position, Node *&head)
// {
//     if (position == 1)
//     {
//         Node *temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         Node *curr = head;
//         Node *prev = NULL;
//         int cnt = 1;
//         while (cnt < position)
//         {
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }
// int main()
// {
//     Node *node1 = new Node(10);
//     // cout<<node1 -> data<<endl;
//     // cout<<node1 -> next<<endl;

//     Node *head = node1;
//     Node *tail = node1;
//     // print(head);

//     insertTail(tail, 12);
//     // print(head);
//     insertTail(tail, 15);
//     print(head);
//     insertPosition(tail, head, 1, 22);
//     print(head);
//     cout << head->data << endl;
//     cout << tail->data << endl;
//     deleteNode(4, head);
//     print(head);
// }

#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertionHead(Node *&head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertionTail(Node *&tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertionPosition(Node *&head,Node *&tail,int position,int d)
{
    if(position==1)
    {
        insertionHead(head,d);
        return ;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position-1)//&&temp->next!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertionTail(tail,d);
        //return;
    }
    else
    {

    Node *nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    }

}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletion(int position,Node *&head)
{
    if(position==1)
    {
        Node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
     Node *curr=head;
     Node *prev=NULL;
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
int main()
{
    Node* node1=new Node(10);
    Node  *head=node1;
    Node *tail=node1;
    insertionHead(head,15);
    insertionHead(head,8);
    insertionTail(tail,17);
    insertionPosition(head,tail,2,19);
    deletion(3,head);
    print(head);
}

// TwoWay_linkList or Doubly_Linked_List

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int data) {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// // Traversing a linked list
// void print(Node* &head)
// {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Get the length of the linked list
// int getlength(Node* head)
// {
//     int len = 0;
//     Node* temp = head;
//     while (temp != NULL) {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// // Insert at the head of the linked list
// void insertHead(Node* &head, int d)
//  {
//     Node* temp = new Node(d);
//     temp->next = head;
//     if (head != NULL) {
//         head->prev = temp;
//     }
//     head = temp;
// }
// void insertTail(Node* &tail,int d)
// {
//   Node* temp=new Node(d);
//   tail->next=temp;
//   temp->prev=tail;
//   tail=temp;
// }
// void insertPosition(Node* &tail,Node* &head,int position,int d)
// {
//     if(position==1)
//     {
//         insertHead(head,d);
//         return;
//     }
//     Node* temp=head;
//     int cnt=1;
//     if(cnt<position-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp->next==NULL)
//     {
//         insertTail(tail,d);
//         return;
//     }
//     Node* nodetoinsert=new Node(d);
//     nodetoinsert->next=temp->next;
//     temp->next->prev=nodetoinsert;
//     temp->next=nodetoinsert;
//     nodetoinsert->prev=temp;

// }
// int main() {
//     Node* node1 = new Node(17);
//     Node* head = node1;
//     Node* tail=node1;
//     print(head);
//     cout << getlength(head) << endl;
//     insertHead(head, 11); // Insert 11 at the head
//     print(head);
//     insertHead(head, 15);
//     insertHead(head, 19);
//     print(head);
//     insertTail(tail,25);
//      print(head);
//      insertPosition(tail,head,3,100);
//      print(head);
//      insertPosition(tail,head,1,105);
//      print(head);
//     return 0;
// }
