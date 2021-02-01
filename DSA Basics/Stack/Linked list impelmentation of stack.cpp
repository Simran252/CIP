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
class Stack{
	public:
	Node*head;
	int s;
	
	Stack(){
		head=NULL;
		s=0;
		
	}
//stack functions using LL
bool isEmpty(){
	return (head==NULL);
}
void insert(int data){
	Node*xNew=new Node(data);
	xNew->next=head;
	head=xNew;
	s++; 
	
}
int remove(){
	if(head==NULL){
		return INT_MAX;
	}
	
	int res=head->data;
	Node*temp=head->next;
	delete head;
	head=temp;
	s--;
	return res;
	
	

}
int size(){
	
	return s;
}
int peek(){
	if(head==NULL){
		return INT_MAX;
	}
	return head->data;
	
}
	
};
int main(){
	cout<<"start"<<endl;
	Stack s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	s.insert(50);
	cout<<"removed item from stack is "<<s.remove()<<endl;
	cout<<"size of stack is "<<s.size()<<endl;
	cout<<"top of stack is "<<s.peek()<<endl;
	s.insert(90);
	cout<<"size of stack is "<<s.size()<<endl;
	cout<<"removed item from stack is "<<s.remove()<<endl;
	s.remove();
	s.remove();
	s.remove();
	s.remove();
	s.remove();
	cout<<"size of stack is "<<s.size()<<endl;
	cout<<" stack is Empty or not "<<s.size()<<endl;
	cout<<"top of stack is "<<s.peek()<<endl;
	
}

