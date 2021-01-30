#include<iostream>
#include<vector>
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
	cout<<"updated LL is"<<"\n";
	Node*temp=head;
	while(temp!=NULL){
		
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<"\n";
}
Node*reverseLL(Node*head){
	vector<int> v;
	Node*temp=head;
	while(temp!=NULL){
		v.push_back(temp->data);
		temp=temp->next;
		
	}
	temp=head;
	while(temp!=NULL){
		temp->data=v.back();
		temp=temp->next;
		v.pop_back();
		
	}
	return head;
	

	
}
int length(Node*head){
	//legth of LL
	int len=0;
	Node*temp=head;
	while(temp!=NULL){
		temp=temp->next;
		len+=1;
		
		
	}
	return len;
}

void EfficientNthNodeFromEnd(Node*head,int k){
	int i=1;
	if(head==NULL){
		return;
	}
	Node*temp=head;
	Node*second=head;
	Node*first=head;
	while(i<=k&&temp!=NULL){
		first=first->next;
		temp=temp->next;
		i++;
	}
	if(temp==NULL){
		return;
	}
	while(first!=NULL){
		second=second->next;
		first=first->next;
		
	}
	cout<<"EfficientNthNodeFromEnd "<< second->data<<"\n";
}

void nthNodeFromEnd(Node*head,int k){
	Node*temp=head;
	if(temp==NULL){
		return;
	}
	int l=length(head);
	if(k>l){
		return;
	}
	for(int i=1;i<(l-k+1);i++){
		temp=temp->next;
	}
	cout<<"nthNodeFromEnd of LL is"<<temp->data<<endl;
	
	
}
int efficietMiddle(Node*head){
	if(head==NULL){
		return -1;
	}
	Node*slow=head;
	Node*fast=head;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;
	
}
int middleOfLL(Node*head){
	
	Node*temp=head;
	if(head==NULL){
		return -1;
	}
	else if(head->next==NULL){
		return head->data;
	}
	int l=length(head);
	for(int i=1;i<=(l/2);i++){
		temp=temp->next;
	}
	return temp->data;
}

Node*insertSorted(Node*head,int x){
	//creting the node
	Node*ins=new Node(x);
	int i=1;
	Node*temp=head;
	Node*previous=head;
	if(head==NULL){
		return ins;
	}
	
	else if((x<=(temp->data))){
		ins->next=head;
		return ins;
	}
	
	
	while(temp!=NULL){
		//fro 1 element
		if(temp->next==NULL&&x>(temp->data)){
			temp->next=ins;
			
			return head;
			break;
		}
		else if(x<=temp->data){
			cout<<"enter else of"<<"\n";
			previous->next=ins;
			ins->next=temp;
			return head;
			break;
		}
		previous=temp;
		temp=temp->next;
			
	}
	
	
}
Node*insertEle(Node*head,int ele,int pos){
	//create an node with data as ele
	Node*ins=new Node(ele);
	int i=1;
	Node*previous=head;
	Node*later=head;
	int size=length(head);
	if(pos>size){
		return head;
	}
	else if(pos==1){
		ins->next=head;
		return ins;
	}
	
	else{
	
			while(i<(pos-1)){
			i+=1;
			previous=previous->next;
			
			
		}
		later=previous->next;
		previous->next=ins;
		ins->next=later;
		
		
		
	}
	return head;
}

int main(){
	Node*head=new Node(10);
	Node*n1=new Node(20);
	Node*n2=new Node(30);
	Node*n3=new Node(40);
	Node*n4=new Node(50);
	Node*n5=new Node(60);
	head->next=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	printLL(head);
	int pos;
	cout<<"Enter position of ele to be instered in LL"<<"\n";
	cin>>pos;
	int ele;
	cout<<"Enter element to insert"<<"\n";
	cin>>ele;
	
	Node*temp=insertEle(head,ele,pos);
	printLL(temp);
	
	Node*insert=NULL;
	printLL(head);
	int x;
	cout<<"Enter ele to insert"<<"\n";
	cin>>x;
	Node*ans=insertSorted(head,x);
	printLL(ans);
	
	//Middle of LL
	
	cout<<"Midddle of LL is "<<middleOfLL(head)<<"\n";
	
	cout<<"Effient app to find middle of LL"<<efficietMiddle(head)<<"\n";	
	//Nth ndoe from end off LL
	int npos;
	cout<<"Enter pos of node"<<"\n";
	cin>>npos;
	nthNodeFromEnd(head,npos);
	EfficientNthNodeFromEnd(head,npos);
	
	reverseLL(head);
	cout<<"After reversing the LL"<<"\n";
	printLL(head);

	
	
}
