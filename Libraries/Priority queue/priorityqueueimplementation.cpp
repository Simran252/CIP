#include<iostream>
#include<queue>
using namespace std;
int main(){
    //prioroty queue
    priority_queue<int> pq;
    pq.push(10);
    pq.push(16);
    pq.push(56);
    pq.push(2);
    pq.push(60);
    cout<<"Size of pq is "<<pq.size()<<endl;
     
    cout<<pq.top()<<endl;

    //tarvesre
    cout<<"Max prioroty queue is "<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
        

    }
    //min heap
    priority_queue<int,vector<int>,greater<int>> pqmin;
    pqmin.push(10);
    pqmin.push(16);
    pqmin.push(56);
    pqmin.push(2);
    pqmin.push(60);
    cout<<"Size of pq is "<<pqmin.size()<<endl;
    cout<<pqmin.top()<<endl;
    cout<<"Min prioroty queue is "<<endl;
    while(pqmin.empty()==false){
        cout<<pqmin.top()<<" ";
        pqmin.pop();

    }
    cout<<"\n";

    //another menthod to create prority queue from araray/vector
    int arr[]={10,5,16};

    priority_queue<int> pq3(arr,arr+3);
    while(pq3.empty()==false){
        cout<<pq3.top()<<" ";
        pq3.pop();


    }
    cout<<"\n";

    //another nethod to create min heap 
    int arr2[]={10,5,16};
    
    for (int i = 0; i < 3; i++)
    {
        /* code */
        arr2[i]=-arr2[i];

    }
    priority_queue<int> pe(arr2,arr2+3);
    while(pe.empty()==false){
        cout<<(-pe.top())<<" ";
        pe.pop();

    }

    
    

}