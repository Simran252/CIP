#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node*prev;
	Node*next;
	Node(int data){
		this->data=data;
		prev=NULL;
		next=NULL;
	}
};

void printCircularDoublyLL(Node*head){
	cout<<"Circular Doubly LL is "<<"\n";
	Node*temp=head;
	while(temp->next!=head){
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<temp->data<<"\n";
}

void printDoublyLL(Node*head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<"\n";
}
//cicular doubly ll
Node*insertAtHeadOfCircularDoublyLL(Node*head,int x){
	Node*xNode=new Node(x);
	if(head==NULL){
		xNode->next=xNode;
		xNode->prev=xNode;
		return xNode;
	}
	
	xNode->next=head;
	xNode->prev=head->prev;
	head->prev->next=xNode;
	return xNode;
	
	
}
Node*deleteLastNodeOfDoublyLL(Node*head){
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	else{
		Node*temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
			
		}
		delete temp->next;
		
		temp->next=NULL;
		return head;
		
	}
}
Node*deleteHeadOfDoublyLL(Node*head){
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		return NULL;
	}
	else{
		head->next->prev=NULL;
	Node*newNode=head->next;
	delete head;
	return newNode;
	}
	
}
Node*reverseDoublyLL(Node*head){
	if(head->next==NULL||head==NULL){
		
		return head;
	}
	Node*current=head;
	Node*prev=NULL;
	Node*temp=head;
		while(current!=NULL){
			temp=current->next;
		
			current->next=prev;
			
			current->prev=temp;
			
			prev=current;
			current=temp;
		
	}
	return prev;
	
}
Node*insertAtEnd(Node*head,int data){
	Node*xNode=new Node(data);
	if(head==NULL){
	
		return xNode;
	}
	else{
		Node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=xNode;
	return head;
	}
	
	
	
	
}
Node*insertAtBegin(Node*head,int data){
	Node*xNode=new Node(data);
	

		xNode->next=head;
		if(head!=NULL){
			head->prev=xNode;
		}
	
	return xNode;
	
}
int main(){
	Node*head=new Node(1);
	Node*n1=new Node(2);
	Node*n2=new Node(3);
	

	head->next=n1;
	
	n1->prev=head;
	n1->next=n2;
	
	n2->prev=n1;
	printDoublyLL(head);
//	
//	//operations on double LL
	int data;
	cout<<"Enter value to insert at start "<<"\n";
	cin>>data;
	Node*ans=insertAtBegin(head,data);
	printDoublyLL(ans);
	
	Node*ans1=insertAtEnd(head,90);
	cout<<"Inserting  the laast node"<<endl;
	printDoublyLL(ans1);
	
	Node*ans2=reverseDoublyLL(head);
	cout<<"Reverse of LL is "<<"\n";
	printDoublyLL(ans2);
	
	Node*ans3=deleteHeadOfDoublyLL(ans2);
	cout<<"after deleting the 1st node of LL"<<endl;
	printDoublyLL(ans3);
	
	Node*ans4=deleteLastNodeOfDoublyLL(ans3);
	cout<<"after deleting the last node of LL"<<endl;
	printDoublyLL(ans4);
	
	//circular doubly LL
	Node*headc=new Node(10);
	Node*n1c=new Node(20);
	Node*n2c=new Node(30);
	Node*n3c=new Node(40);
	
	headc->next=n1c;
	headc->prev=n3c;
	
	n1c->next=n2c;
	n1c->prev=headc;
	
	n2c->next=n3c;
	n2c->prev=n1c;
	
	n3c->next=headc;
	n3c->prev=n2c;
	
	printCircularDoublyLL(headc);
	
	Node*ansc=insertAtHeadOfCircularDoublyLL(headc,98);
	cout<<"After inserting at the head of head of Circular doubly LL is"<<endl;
	printCircularDoublyLL(ansc);
	
	
	
}
