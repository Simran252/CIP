#include<iostream>
#include<queue>
#include "treeNode.h"
#include<algorithm>
using namespace std;


int height(Node*root){
    if (root==NULL)
    {
        /* code */
        return 0;
    }
    if(root->left==NULL&&root->right==NULL){
        return 0;
    } 
    int a=height(root->left);
    int b=height(root->right);
    // return a+b+1;
    return max(a,b)+1;


}

int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(10);
    root->left->right=new Node(11);
    root->right->left=new Node(4);
    root->right->right=new Node(6);
    root->right->left->right=new Node(5);
    root->right->left->right->left=new Node(7);


    // Node*root=new Node(1);
    // root->left=new Node(2);
    // root->left->left=new Node(4);
    //  root->left->left->left=new Node(5);
    //   root->left->left->left->left=new Node(40);
    // root->right=new Node(3);
    // root->left->left=new Node(4);
    
    int h=height(root);
    cout<<"height of tree is "<<h<<endl;


}