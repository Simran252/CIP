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
int main(){
	//creating node statically
	Node s1(1);
	Node s2(2);
	Node s3(4);
	s1.next=&s2;
	s2.next=&s3;
	cout<<"Creating LL using static allocation"<<"\n";
	cout<<s1.data<<" "<<s2.data<<" "<<s3.data<<endl;
	//creating the node dynamically
	Node*n1=new Node(10);
	Node*n2=new Node(20);
	Node*n3=new Node(10);
	n1->next=n2;
	n2->next=n3;
	cout<<"Creating LL using dynamic allocation"<<"\n";
	cout<<n1->data<<" "<<n2->data<<" "<<n3->data<<endl;
	
	
	
		
}
