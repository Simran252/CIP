#include<iostream>
#include<queue>
using namespace std;
void sortKSortedArrays(int*arr,int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    int index=0;
    for (int i = 0; i <=k; i++)
    {
        /* code */
        pq.push(arr[i]);

    }
    for (int i=k+1;i<n;i++)
    {
        /* code */
        
        arr[index]=pq.top();
        pq.pop();
        index++;
        pq.push(arr[i]);


    }
    while (pq.empty()==false){
        arr[index++]=pq.top();
        pq.pop();

    }

}
int main(){
    int n,k;
    cout<<"enter n"<<"\n";
    cin>>n;
    cout<<"enter k "<<endl;
    cin>>k;
    cout<<"enter array size"<<"\n";
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortKSortedArrays(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}