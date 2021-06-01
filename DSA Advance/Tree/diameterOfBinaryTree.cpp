#include<iostream>
#include<queue>
#include "treeNode.h"
using namespace std;
int height(Node*root){
    if (root==NULL)
    {
        /* code */
        return 0;
    }
    if (root->left==NULL&&root->right==NULL)
    {
        /* code */
        return 1;

    }
    int a=height(root->left);
    int b=height(root->right);
    return max(a,b)+1;
    
    

}
int diameterOfBinaryTree(Node*root){
    //height of binary tree
    static int maximum=0;
    cout<<"maximum is "<<maximum<<endl;
    if(root==NULL){
        return 0;
    }
    int d1=1+(height(root->left))+height(root->right);
    int d2=diameterOfBinaryTree(root->left);
    int d3=diameterOfBinaryTree(root->right);
    cout<<"d1, d2 ,d3 are "<<d1<<" "<<d2<<" "<<d3<<endl;
    return max(d1,max(d2,d3));
}


int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    // root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->left->left=new Node(8);
    root->right->left->right=new Node(9);
    // root->right->left->left=new Node(10);
    // Node*root=new Node(10);
    // root->left=new Node(20);
    // root->right=new Node(30);
    // root->right->left=new Node(40);
    // root->right->right=new Node(50);
    // root->right->left->left=new Node(60);

    cout<<"diameter of binary tree is "<<diameterOfBinaryTree(root);

}