#include<bits/stdc++.h>
using namespace std;
struct Node{
    int info;
    Node* left;
    Node* right;
    Node(int val) 
 {
  info=val;
  left=nullptr;
  right=nullptr;
 }
};
void postOrder(Node* node)
{
    if(node==nullptr)
    return;
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->info<<" ";
}
int main()
{
  Node* root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->right->left=new Node(6);
  root->right->right=new Node(7);

  cout<<"PostOrder Traversing is:";
  postOrder(root);
}

