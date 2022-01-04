#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev, *next;

    Node(int data)
    {
        this->data = data;
        prev = next = NULL;
    }
};

class LRUCache
{
public:
    unordered_map<int, Node *> umap;
    int capacity;
    int count;
    Node *head, *tail;
    LRUCache(int capacity)
    {
        count = 0;
        this->capacity = capacity;
        head = NULL;
        tail = NULL;
    }
    void printLL()
    {
        Node*curr= head;
        while (curr != NULL)
        {
            cout << curr->data<<" ";
            curr = curr->next;
        }
        cout << "\n";
    }
    void updateCache(Node *head, Node *tail, int x)
    {

        Node *deleteNode = umap[x];//100
        Node *prevOFDeleteNode = deleteNode->prev;//200
        Node *nextOfDeleteNode = deleteNode->next;//null
        if(nextOfDeleteNode==NULL){
            this->tail=head;   //200
        }
        deleteNode->prev = NULL;//
        deleteNode->next = head;
        head->prev = deleteNode;
        this->head = deleteNode;

        // noe change the pointers of the deleted node
        prevOFDeleteNode->next = nextOfDeleteNode;
        
        if (nextOfDeleteNode != NULL)
        {
            nextOfDeleteNode->prev = prevOFDeleteNode;
        }
    }

    void setValue(int x)
    {
        if ( umap.find(x) != umap.end())
        {
            //hit
            // Node already exists
            //  so for that delete that node and add at the front of the linked list
            //  now change the head pointer 44
            updateCache(head, tail, x);
            return;
        }
        if (count == capacity)
        {
            // now delete the last node and attach the new node at the front of the linnked list

            Node *newTail = tail->prev;
            newTail->next = NULL;
            tail = newTail;
            // cout<<"t data"<<tail->data<<" "<<"end";
            count -= 1;
        }
       

        if (count < capacity && head == NULL && tail == NULL)
        {
            Node *newNode = new Node(x);
            head = newNode;
            tail = newNode;
            umap.insert({x, newNode});
            count += 1;
        }
        else
        {
            Node *newNode = new Node(x);
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            umap.insert({x, newNode});
            count += 1;
        }
    }
};
int main()
{
    LRUCache cache(4);
    // cache.printLL();
    cache.setValue(10);
    cache.printLL();
    // cout<<"\n";
    cache.setValue(20);
    cache.printLL();

    cache.setValue(10);
    // cout<<"new "<<cache.count<<"\n";
    cache.printLL();

    cache.setValue(30);
    cache.printLL();
    // cout<<cache.count;
    cache.setValue(40);
    cache.printLL();
    cache.setValue(50);
    cache.printLL();
    cache.setValue(30);
    cache.printLL();
    cache.setValue(40);
    cache.printLL();
    cache.setValue(60);
    cache.printLL();
    cache.setValue(30);
    cache.printLL();
    
}