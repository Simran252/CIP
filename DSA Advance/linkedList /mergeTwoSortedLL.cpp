#include<bits/stdc++.h>
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
void mergell(Node*head1, Node*head2){

    /*
    head1   head2   prev1   prev2
    100     600
    100 200 300 400 500
    5   7   10  13  9   N

    600 700 800 900 1000
    3   5   8   9   14  N

    step1
    
    600 100 200 300 400 500
    3    5   7   10  13  9   N

    700 800 900 1000
    5   8   9   14  N

    100     700     600

    else
    600 700 100 200 300 400 500
    3    5   5   7   10  13  9   N

    800 900 1000
    8   9   14  N
    200       800




    



    */

    Node*next1, *next2;
    Node*prev1, *prev2;
    Node*root1=head1, *root2=head2;

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    while(head1!=NULL && head2!=NULL){
        if((head1->data)<(head2->data)){


        }
        else if((head1->data)>(head2->data)){
            //attach head2 to the start of head1
            root1=head2;
            next2=head->next;
            prev1=head2;
            head1->next=head2;
            head1=head1->next;
            

        }
        else{
            
            head2=head2->next;
            prev1->next=head1;
            head1->next=head2;
            next1=heas
        }
    }

}
int main(){
    Node*head=new Node(2);
    mergell(head, head);

    
}