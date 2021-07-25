#include<iostream>
#include<vector>
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
void preOrder(TreeNode*root,vector<TreeNode*> &vec){
    if(root==NULL){
        return;
    }
    preOrder((*root).left,vec);
    cout<<root->data<<" ";
    vec.push_back(root);
    preOrder(root->right,vec);
}
void fixBSTWithTwoNodesSwap(TreeNode*root){
    vector<TreeNode*> vec;
    int a,b;
    vector<int> v;
    bool flag=false;
    cout<<"preorder is "<<"\n";
    preOrder(root,vec);
    cout<<"\n";
    int count=0,i,j=0;
    TreeNode*p1,*p2;

    // 4 60 10 20 8 80 100 


    for( i=0;i<vec.size()-1;i++){
        if(vec[i]->data>vec[i+1]->data&&count<1){
            v.push_back(vec[i]->data);
            flag=true;
            count++;
            j=i;
            p1=vec[i];
        }
        else if(count==1&&vec[i]->data>vec[i+1]->data){
            count++;
            p2=vec[i+1];
            break;
            
        }

    }
    cout<<"count is"<<count<<"\n";
    if(count==1){

        swap(vec[j]->data,vec[j+1]->data);

    }
    else{
        cout<<"else "<<"\n";
        swap(p1->data,p2->data);

    }
    cout<<"After swap is "<<"\n";
    preOrder(root,vec);
}
int main(){
    TreeNode*root=new TreeNode(20);
    root->left=new TreeNode(60);
    root->right=new TreeNode(80);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(10);
    root->right->left=new TreeNode(8);
    root->right->right=new TreeNode(100);
    fixBSTWithTwoNodesSwap(root);
}