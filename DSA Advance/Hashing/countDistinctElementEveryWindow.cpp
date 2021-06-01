
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<unordered_set> 
#include<climits>
#include<vector>
using namespace std;

void printVector(vector<int> &ve){
     for(auto i:ve)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
}
vector<int> distinctElementEveryWindowUsingEfficientSolu(int arr[],int n,int k){
    unordered_map<int,int> umap; 
    vector<int> res;
    for (int i = 0; i <k; i++)
    {
         umap[arr[i]]++;
    }
    res.push_back(umap.size()); 
    for (int i = k; i <n; i++)
    {
    umap[arr[i-k]]--; 
      if (umap.find(arr[i])==umap.end())
      {
          umap[arr[i]]++;

      }
      //remove element one
     int rem=umap[arr[i-k]];
     if (rem==0)
     {
         cout<<"enter remove "<<"\n";
         umap.erase(arr[i-k]);
          
     } 

      res.push_back(umap.size());


    }
    return res;
}
vector<int>  distinctElementEveryWindow(int arr[],int n,int k){
    vector<int> ve;
    unordered_set<int> uset;
    int j=k-1;
    for (int i = 0;j<n;i++) 
    {
        
        uset.insert(arr+i,arr+j+1);
        j++;
        
        ve.push_back(uset.size());
        uset.erase(uset.begin(),uset.end()); 
       


    }
    return ve;

}
int main(){
        

    

cout<<"Enter test cases"<<"\n";
    int t,sum;
    cin>>t; 
    while (t--)
    {
        cout<<"Enter size of array"<<"\n";
        int m;
        cin>>m;
        cout<<"enter array elements 1"<<"\n";
        int arr1[m]; 
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        } 
        cout<<"Enter k"<<"\n"; 
        int k;
        cin>>k;
        cout<<"using hasing i.e unordered_map"<<" ";
        vector<int> ve=distinctElementEveryWindow(arr1,m,k); 
        printVector(ve);
        vector<int> res=distinctElementEveryWindowUsingEfficientSolu(arr1,m,k); 
        printVector(res);

        
    }
}