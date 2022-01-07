#include<bits/stdc++.h>
using namespace std;
void medianOfAStream(int*arr, int n){
    vector<int> ans;
    priority_queue<int> leftMxpq;
    priority_queue<int, vector<int> , greater<int>> rightmnpq;
    leftMxpq.push(arr[0]);
    cout<<arr[0]<<" ";


    for(int i=1;i<n;i++){

        if(leftMxpq.size()!=rightmnpq.size()){
            if(leftMxpq.top()>arr[i]){
                //shift leftmxtop to rightmintop
                int a=leftMxpq.top();
                
                //then pop leftmxtop form leftmx
                leftMxpq.pop();
                rightmnpq.push(a);
                //put arr[i] into leftmxtop
                leftMxpq.push(arr[i]);

            }
            else{
                rightmnpq.push(arr[i]);

            }
            cout<<(float)(leftMxpq.top()+rightmnpq.top())/2<<" ";


        }
        else{
            //add ele to leftmxpq
            // now median will be obe elei
            int a=leftMxpq.top();
            int b=rightmnpq.top();
            if(arr[i]>rightmnpq.top()){
                //shift rightmintop to leftmaxpq
                rightmnpq.pop();
                leftMxpq.push(b);
                //then add arr[i] into rightminpq
                rightmnpq.push(arr[i]);
            }
            else{
                //put element in the leftminpq
                leftMxpq.push(arr[i]);
            }
            cout<<leftMxpq.top()<<" ";
        }
        


    }
}
int main(){
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    medianOfAStream(arr, n);
    

}