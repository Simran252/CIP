#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int  usingHashing(int arr[],int n){

    unordered_set<int> hash(arr,arr+n);
    return hash.size();
//time comp=theta(n)
//sapce compl=O(n)
}

int main(){
   cout<<"Enter test cases"<<"\n";
    int t;
    cin>>t;
    while (t--)
    {
        int m;
        cin>>m;
        int arr1[m]; 
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        }
       
        int ans=usingHashing(arr1,m);
        cout<<"disticnt ele "<<ans<<"\n";

    }
    
}
// link to the question
