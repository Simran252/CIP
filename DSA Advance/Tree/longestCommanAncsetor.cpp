#include<iostream>
#include<vector>
#include<queue>
#include "treeNode.h"
Node*efficientSol(Node*root,int n1,int n2){
    if (root==NULL)
    {
        /* code */
        return NULL;
    }
    
    if (root->data==n1||root->data==n2)
    {
        /* code */
        return root;
    }
    Node*lcs1=efficientSol(root->left,n1,n2);
    Node*lcs2=efficientSol(root->right,n1,n2);
    if (lcs1!=NULL&&lcs2!=NULL)
    {
        /* code */
        return root;

    }
    if (lcs1!=NULL)
    {
        /* code */
        return lcs1;
    }
    else{
        return lcs2;


    }
    

    return NULL;



    
}
bool findPath(Node*root,vector<Node*> &path,int n){
    if (root==NULL)
    {
        /* code */
        return false;
    }
    path.push_back(root);
    if(root->data==n)
    {
        /* code */
        return true;
    }
    int ans1=findPath(root->left,path,n);
    int ans2=findPath(root->right,path,n);
    if (ans1||ans2)
    {
        /* code */
        return true;
    }
    
    path.pop_back();
    return false;
} 
int longestCommanAncsetor(Node*root,int n1,int n2){
    vector<Node*> path1,path2;
    bool res1=findPath(root,path1,n1);
    bool res2=findPath(root,path2,n2);
  
    
    if (res1==0||res2==0)
    {
        /* code */
        return false;
    }
    for (auto it=path1.begin(); it!=path1.end();it++)
    {
        /* code */
        cout<<(*it)->data<<" ";
    }
    cout<<"\n";
    
    for (int i=0; i<path1.size()-1&&path2.size()-1;i++)
    {
        /* code */
        if (path1[i+1]->data!=path2[i+1]->data)
        {
            /* code */
            return path1[i]->data;
        }
        
    }

    return -1;
}

int main(){
        int n1,n2;
        cin>>n1>>n2;
        Node*root=new Node(10);
        root->left=new Node(50);
        root->right=new Node(60);
        root->left->left=new Node(70);
        root->left->left->left=new Node(40);
        root->left->right=new Node(20);
        root->left->right->left=new Node(90);
        root->left->right->right=new Node(80);
        root->left->right->left->left=new Node(30);
        

        // Node*root=new Node(1);
        // root->left=new Node(2);
        // root->right=new Node(3);
        // root->left->left=new Node(4);
        // root->left->right=new Node(5);
        // root->left->right=new Node(5);
        // root->right->left=new Node(6);
        // root->right->right=new Node(7);
        // root->left->left->left=new Node(8);
        // root->left->left->right=new Node(9);
        // root->right->left->left=new Node(10);
        cout<<"lcs is "<<endl;
        cout<<longestCommanAncsetor(root,n1,n2);

        cout<<"efficent sol"<<"\n";
        Node*res=efficientSol(root,n1,n2);
        cout<<res->data<<"\n";
}