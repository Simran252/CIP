#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> reverseKItems(queue<int>&q,int k){
    int size=q.size();

    stack<int  > st;
    //corner case
    if (q.empty()==true||k>size)
    {
        return q;
    }
    
    for (int i = 0; i < k; i++)
    {
        /* code */
        st.push(q.front());
        q.pop();

    }
    while(st.empty()==false){
        q.push(st.top());
        st.pop();

    }
    for (int i = 0; i < size-k; i++)
    {
            int lastinsert=q.front();
            q.pop();
            q.push(lastinsert);

        /* code */
    }
    
    return q;
    //time comp=O(n)

    
}
int main(){
    int k;
    cout<<"Enter k"<<"\n";
    cin>>k;
    queue<int> q;
    q.push(10);
    q.push(200);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    

    queue<int> q2=reverseKItems(q,k);
    cout<<"queue is"<<"\n";
    while(q2.empty()==false){
        cout<<q2.front()<<" ";
        q2.pop();

    }

}
