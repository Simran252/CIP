#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include "treeNode.h";

bool ancestorDis(Node*root,vector<pair<Node*,int>> &vc,int leaf){

    if (root==NULL)
    {

        return false;

    }
    vc.push_back(root);
    if (root->data==leaf)
    {
        /* code */
        return true;
    }

    int le=ancestorDis(root->left,vc,leaf);
    int ri=ancestorDis(root->right,vc,leaf);
    if (le||ri)
    {
        /* code */
        return true;
    }
    vc.pop_back();
    return false;

}
int distance(Node*root,vector<Node*> &vc,int leaf){
    int res1=ancestorDis(root,vc,leaf);
    int res2=ancestorDis();






}
int burnABinaryTreeFromLeaf(Node*root,int leaf){
    if (root==NULL)
    {
        /* code */
        return -1;
    }
    static int res=0;
    static vector<pair<Node*,int>> vc;
    static int i=0;
    i++;
    ancestorDis(root,vc,leaf);
    int res=max(distance(vc[i],vc,leaf),res);

}


int main(){
        cout<<"enter leaf node"<<endl;
        int leaf;
        cin>>leaf;
        Node*root=new Node(10);
        root->left=new Node(20);
        root->right=new Node(30);
        root->left->left=new Node(40);
        root->left->right=new Node(50);
        root->right->left=new Node(60);
        burnABinaryTreeFromLeaf(root,leaf);

}