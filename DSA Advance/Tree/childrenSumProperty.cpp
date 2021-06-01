#include<iostream>
#include<queue>
#include "treeNode.h"
#include<algorithm>
using namespace std;
bool childrenSumProperty(Node*root){

    //base case
    if (root==NULL)
    {
        /* code */
        return 1;
    }
    if (root->left==NULL&&root->right==NULL)
    {
        /* code */
        return 1;
    }
    
    int sum=0;
    if (root->left!=NULL)
    {
        sum=root->left->data;

    }
    if(root->right!=NULL){
        sum+=root->right->data;
    }
    return (root->data==sum)&&childrenSumProperty(root->left)&&childrenSumProperty(root->right);

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
    cout<<"child sum property"<<"\n";

    Node*root2=new Node(20);
    root2->left=new Node(12);
    root2->right=new Node(8);

    

    int ans=childrenSumProperty(root);
     ans==1?cout<<"yes":cout<<"no"<<endl;
    cout<<"child sum property"<<"\n";
    ans=childrenSumProperty(root2);
     ans==1?cout<<"yes":cout<<"no"<<endl;


}