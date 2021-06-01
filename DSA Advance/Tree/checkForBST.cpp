#include<iostream>
#include<queue>
#include "treeNode.h"
#include<algorithm>
using namespace std;
using namespace std;
void printTree(Node*root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (q.size()>1)
    {
        /* code */
       
        int count=q.size();
        for (int i = 0; i<count ; i++)
        {
            /* code */
             Node*temp=q.front();
             q.pop();
            
           
            if (temp==NULL)
            {
                /* code */
                cout<<"\n";
                q.push(NULL);
                continue;

            }
            cout<<temp->data<<" ";
            
             
            if (temp->left!=NULL)
            {
                // /* code
                q.push(temp->left);
            }
            if (temp->right!=NULL)
            {
                /* code */
                q.push(temp->right);
            }
        
            
        }
       

    }
    
}
int height(Node*root){
    if (root==NULL)
    {
        /* code */
        return 0;
    }
    if(root->left==NULL&&root->right==NULL){
        return 1;
    } 
    int a=height(root->left);
    int b=height(root->right);
    // return a+b+1;
    return max(a,b)+1; 

}

bool checkForBalancedSearchTree(Node*root){
    //base case
    if (root==NULL)
    {
        /* code */
        return 1;
    }
    int l=height(root->left);
    int r=height(root->right);
    cout<<" l ,r is "<<l<<" "<<r<<endl;
    return ((abs(l-r)<=1)&&checkForBalancedSearchTree(root->left)&&checkForBalancedSearchTree(root->right));
 
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
    cout<<height(root)<<"\n";

    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(10);
    root->left->right=new Node(11);
    root->right->right=new Node(11);
    root->right->right->left=new Node(11);
    
    cout<<"Tree is "<<endl;
    printTree(root); 

    //  Node*root=new Node(1);
    // root->left=new Node(2);
    // root->left->left=new Node(5);
    // root->left->left->left=new Node(5);
    int ans=checkForBalancedSearchTree(root);
    ans==1?cout<<"True ":cout<<"False "<<endl;
}