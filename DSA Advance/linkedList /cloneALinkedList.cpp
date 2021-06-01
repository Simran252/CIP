#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*random;    
    Node(int data){
        this->data=data;
        next=NULL;     
        random=NULL; 
    }
};
void printLL(Node*head){
    while (head!=NULL)
    {
        /* code */
        cout<<head->data<<" "; 
        head=head->next;
    }
    cout<<"\n";

    
}
Node*efficientMethod(Node*head){
    //make copyu of each node
    Node*curr=head;
    Node*insert=NULL;
    Node*next1=NULL;
    while (curr!=NULL)
    {
        /* code */
        insert=new Node(curr->data);
        next1=curr->next;
        curr->next=insert;
        curr->next->next=next1;
        curr=curr->next->next;

    }
    curr=head;
    while (curr!=NULL)
    {
        /* code */
        curr->next->random=curr->random->next;
        curr=curr->next->next;

    }
    return head->next;
    



}
Node*cloneLinkedList(Node*head){
    unordered_map<Node*,Node*> map;
    Node*curr=head; 
    Node*clonell=NULL;
    while (curr!=NULL)
    {
        map[curr]=new Node(curr->data);
        curr=curr->next;
    }
        for (Node*curr=head;curr!=NULL;curr=curr->next)
        {
            /* code */
            Node*clonell=map[curr];
            clonell->next=map[curr->next];
            clonell->random=map[curr->random];

        }
        
         Node*head1=map[head];
         return head1;
    }
    
int main(){
   Node*head=new Node(10);
   Node*n2=new Node(20);
   Node*n3=new Node(30);
   Node*n4=new Node(40);
   Node*n5=new Node(50);
   head->next=n2;
   n2->next=n3;
   n3->next=n4;
   n4->next=n5;

   head->random=n3;
   n2->random=n4;
    n3->random=head;
    n4->random=n3;
    n5->random=n4;
    cout<<"givem ll is"<<"\n";
    printLL(head);
    Node*clonehead=cloneLinkedList(head);
    printLL(clonehead);

    Node*effan=efficientMethod(head);
    printLL(effan);
   
}