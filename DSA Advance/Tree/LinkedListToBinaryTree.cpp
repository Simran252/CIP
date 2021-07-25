#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;

    }


};
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
void printLL(Node* &root){
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<"\n";
}
Node*takeInput(int size){
    int n;
    Node*head=NULL,*tail=NULL;
    Node*curr=NULL;
    
    while(size-->0){
        cin>>n;
        Node*newNode=new Node(n);
        if(head==NULL){
            head=newNode;
            tail=newNode;

        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;

}
int main(){
    cout<<"enter size of LL"<<"\n";
    int size;
    cin>>size;
    Node*head=takeInput(size);
    cout<<"LL is"<<"\n";
    printLL(head);
    cout<<head->data<<"\n";
    printLL(head);
    TreeNode*root=NULL;


    linkedListToTree(head,&root);
}