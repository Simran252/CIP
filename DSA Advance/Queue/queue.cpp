#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
void printQueue(queue<int> q){
    while (q.empty()==false)
    {
        /* code */
        cout<<q.front()<<" ";
        q.pop();
    }
}
void printVector(vector<int> &vc){
    for (auto it:vc)
    {
        /* code */
        cout<<it<<" ";
    }
    cout<<"\n";
    

}
void  reverseUsingRec(queue<int> q){
    //base case
    if (q.empty()==true)
    {
        /* code */
        // cout<<q.front();
        return;
        
    }
    int front=q.front();
    q.pop();
    reverseUsingRec(q);
    q.push(front);



}
vector<int> reverseQueue(queue<int> q){
    stack<int> st;
    vector<int> v;
    while (q.empty()==false)
    {
        /* code */
        st.push(q.front());
        q.pop();

    }
    while (st.empty()==false)
    {
        /* code */
        v.push_back(st.top());
        st.pop();
        
    }
    return v;
    
    
    

}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    //print queue
    q.push(50);
    cout<<"size of queue is "<<q.size()<<endl;
    // cout<<"Queue is "<<endl;
    
    // queue 
    // front=10 20 30 40 rear=50 
    
    //reverse a queue
    cout<<"Queue after reverse is "<<endl;
  
    vector<int> reverse=reverseQueue(q);
    printVector(reverse);

    cout<<"Queue after reverse using recursion is  "<<endl;

    reverseUsingRec(q);
    printQueue(q);
    


    

}