#include<iostream>
#include<unordered_set>
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

int efficientSolution(Node*head1,Node*head2){


     Node*curr1=head1;
    Node*curr2=head2;
    int a=0;
    int b=0;
    while (curr1!=NULL)
    {
        /* code */  
        a+=1;
        curr1=curr1->next;
    }
    while (curr2!=NULL)
    {
        /* code */  
        b+=1;
        curr2=curr2->next;
    }   
    int diff=abs(a-b); 
    curr1=head1;
    curr2=head2;   
    int i=1;
    if(a>b){
        
        while (curr1!=NULL&&i<=diff)
        {
            /* code */
            curr1=curr1->next; 
             i++;
            
        }
        
    }
    else if(b>a){ 
         while (curr2!=NULL&&i<=diff)
        {
            /* code */
            curr2=curr2->next; 
            i++;
             
            
        }    
    }
    while (curr1!=NULL&&curr2!=NULL)
    {
        /* code */    
        if(curr1==curr2){
            return curr1->data;
        }
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;

}
int intersectionPointOfTwoLinkedList(Node *head1, Node*head2)
{   

    //time compl=O(m+n)
    // auxilary space=O(m)
    unordered_set<Node*> umap;
    Node*curr=head1;
    while (curr!=NULL)
    {
        /* code */
        umap.insert(curr);
        curr=curr->next;
    }
    Node*curr2=head2;
    while (curr2!=NULL)
    { 
        if (umap.find(curr2)!=umap.end())
        { 
            return curr2->data;

        }
        curr2=curr2->next;
   
    }
    
    return -1;
    
    
}
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
int main(){
int t;
	cin >> t;
	while (t--)
	{
        cout<<"enter linked list 1"<<"\n";
		Node *head1 = takeinput();
		 cout<<"enter linked list 2"<<"\n";
		Node *head2 = takeinput();
		cout << intersectionPointOfTwoLinkedList(head1,head2) << endl;

        cout<<efficientSolution(head1,head2)<<endl;   

        
	}

}