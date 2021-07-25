#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
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
void printVector(vector<int> v){
    for(auto i:v)
    {
        /* code */
        cout<<i<<" ";
    }
    cout<<"\n";
    

}
void util(TreeNode*root,map<int,int> &m,int curr){

    if (root==NULL)
    {
        return;
    }
    if(m.find(curr)!=m.end()){

        // found,
        m[curr]+=root->data;
        
    }
    if(m.find(curr)==m.end()){
        m[curr]=root->data;
        
    }
    
    util(root->left,m,curr-1);
    util(root->right,m,curr+1);

}

vector<int> verticalSumInBinaryTree(TreeNode*root){
    map<int,int> m;
    vector<int> v;

    int curr=0;
    cout<<"map is "<<"\n";

    
    util(root,m,curr);
    // for (auto i = m.begin();i!=m.end(); i++)
    // {
    //     cout<<i->first<<" "<<i->second<<"\n";
    // }
    for (auto i = m.begin();i!=m.end(); i++)
    {
        /* code */
        v.push_back(i->second);
    }
    reverse(v.begin(),v.end());


    return v;
}

int main(){
    cout<<"enter tree"<<"\n";
    TreeNode*root=new TreeNode(10);
    root->left=new TreeNode(8);
    root->right=new TreeNode(20);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(11);
    root->right->right=new TreeNode(30);
    auto it=verticalSumInBinaryTree(root);

    printVector(it);


}