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
void printLL(Node*root){
    while (root!=NULL)
    {
        /* code */
        cout<<root->data<<" ";
        root=root->next;
    }
    
    cout<<"\n";
    

}
Node*takeInput(){
    int data;
    cin>>data;
    Node*head=NULL,*tail=NULL;
    while (data!=-1)
    {
        /* code */
        Node*newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        

        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
    


}
int main(){
    int n;
    cin>>n;
    Node*root=takeInput();
    printLL(root);

}
