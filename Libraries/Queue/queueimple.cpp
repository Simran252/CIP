#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    
   cout<<"size of queue is "<<q.size()<<"\n";
    cout<<q.front()<<" "<<q.back()<<endl;

    q.pop();
   //traversing a queue
   while(q.empty()==false){
       
       cout<<q.front()<<" ";
       q.pop();

   }
}