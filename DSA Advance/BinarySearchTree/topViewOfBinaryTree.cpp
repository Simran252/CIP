#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int data){
        this->data=data;
        left=right=NULL;

    }

};
void printTopViewUsingLevelOrderTraversal(TreeNode*root,map<int,int> &umap){
    // map<int,int> uma;
    queue<pair<TreeNode*,int>> q;
    int curr=0;
    q.push({root,curr});
    
        int count=q.size();
        for (int i = 0; i < count; i++)
        {
            TreeNode*temp=q.front().first;
            
            int val=q.front().second;
            if(umap.find(val)==umap.end()){
                umap[val]=temp->data;
                
            }
            q.pop();

            
            if(temp->left!=NULL){
                q.push({temp->left,val-1});     
            }
            if(temp->right!=NULL){
                q.push({temp->right,val+1});


            }
        }
        
}
// void printTopView(TreeNode*root,map<int,vector<int>> &umap,int curr){
    // if(root==NULL){
    //     return;

    // }
    // //root left right
    // if(umap.find(curr)!=umap.end()){
    //     //founded
    //     umap[curr].push_back(root->data);

    // }
    // else{
    //     vector<int> vec;
    //     vec.push_back(root->data);
    //     umap.insert({curr,vec});

    // }

    // printTopView(root->left,umap,curr-1);
    // printTopView(root->right,umap,curr+1);



// }
int main(){
    TreeNode*root=new TreeNode(10);
    root->left=new TreeNode(20);
    root->right=new TreeNode(50);
    root->left->left=new TreeNode(30);
    root->left->right=new TreeNode(40);
    root->right->left=new TreeNode(60);
    root->right->right=new TreeNode(70);
    // TreeNode*root=new TreeNode(1);
    // root->left=new TreeNode(2);
    // root->right=new TreeNode(3);
    // root->left->right=new TreeNode(4);
    // root->left->right->right=new TreeNode(5);
    // vector<int> v;
    // map<int,vector<int>> umap;
    // int curr=0;

    // printTopView(root,umap,curr);
    // cout<<"top view of binary search tree is "<<"\n";
    // for(auto it=umap.begin();it!=umap.end();it++){
    //     cout<<it->first<<" "<<it->second[0]<<"\n";
    // }
    // cout<<"\n";
    map<int,int> umap;
    printTopViewUsingLevelOrderTraversal(root,umap);
     cout<<"top view of binary search tree is "<<"\n";
    for(auto it=umap.begin();it!=umap.end();it++){
        cout<<it->second<<"\n";
    }
    


}
