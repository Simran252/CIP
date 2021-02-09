#include<iostream>
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
	cout<<"\n";
	
}

Node*cielingInBst(Node*root,int s){
	Node*res=NULL;
	while(root!=NULL){
		if(root->data==s){
			return root;
			
		}
		else if((root->data)<s){
			//right subtree
			root=root->right;
			
		}
		else if((root->data)>s){
			//left subtree
			res=root;
			
			root=root->left;
			
		}
		
	}
	return res;
	
	
}

Node*floarInBst(Node*root,int s){
	Node*res=NULL;
	
	while(root!=NULL){
		
		 if((root->data)==s){
			return root;
		}
		
		else if((root->data)<s){
			//ans is present in right subtree
			res=root;
			root=root->right;
			
			
			
		}
		else if((root->data)>s){
			//ans is present in left subtree
			
			
			root=root->left;
			
			
		}
	}
	return res;
	
	
	
}
Node*nodeSucessor(Node*root){
	Node*curr=root->right;
	while(curr!=NULL&&curr->left!=NULL){
		curr=curr->left;
		
	}
	return curr;
	
	
}
Node*deleteNodeFromBst(Node*root,int x){
	Node*curr=root;
	Node*prev=root;
	if(root==NULL){
		return NULL;
	}
	else if((root->data)>x){
		//left subtree
		Node*ans1=deleteNodeFromBst(root->left,x);
		 (root->left=ans1);
		
		
	}
	else if((root->data)<x){
		//right subtree
		Node*ans2=deleteNodeFromBst(root->right,x);
		 (root->right=ans2);
		
		
	}
	else{
		if((root->left)==NULL){
			//left node is empty
			Node*temp=root->right;
			delete root;
			return temp;
			
			
			
		}
		else if((root->right)==NULL){
			
			//right node is empty
			Node*temp=root->left;
			delete root;
			return temp;
		
			
		}
		else{
			//both right and left node are non-empty
			
		Node*succ=nodeSucessor(root);
		root->data=succ->data;
		Node*res=deleteNodeFromBst(root->right,succ->data);
		root->right=res;
		
		
	}
	}
	
	return root;
	
	
}
Node*insertInBSTUsingIterative(Node*root,int x){
	
	Node*xNew=new Node(x);
	if(root==NULL){
		return xNew;
	}
	
	Node*temp=root;
	Node*curr;
	
	
	while(temp!=NULL){
		
		curr=temp;
		
		if((temp->data)>x){
			//left sub-tree
			temp=temp->left;
			
		}
		else if((temp->data)<x){
			//right sub-tree
			temp=temp->right;
			
			
		}
	}
	if((curr->data)>x){
		
		//left sub-tree
		curr->left=xNew;
		return root;
	}
	else if((curr->data)<x){
		
		//right sub-tree
		curr->right=xNew;
		return root;
		
	}
	
}
Node*insertInBST(Node*root,int x){
	Node*xNew=new Node(x);
	
	if(root==NULL){
		return xNew;
		
	}
	else if((root->data)<x){
		//right sub-tree
	
		Node*ans1=insertInBST(root->right,x);
		root->right=ans1;
	}
	else if((root->data)>x){
		//left sub-tree
		
		
		Node*ans2=insertInBST(root->left,x);
		root->left=ans2;
	}
	
}
bool serachInBST(Node*root,int x){
	if(root==NULL){
		return 0;
	}
	else if((root->data)==x){
		return 1;
	}
	else if((root->data)<x){
		//x is in right sub-tree
		return serachInBST(root->right,x);
	}
	else if((root->data)>x){
		//x is smaller as comapered to root.so left sub-tree
		return serachInBST(root->left,x);
	}
}
int main(){
	Node*root=new Node(50);
	root->left=new Node(30);
	root->right=new Node(70);
	root->left->left=new Node(20);
	root->left->right=new Node(40);
	root->right->left=new Node(60);
	root->right->right=new Node(80);
	root->right->left->left=new Node(55);
	root->right->left->right=new Node(65);

	//print level order tree
	levelOrderTraversal(root);
	int ele;
	cout<<"Enter ele to search "<<"\n";
	cin>>ele;
	cout<<serachInBST(root,ele)<<"\n";
	
	int x;
	cout<<"Enter ele to insert in bst "<<"\n";
	cin>>x;
//	Node*ans=insertInBST(root,x);
//	cout<<"After inserting ele the tree is "<<"\n";
//	levelOrderTraversal(ans);
	
	Node*ans2=insertInBSTUsingIterative(root,x);
	cout<<"After inserting ele using iterative approach the tree is "<<"\n";
	levelOrderTraversal(ans2);

	int del;
	cout<<"Enter the node to delete from bst"<<endl;
	cin>>del;
	Node*res=deleteNodeFromBst(root,del);

	levelOrderTraversal(res);
	
	int s;
	cout<<"Enter s"<<"\n";
	cin>>s;
	Node*floar=floarInBst(root,s);
	
	cout<<"Floor of s is "<<(floar->data)<<endl;
	
	Node*ceil=cielingInBst(root,s);
	cout<<"ceil of s is "<<(ceil->data)<<endl;
	
}
