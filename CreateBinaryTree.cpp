#include<iostream>

using namespace std;
 struct node{
     
     int data;
     node* left;
     node* right;
     
 }*temp;
 
 node* create(int data){
     
     temp = new node();
     temp->data=data;
     temp->left = temp->right = NULL;
     return temp;
     
 }
 
 node* insert(node* root,int data){
     
     if(root==NULL) root = create(data);
    
         
      else if(root->data>=data) root->left = insert(root->left,data);
         else root->right = insert(root->right,data);
         
     
     return root;
     
 }
 
 int main(){
     
    node* root=NULL;
    root = insert(root,6);
    root = insert(root,7);
    root = insert(root,3);
    root = insert(root,8);

     return 0;
 }
 
 
 
 
 
 
 
