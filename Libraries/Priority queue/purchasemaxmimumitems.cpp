#include<iostream>
#include<queue>
using namespace std;

int pusrchaseMaximumItems(int*arr,int n,int sum){
    int count=0;
    int t=0;
    priority_queue<int,vector<int> ,greater<int>> pq(arr,arr+n);//O(n)
    while(t!=n-1){
        if (pq.top()<=sum)
        {
            pq.pop();

            count++;
        }
        t++;

        
    }
    return count;

}
int main(){
    int T;
    cout<<"enter test cases"<<"\n";
    cin>>T;
    while(T--){
        
    int n;
    cout<<"Enter size"<<"\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter sum"<<"\n";
    int sum;
    cin>>sum;
    int res=pusrchaseMaximumItems(arr,n,sum);

    cout<<"Items that can be puchased with given sum is"<<res<<"\n";


    }

}