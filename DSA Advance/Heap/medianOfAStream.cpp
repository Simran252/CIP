#include<bits/stdc++.h>
using namespace std;
vector<int> medianOfAStream(int*arr, int n){
    // /
    vector<int> ans;
    priority_queue<int> maxpq;
    priority_queue<int, vector<int>, greater<int>> minpq;
    maxpq.push(arr[0]);
    ans.push_back(arr[0]);

    if(arr[i]<maxpq.top()){
        int a=maxpq.top();
        maxpq.pop();
        minpq.top(a);
        maxpq.top(arr[i]);
    }
    ans.push_back((maxpq.top()+minpq.top())/2);

    for(int i=2;i<n;i++){
        
        int apq=maxpq.top();
        int bpq=minpq.top();

        if(arr[i]<apq && i%2==0){
            maxpq.push(arr[i]);

        }
         if(arr[i]<apq && i%2!=0){
            int maxi=maxpq.top();
            maxpq.pop();
            minpq.push(maxi);
            maxpq.push(arr[i]);

        }
        if(arr[i]>apq && arr[i]>bpq && i%2==0){
            //shift bqp too apq
            int mini=minpq.top();
            minpq.pop();
            maxpq.push(mini);
            minpq.push(arr[i]);
        }
        else{
            maxpq.push(arr[i]);
            
        }
        // if(apq<arr[i]){
        //     minpq.push(apq);

        // }
        // else{
        //     maxpq.pop();
        //     minpq.push(apq);
        //     maxpq.push(arr[i]);
            
        // }
        if(i%2==0){
            //one ele is the median
            ans.push_back(maxpq.top());


        }
        else{
            //average to ele is the median
            int median=(maxpq.top()+ minpq.top())/2;
            ans.push_back(median);

        }

        
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res=medianOfAStream(arr, n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    

}