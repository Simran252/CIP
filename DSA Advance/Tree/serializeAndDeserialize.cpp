#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    Tree*left, *right;
    Tree(int data){
        this->data=data;
        left=right=NULL;

    }
};
void printVec(vector<int> &vec){
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<"\n";


}
void preOrder(Tree*root, vector<int> &pre){
    if(root==NULL){
        pre.push_back(-1);
        return;
    }
    pre.push_back(root->data);
    preOrder(root->left, pre);
    preOrder(root->right, pre);



}
Node*desearlize(vector<int> &preOrder, int &index, Tree*root){
    if(index==preOrder.size()){
        return root;
    }
    

    root=new Tree(preOrder[index]);
    desearlize(preOrder, index+1, root);


    
}
void serialize(Tree*root, vector<int> &pre){

    //pre order
    //inorder
    preOrder(root, pre);

    1 2 4 -1 -1 -1 3 -1 7 -1 -1

                
                1
            2           3
        4       -1  -1      7
    -1      -1
    

}
int main(){
    Tree*root=new Tree(1);
    root->left=new Tree(2);
    root->right=new Tree(3);
    root->left->left=new Tree(4);
    root->right->right=new Tree(7);
    vector<int> res;
    serialize(root, res);
    
    // deSerialize(root);
    printVec(res);
    desearlize(res, 0, root);
    
}