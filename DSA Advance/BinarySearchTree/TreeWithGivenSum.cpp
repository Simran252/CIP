#include<iostream>
#include<vector>
#include<unordered_set>
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
void inOrder(TreeNode*root,vector<int> &v){
    
    if(root==NULL){
        return;
    }
    //left root right
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);


}
bool util(TreeNode*root,int sum,unordered_set<int> &set){
   
    if(root==NULL){
        return false;
        
    }
    if (util(root->left,sum,set)){
        return true;
    }
      
    if(set.find(sum-root->data)!=set.end()){
        //founded

        return true;
    }
    set.insert(root->data);

    
    return util(root->right,sum,set);
}
bool usingHashing(TreeNode*root,int sum){
    unordered_set<int> s;

    return util(root,sum,s);
  

}
bool pairSum(TreeNode*root,int sum){
    //find inorder
    vector<int> v;
    inOrder(root,v);  
    cout<<"vector sze "<<v.size()<<"\n";
    for (auto i = 0; i <v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    
    // Two pointer approach
     // 4 8 9 10 11 20 25 30
    //  33

    int i=0,j=v.size()-1;
    while (i<j)
    {
        /* code */
        if (v[i]+v[j]==sum)
        {
            /* code */
            return true;
        }
        else if(v[i]+v[j]>sum){
            j--;
 
        }
        else{
            i++;
            
        }
        
    }
    return false;


}
int main(){
    int sum;
    cout<<"enter sum"<<"\n";
    cin>>sum;

    TreeNode*root=new TreeNode(10);
    root->left=new TreeNode(8);
    root->right=new TreeNode(20);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(11);
    root->right->right=new TreeNode(30);


    // bool ans=pairSum(root,sum);
    // ans==1?cout<<"yes"<<"\n":cout<<"no"<<"\n";

    cout<<"Using efficient sol"<<"\n";
    bool res=usingHashing(root,sum);
    res==1?cout<<"yes"<<"\n":cout<<"no"<<"\n";
    


    
}