#include<iostream>
#include<queue>
#include "treeNode.h"
using namespace std;
void printTree(Node*root){
    queue<Node*> q;
    q.push(root);
    while (q.empty()==false)
    {
        /* code */
        int count=q.size();
        for (int i = 0; i < count; i++)
        {
            Node*curr=q.front();
            q.pop();
            cout<<curr->data<<" "; 
            if (curr->left!=NULL)
            {
                /* code */
                q.push(curr->left);
            }
            if (curr->right!=NULL)
            {
                /* code */
                q.push(curr->right);
            }
            

        }
        cout<<"\n";
        
    }
}
Node*BinaryTreeFromInorder(int in[],int pre[],int is,int ie){

    static int index=0;
    if (is>ie)
    {
        /* code */
        return NULL;
    }
    
    Node*root=new Node(pre[index++]);
    //search ele in inorder /* condition */
    int inOrderIndex=0;
    for (int i = is; i <=ie; i++)
    {
        
        /* code */
        if (in[i]==root->data)
        {
            /* code */
            inOrderIndex=i;
            break;
            
        }
        
    }
    Node*rl=BinaryTreeFromInorder(in,pre,is,inOrderIndex-1);
    root->left=rl;
    Node*rr=BinaryTreeFromInorder(in,pre,inOrderIndex+1,ie);
    root->right=rr;
    return root;
    

}
int main(){
    int arr1[]={40,20,60,50,70,10,80,100,30};
    int arr2[]={10,20,40,50,60,70,30,80,100};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    Node*root=BinaryTreeFromInorder(arr1,arr2,0,n-1);
    printTree(root);

}