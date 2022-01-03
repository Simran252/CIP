#include<bits/stdc++.h>
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
Node*takeInput(){
    int data;
    cin>>data;
    Node*root, *currNode;
    bool flag=false;
    while(data!=-1){
        if(flag==false){
             root=new Node(data);
             currNode=root;
             flag=true;
             
        }
        else{

        
        Node*nextNode=new Node(data);
        currNode->next=nextNode;
        currNode=nextNode;

        }
        cin>>data;


    }
    return root;
}
void printLL(Node*curr){

    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
Node* mergell(Node*head1, Node*head2){
   Node*a=head1, *b=head2;



    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node*tail, *root;
    bool flag=false;
    while(a!=NULL && b!=NULL){
        if((a->data)<=(b->data)){
            if(flag==false){
                root=a;
                tail=a;
                a=a->next;
                
                flag=true;
            }
            else{
                tail->next=a;
                tail=a;
                a=tail->next;

            }
            

        }
        else if((b->data)<(a->data)){
            if(flag==false){
                root=b;
                tail=b;
                b=b->next;
                flag=true;
                

            }
            else{
                tail->next=b;
                tail=b;
                b=tail->next;
            }
        }

    }
    if(a==NULL && b!=NULL){
        tail->next=b;
        
    }

    if(b==NULL && a!=NULL){
        tail->next=a;
        
    }
    return root;
}
int main(){
    cout<<"enter ll 1"<<"\n";
   Node*n1= takeInput();
//    printLL(n1);
   cout<<"\n"<<"enter ll 2"<<"\n";
   
   Node*n2= takeInput();
//    cout<<"\n";
//    printLL(n2);
    
    // Node*n1=new Node(1);
    // n1->next=new Node(2);
    // n1->next->next=new Node(3);
    // n1->next->next->next=new Node(4);

    // Node*n2=new Node(5);
    // n2->next=new Node(6);
    cout<<"merged ll is "<<"\n";
    Node*ans=mergell(n1, n2);
    printLL(ans);

    
}

// enter ll 1
// 1 2 3 6 7 -1

// enter ll 2
// 1 5 8 9 10 -1