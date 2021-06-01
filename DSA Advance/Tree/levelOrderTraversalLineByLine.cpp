#include<iostream>
#include<queue>
#include "treeNode.h"
#include<algorithm>
using namespace std;

void levelOrderTraversalLineByLine(Node*root){
    queue<Node*> q;
    Node*temp=root;
    q.push(root);
    q.push(NULL);
    while (q.size()>1)
    {
        /* code */
        temp=q.front();
        q.pop();
        if (temp==NULL)
        {
            /* code */
            q.push(NULL);
            cout<<"\n";
            continue;
        }
        
        cout<<temp->data<<" "; 
        
        if (temp->left!=NULL)
        {
            /* code */
            q.push(temp->left);
        }
        if (temp->right!=NULL)
        {
            /* code */
            q.push(temp->right);
        }
        

        


    }
    


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
    cout<<"level order traversal of tree"<<"\n";

    levelOrderTraversalLineByLine(root);
}