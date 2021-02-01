#include<iostream>
using namespace std;

class Queue{
	
	public:
	int size;
	int*arr;
	int cap;
	
	
	Queue(int c){
		cap=c;
		size=0;
		arr=new int[cap];
		
	}
	
	bool isFull(){
		return (cap==size);
	}
	bool isEmpty(){
		return (size==0);
	}
	int getSize(){
		return size;
	}
	void enqueue(int x){
	
		if(isFull()){
			cout<<"can't insert new item item tp queue bcz quque if full"<<endl;
			return;
		}
		arr[size]=x;
		size+=1;
	
	}
	int dequeue(){
		if(isEmpty()){
			cout<<"No item is present in the queue"<<endl;
			return -1;
		}
		int res=arr[0];
		for(int i=0;i<size-1;i++){
			arr[i]=arr[i+1];
			
		}
		size--;
		return res;
		
		
		
		
	}
	
	int getFront(){
		if(isEmpty()){
			return -1;
		}
		else{
			return arr[0];
		}
	
		
	}
	int getRear(){
		if(isEmpty()){
			return -1;
		}
		else{
			return size-1;
		}
		
	}

};
int main(){
	Queue q(6);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	cout<<"Size of queue is "<<q.getSize()<<endl;
	cout<<q.isFull()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"deleted item from queue is "<<q.dequeue()<<endl;
	cout<<"Size of queue is "<<q.getSize()<<endl;
	q.enqueue(34);
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
