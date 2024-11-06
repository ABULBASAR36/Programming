// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int info;
//     Node* left;
//     Node* right;

// };
// void process(int info)
// {
//     cout<<info<<" ";
// }
// void preorder(Node* root)
// {
//     stack<Node*>s;
//     Node* ptr=root;
//     s.push(nullptr);
//     while(ptr!=nullptr)
//     {
//         process(ptr->info);
//         if(ptr->right!=nullptr)
//         {
//           s.push(ptr->right);
//         }
//         if(ptr->left!=nullptr)
//         {
//             ptr= ptr->left;
//         }
//         else
//         {
//             ptr=s.top();
//             s.pop();
//         }
//     }
// }
// int main()
// {
//  Node* root = new Node{1, nullptr, nullptr};
//     root->left = new Node{2, nullptr, nullptr};
//     root->right = new Node{3, nullptr, nullptr};
//     root->left->left = new Node{4, nullptr, nullptr};
//     root->left->right = new Node{5, nullptr, nullptr};
    
//     cout << "Preorder traversal: ";
//     preorder(root);
// }

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
void preorder(Node* node)
{
  if(node==nullptr)
  return;
  
    cout<<node->info<<" ";

    preorder(node->left);
    preorder(node->right);
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
  cout<<"Preorder traversal:";
  preorder(root);
  cout<<endl;
}