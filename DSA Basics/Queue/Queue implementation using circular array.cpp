#include<iostream>
using namespace std;
//By using circular array in implementation of queue ,time complexity of all operations is constant i.e 0(1)

class Queue{
	
	public:
	int cap;
	int size;
	int front;
	int*arr;
	
	Queue(int c){
		cap=c;
		size=0;
		front=0;
		arr=new int[cap];
		
	}
	
	bool isFull(){
		return (cap==size);
	}
	bool isEmpty(){
		return cap==0;
	}
	int getSize(){
		return size;
	}
	int getFront(){
		
		if(isEmpty()){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		return front;
		
	}
	int getRear(){
		
		if(isEmpty()){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		return (front+size-1)%cap;
		
	}
	void enqueue(int x){
		
		if(isFull()){
			cout<<"Queue if full"<<"\n";
			return;
		}
		else{
			int rear=getRear();
			
			 arr[(rear+1)%cap]=x;
			 size++;
			
		}
		
	}
	int dequeue(){
		if(isEmpty()){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		
		int res=arr[front];
		size--;
		front=(front+1)%cap;
		return res;
		
		
	}
	
	
};
int main(){
	Queue q(5);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(5);
	cout<<"Size of queue is "<<q.getSize()<<endl;
	cout<<q.isFull()<<endl;
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
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"Size of queue is "<<q.getSize()<<endl;
	
	cout<<q.isEmpty()<<endl;
	cout<<q.isFull()<<endl;
	
	
	
}
