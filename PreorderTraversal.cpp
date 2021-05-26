#include<iostream>
#include<queue>
using namespace std;

struct node{
  int data;
  node* left;
  node* right;
}*temp;

node* newnode(int data)
{
    temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

node* insert(node* root,int data)
{
   if(root==NULL)
   root = newnode(data);
   
  else if(data<=root->data)  root->left = insert(root->left,data);
   
   else  root->right = insert(root->right,data);
    return root;
}


void preorder(node* root)
{
    if(root==NULL) return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
    
}

int main()
{
   node* root = NULL;
   root =  insert(root,7);
   root =  insert(root,8);
   root =   insert(root,6);
   cout<<endl<<"PRE-ORDER : ";
   preorder(root);
    return 0;
}
