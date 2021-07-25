#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int data){
        this->data=data;

        
    }
};

void print(vector<int> &v){
    for (auto i:v)
    {

        cout<<i<<" ";
    }

}
void util(TreeNode*root,unordered_map<int,vector<int>> &umap,int curr,int &mini,int &maxi){

    //base case
    if (root==NULL)
    {
        return;
        
    }
    //left root right
    if (umap.find(curr)!=umap.end())
    {
        /* code */
        //founded

        umap[curr].push_back(root->data);
       

    }

    else{
        vector<int> v;
        v.push_back(root->data);
        umap.insert({curr,v});

    }

    mini=min(mini,curr);
    maxi=max(maxi,curr);

    
    util(root->left,umap,curr-1,mini,maxi);
    util(root->right,umap,curr+1,mini,maxi);

    // 1 
    // 2
    // 3 4 5
    // 5 6 7
    // 6

}
vector<vector<int>> verticalTraversalOfABinaryTree(TreeNode*root){
    vector<int> v;
    int mini=0,maxi=0;
    unordered_map<int,vector<int>> umap;
    

    util(root,umap,0,mini,maxi);
    cout<<"maximum and minimum are "<<maxi<<" "<<mini<<"\n";
    vector<vector<int>> resv;
    for (int i=mini;i<=maxi;i++)
    {
        /* code */
        vector<int> v=umap[i];
        resv.push_back(v);
    }
    return resv;

    // for (auto it= umap.begin();it!=umap.end();it++)
    // {
    //         /* code */
    //         vector<int> v=it->second;
    //         resv.push_back(v);

    // }

    // return resv;

}

int main(){
    cout<<"enter tree"<<"\n";
    TreeNode*root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->left->right=new TreeNode(3);
    
    // root->right=new TreeNode(3);
    // root->left->left=new TreeNode(4);
    // root->left->right=new TreeNode(5);
    // root->right->left=new TreeNode(6);
    // root->right->right=new TreeNode(7);
    // root->right->right->left=new TreeNode(8);
    // root->right->right->left->left=new TreeNode(9);
    vector<vector<int>> it=verticalTraversalOfABinaryTree(root);
    for(auto i:it){
        print(i);
        cout<<"\n";
        
    }
    

}