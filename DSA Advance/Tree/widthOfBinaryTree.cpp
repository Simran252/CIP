#include<iostream>
#include<algorithm>
#include "treeNode.h"
#include<queue>
using namespace std;

int widthOfBinaryTree(Node*root){
  //using level order traveersal
  queue<Node*> q;
  q.push(root); 
  int res=0;
  while (q.empty()==false)
  { 
      int count=q.size();
    for (int i = 0; i <count; i++)
    {
       Node*temp=q.front();
       res=max(res,count);
       q.pop();
       if (temp->left!=NULL)
       {
           /* code */
           q.push(temp->left);
       }
       if (temp->left!=NULL)
       {
           /* code */
           q.push(temp->right);
       }
        

    }
    
  }
  return res;
  



}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(10);
    root->left->right=new Node(11);
    root->right->right=new Node(11);
    root->right->right->left=new Node(11);
    cout<<"width of binary tree is "<<widthOfBinaryTree(root);
}