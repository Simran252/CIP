#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

vector<int> usingHashing(int a[],int b[],int m,int n){
    


}

int main(){
   cout<<"Enter test cases"<<"\n";
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[n],arr2[m];
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0;i<n; i++)
        {
            cin>>arr2[i];
        }
        vector<int> v= usingHashing(arr1,arr2,m,n);
        for (int i:v) 
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        


    }
    
}