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
void printLL(Node*head){
    while (head!=NULL)
    {
        /* code */
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";

    
}
Node* pairWiseSwapOfNodes(Node*head){
    Node*head1=head->next;
    Node*prev=head;
     Node*end=NULL;
    Node*next1=head->next;
    Node*temp=prev->next->next;
    while (prev!=NULL)
    {
        /* code */
        next1->next=prev; 
       
        if(end==NULL){
             end=prev;

        } 
        else{
            end->next=next1;
            end=prev;
        }
         prev=temp; 
        next1=prev->next;
        temp=temp->next->next;
        printLL(head1);
    
  

    }
    end->next=NULL;
    return head1; 

}
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
int main(){
    int t;
    cin >> t;
	while (t--)
	{
        cout<<"enter linked list 1"<<"\n";
		Node *head1 = takeinput();
		  
		cout << pairWiseSwapOfNodes(head1) << endl;   

        
	}
}