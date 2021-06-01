#include<iostream>
#include "treeNode.h"
using namespace std;

Node* binaryTreeIntoDoublyLL(Node*root){
    static Node*prev=NULL; 
    static Node*head=NULL;
    if (root==NULL)
    {
        /* code */
        cout<<"enter base  "<<endl;
        return NULL;
    }
    //left
    binaryTreeIntoDoublyLL(root->left);
    //root
    if (prev==NULL)
    {
        /* code */
        cout<<"enter if "<<endl;
        head=root;
        cout<<head<<"\n";


    }
    else{
        cout<<"root and prev is "<<endl;
         cout<<root<<" "<<prev<<endl;
        prev->right=root;
        root->left=prev;

    }
    prev=root;
    binaryTreeIntoDoublyLL(root->right);
    return head;  

 

}
int main(){

    Node*root=new Node(1);
    // root->left=new Node(2);
    // root->right=new Node(3);
    // root->left->left=new Node(10);
    // root->left->right=new Node(11);
    // root->right->right=new Node(7);
    // root->right->right->left=new Node(15);
    //  Node*root=new Node(10);
    // root->left=new Node(5);
    // root->right=new Node(20);
    // root->right->left=new Node(30);
    // root->right->right=new Node(35);
    Node*res=binaryTreeIntoDoublyLL(root);
    Node*curr=res;
    cout<<"Double Linked List is "<<endl;
    while (curr!=NULL)
    {
        /* code */
        if(curr->left==NULL&&curr->right==NULL){
            cout<<"yes"<<endl;

        }
        cout<<curr->data<<" ";
        curr=curr->right;


    }
    

}