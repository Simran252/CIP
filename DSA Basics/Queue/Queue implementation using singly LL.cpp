#include<iostream>
using namespace std;
//All operations using LL are having contant time complxity i.e 0(1)
class Node{
	public:
	int data;
	Node*next;
	
	Node(int data){
		this->data=data;
		next=NULL;
	}
};

class Queue{
	
	public:
	int size;
	Node*head;
	Node*rear;
	Queue(){
		size=0;
		head=NULL;
		rear=NULL;
		
	}
	bool isEmpty(){
		return (head==NULL);
		
	}
	int getSize(){
		return size;
	}
	int getFront(){
		if(head==NULL){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		return head->data;
		
		
	}
	int getRear(){
		if(head==NULL){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		return rear->data;
		
	}
	void enqueue(int x){
		
		//insertion at rear end
		Node*xNew=new Node(x);
		if(head==NULL){
			head=xNew;
			rear=xNew;
			size+=1;
			
		}
		else{
			
			rear->next=xNew;
			rear=xNew;
			
			size+=1;
			
		}
		
	}
	int dequeue(){
		//deletion from front end
		if(head==NULL){
			cout<<"Queue is empty"<<"\n";
			return -1;
			
		}
		int res=head->data;
		Node*temp=head->next;
		delete head;
		head=temp;
		size--;
		return res;
		
		
		
	}
	
	
};
int main(){
	
	Queue q;
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	cout<<"Size of queue is "<<q.getSize()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"Size of queue is "<<q.getSize()<<endl;
		cout<<"front of queue is"<<q.getFront()<<"\n";
	cout<<"Rear(end) of queue is"<<q.getRear()<<"\n";
	q.enqueue(34);
	cout<<"front of queue is"<<q.getFront()<<"\n";
	cout<<"Rear(end) of queue is"<<q.getRear()<<"\n";
	cout<<"Size of queue is "<<q.getSize()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<q.isEmpty()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	
	cout<<"Size of queue is "<<q.getSize()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"front is "<<q.getFront()<<"rear is"<<q.getRear()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"Size of queue is "<<q.getSize()<<endl;
	
	cout<<q.isEmpty()<<endl;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
