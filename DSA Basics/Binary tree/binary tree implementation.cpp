#include<iostream>
#include<limits.h>
#include<stack>
#include<queue>
using namespace std;

class Node{
	public:
	int data;
	Node*left;
	Node*right;
	
	Node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
	
	
};

void preorderIterativeTraversal(Node*root){
	stack <Node*> s;
	if(root==NULL){
		return;
	}
	s.push(root);
	Node*curr=root;
	while(s.empty()==false){
		Node*curr=s.top();
		cout<<curr->data<<" ";
		s.pop();
		if(curr->right!=NULL){
			s.push(curr->right);
		}
		if(curr->left!=NULL){
			s.push(curr->left);
		}
		
	}
}

void inorderIterativeTraversal(Node*root){
	
	
	stack<Node*> s;
	Node*curr=root;
	while(curr!=NULL||s.empty()==false){
		while(curr!=NULL){
			s.push(curr);
			curr=curr->left;
		}
		curr=s.top();
		s.pop();
		cout<<curr->data<<" ";
		curr=curr->right;
		
		
	}
	
	
	
}

int maxInBinaryTree(Node*root){
	if(root==NULL){
		return INT_MIN;
	}
	int a=maxInBinaryTree(root->left);
	int b=maxInBinaryTree(root->right);
	int c=root->data;
	return max(c,max(a,b));
	
	
}

int sizeOFBinaryTree(Node*root){
	if(root==NULL){
		return 0;
	}
	int a=sizeOFBinaryTree(root->left);
	int b=sizeOFBinaryTree(root->right);
	return a+b+1;
	
	
}
void levelOrderTraversal(Node*root){
	if(root==NULL){
		return;
	}
	queue<Node*> q;
	q.push(root);
	while(q.empty()==false){
		Node*curr=q.front();
		q.pop();
		
		cout<<curr->data<<" ";
		if(curr->left!=NULL){
			q.push(curr->left);
		}
		 if(curr->right!=NULL){
			q.push(curr->right);
			
		}
		
	}
	
}
void printNodesAtDistanceK(Node*root,int k){
	if(root==NULL){
		return;
	}
	if(k==0){
		cout<<root->data<<" ";
	}
	else{
		printNodesAtDistanceK(root->left,k-1);
		printNodesAtDistanceK(root->right,k-1);
	}
	
	
}

int heightOfBinaryTree(Node*root){
	if(root==NULL){
		return 0;
	}
	else{
		
	int a=heightOfBinaryTree(root->left);
	int b=heightOfBinaryTree(root->right);
	return max(a,b)+1;
	}
}





void postOrder(Node*root){
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

void preOrder(Node*root){
	if(root==NULL){
		return;
	}
	
	cout<<root->data<<" ";
	
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(Node*root){
	
	if(root!=NULL){
	
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

	
}
int main(){
	
//	Node*root=NULL;//if tree is empty
//	Node*root=new Node(10);
//	root->left=new Node(20);
//	root->right=new Node(30);
//	root->right->left=new Node(40);
//	root->right->right=new Node(50);
	Node*root=new Node(10);
	root->left=new Node(8);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	root->right->right->left=new Node(70);

//Node*root=new Node(10);
//	root->left=new Node(6);
//	root->right=new Node(8);
////	root->right->left=new Node(40);
//	root->right->right=new Node(7);
//	root->right->right->left=new Node(11);
//	root->right->right->right=new Node(12);
	cout<<"In-order traversal of binary tree is "<<endl;
	inOrder(root);
	cout<<"\n";
	cout<<"pre-order traversal of binary tree is "<<endl;
	preOrder(root);
	cout<<"\n";
	cout<<"post-order traversal of binary tree is "<<endl;
	postOrder(root);
	cout<<"\n";
	cout<<"Height of binary tree is "<<heightOfBinaryTree(root);
	int k;
	cout<<"Enter distance k"<<endl;
	cin>>k;
	printNodesAtDistanceK(root,k);
	cout<<"\n";
	cout<<"Level order traversal (Bread first traverse ) of binary tree is "<<"\n";
	levelOrderTraversal(root);
	cout<<"\n";
	cout<<"siz of binary tree is "<<sizeOFBinaryTree(root)<<endl;
	cout<<"Max node in binary tress is "<<maxInBinaryTree(root)<<endl;
	
	cout<<"Iterative traversal of in-order "<<endl;
	inorderIterativeTraversal(root);
	cout<<endl;
	
	cout<<"Iterative traversal of pre-order "<<maxInBinaryTree(root)<<endl;
	preorderIterativeTraversal(root);
	
}
