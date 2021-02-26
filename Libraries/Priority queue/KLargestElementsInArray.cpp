#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
void printVector(vector<int> vec){
    cout<<"k largest ele in array is "<<"\n";

    for (auto i:vec)
    {
        
        cout<<i<<" ";

    }
    cout<<"\n";

    
}

vector<int > KLargestElementInArrayUsingModeEffectiveApproach(int arr[],int n,int&k){
    vector<int> vect;

    //min heaap

   priority_queue<int,vector<int>,greater<int>> pq(arr,arr+k);
   for (int i = k+1; i < n; i++)
   {
       /* code */
       if (arr[i]>pq.top())
       {
           /* code */
           pq.pop();
           pq.push(arr[i]);
       }
       
   }
   while(pq.empty()==false){
       vect.push_back(pq.top());
       pq.pop();

       
   }
   return vect;
   
}
vector<int>  KLargestElementInArray(int arr[],int n,int&k){
    vector<int> v;

    priority_queue<int > pq(arr,arr+n);

    for (int i = 0; i < k; i++)
    {
        v.push_back(pq.top());
        pq.pop();


    }

    return v;

}

vector<int>  KLargestElementInArraySimpleApproach(int arr[],int n,int&k){
    vector<int> vec;
   int c=1;
   //sort the array
   sort(arr,arr+n);
   for (int i = n-1;i>=0&&c<=k; i--)
   {
       /* code */
       vec.push_back(arr[i]);
       c++;



   }
   return vec;
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

    int k;
    cout<<"Enter k"<<"\n";
    cin>>k;

    
    vector<int> res=KLargestElementInArraySimpleApproach(arr,n,k);
    cout<<"using simple approach"<<"\n";
    printVector(res);
    
    
    
    vector<int> res2=KLargestElementInArray(arr,n,k);
    cout<<"using prioirity queue "<<"\n";
    printVector(res2);

    //approach 3
    vector<int > res3=KLargestElementInArrayUsingModeEffectiveApproach(arr,n,k);
    cout<<"using effective approach "<<"\n";
    printVector(res3);
    

    }
}