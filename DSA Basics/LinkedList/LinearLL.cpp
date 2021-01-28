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
//delete tail i.e last node of LL
//time complexity=theat(n)
Node*deleteLastNode(Node*head){
	//if linked list is empty
	if(head==NULL){
		return NULL;
	}
	//if linked list contains only one node
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	Node*temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
		
		
	}
	delete temp->next;
	temp->next=NULL;
	
	return head;
}
//delete first node of LL
//time complexity=O(1)
Node*deleteFirstNode(Node*head){
	Node*temp=head;
	if(head==NULL){
		return head;
	}
	temp=head->next;
	delete head;//we have to delet the node explicitely also
	return temp;
	
	
}
//insert at end of LL
Node*insert(Node*head,int ele){
	Node*temp=head;
	//create node woth ele as data
	Node*n1=new Node(ele);
	if(temp==NULL){
		return n1;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n1;
	}
	return head;
}

//insert at start
//time com=O(1)
Node*insertatBegin(Node*head,int element){
	Node*insert=new Node(element);
	insert->next=head;
	return insert;
	
	
}
//Recusrive search
//time comp=O(n)
//	in worst case when ele is not present=theta(n)
//space cmp=O(n)
int searchLLRecursively(Node*head,int element){
	Node*temp=head;
	//base case
	if(temp==NULL){
		return -1;
	}
	if(temp->data==element){
		return 1;
		
	}
		int res=searchLLRecursively(temp->next,element);
		if(res==-1){
			return -1;
		}
		else{
			return res+1;
			
		}
	
}
//Iterative serach
//time comp=O(n)
//	in worst case when ele is not present=theta(n)
//space cmp=O(1)

int searchLL(Node*head,int element){
	Node*temp=head;
	int index=1;
	while(temp!=NULL){
		if(temp->data==element){
			
			return index;
		}
		temp=temp->next;
		index+=1;
	}
	return -1;
}


//print LL recursively
//time comp=O(n)
//space(auxilary) comp=O(n)
void printLLRecusively(Node*head){
	Node*temp=head;
	if(temp==NULL){
		return;
	}
	cout<<temp->data<<" ";
	temp=temp->next;
	printLLRecusively(temp);
	
	
	
}
//print LL
//time comp=O(n)
//space(auxilary) comp=no extra space is required
void printLL(Node*head){
	Node*temp=head;
	while(temp!=NULL){
		
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<"\n";
}

int main(){
	cout<<"Enter linked list"<<"\n";
	Node*head=new Node(10);
	Node*n1=new Node(20);
	Node*n2=new Node(30);
	Node*n3=new Node(40);
	Node*n4=new Node(50);
	head->next=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	//print LL
	printLL(head);
	cout<<"\n";
	//print LL recursively
	printLLRecusively(head);
	cout<<"\n";
	
	//search element in  LL iteratively
	int element;
	cout<<"Enter element to search"<<"\n";
	cin>>element;
	cout<<"using iterative app. Element is present at position "<<searchLL(head,element)<<"\n";
	//secrch element recursively
	
	cout<<"using recurive app. Element is present at position "<<searchLLRecursively(head,element)<<"\n";
	
	//insert ele at start of LL
	int ele;
	cout<<"Enter element to insert"<<"\n";
	cin>>ele;
	Node*ans=insertatBegin(head,ele);
	cout<<"LL after insert at the start is"<<"\n";
	printLL(ans);
	
	//Insert ele at the end of LL
	Node*insertend=NULL;
	insertend=insert(insertend,65);
	insertend=insert(insertend,45);
	insertend=insert(insertend,20);
	cout<<"LL after insert at the end is"<<"\n";
	printLL(insertend);
	
	//delete first node of LL
	Node*ans2=NULL;
	ans2=deleteFirstNode(insertend);
	cout<<"LL after deleting the first node is"<<"\n";
	printLL(ans2);
	ans2=deleteFirstNode(ans2);
	printLL(ans2);
	ans2=deleteFirstNode(ans2);
	printLL(ans2);
	ans2=deleteFirstNode(ans2);
	printLL(ans2);
	
	
	//delete last node of LL
	Node*ans3=NULL;
	ans3=deleteLastNode(head);
	cout<<"After deleting the last node from LL is :"<<"\n";
	printLL(ans3);
	ans3=deleteLastNode(ans3);
	cout<<"After deleting the last node from LL is :"<<"\n";
	printLL(ans3);
	ans3=deleteLastNode(ans3);
	cout<<"After deleting the last node from LL is :"<<"\n";
	printLL(ans3);
	ans3=deleteLastNode(ans3);
	cout<<"After deleting the last node from LL is :"<<"\n";
	printLL(ans3);
	ans3=deleteLastNode(ans3);
	cout<<"After deleting the last node from LL is :"<<"\n";
	printLL(ans3);
	
	
}
