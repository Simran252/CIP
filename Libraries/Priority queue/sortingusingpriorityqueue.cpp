#include<iostream>
#include<queue>
using namespace std;
void sortArrayUsingPriorityQueue(int*arr,int n){
    //min priority queue
    priority_queue<int,vector<int>,greater<int >> pq(arr,arr+n);
    while(pq.empty()==false){
            cout<<pq.top()<<" ";
            pq.pop();

    }


}
int main(){
    int arr[]={3,5,1,90,3,2,-11,-45};
    int size=sizeof(arr)/sizeof(arr[0]);
    sortArrayUsingPriorityQueue(arr,size);

}