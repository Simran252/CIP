#include<iostream>
using namespace std;
//structure of node class
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