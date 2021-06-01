#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<deque>
#include "treeNode.h"
using namespace std;
void treeTraversalInSpiralForm(Node*root){
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    int index=1;
    while (q.empty()==false)
    {
       
        int count=q.size();
        for (int i = 0; i < count; i++)
        {
            Node*curr=q.front();
            q.pop();
            if (index%2==0)
            {
                /* code */
                s.push(curr);
            }
            if (index%2!=0)
            {
                cout<<curr->data<<" ";
            }             
            if (curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if (curr->right!=NULL)
            {
                q.push(curr->right);
            }
             
        }
        if (index%2==0)
        {
            while (s.empty()==false)
            {
                cout<<s.top()->data<<" ";
                s.pop();
            }
            
        }
        index++;
    }
    


}
int main(){
     Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
     root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->left->left->left=new Node(8);
    root->left->left->right=new Node(9);
    root->right->left->left=new Node(10);

    //  Node*root=new Node(10);
    // root->left=new Node(5);
    // root->right=new Node(20);
    // root->right->left=new Node(30);
    // root->right->right=new Node(35);
    treeTraversalInSpiralForm(root);
}