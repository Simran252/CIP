#include<iostream>
using namespace std;
class Stack{
	public:
	int cap;
	int*arr;
	int top;
	Stack(int size){
		cap=size;
		arr=new int[cap];
		top=-1;
			
	}
	
//stack functions
bool isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void insert(int data){
	if(top<cap-1){
		top=top+1;
		arr[top]=data;
	}
	else{
		cout<<"overflow"<<endl;
	}
	
	
	
}
int remove(){
	if(top==-1){
		cout<<"stack underflow"<<"\n";
	}
	else{
		cout<<"poped item is "<<arr[top]<<endl;
	int res=arr[top];
	top=top-1;
	return res;
	}
	

}
int size(){
	return top+1;
}
int peek(){
	if(isEmpty()){
		return -1;
	}
	return arr[top];
}
	
};
int main(){
	
	Stack s(5);
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	s.insert(50);
	s.insert(60);
	cout<<"top of stack is "<<s.peek()<<"\n";
	s.remove();
	s.remove();
	cout<<"size of stack is "<<s.size()<<"\n";
	cout<<s.isEmpty()<<"\n";
	s.remove();
	s.remove();
	s.remove();
	cout<<"size of stack is "<<s.size()<<"\n";
	cout<<s.isEmpty()<<"\n";
	s.remove();
	cout<<s.isEmpty()<<"\n";
	cout<<"top of stack is "<<s.peek()<<"\n";
	s.size();
}

