#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void usingHashing(int arr[],int n){
    unordered_map<int,int> hashmap;
    int count=0;
    for (int i = 0; i <n; i++)
    {
        hashmap[arr[i]]++;
       
    }
    for (int i = 0; i <n; i++)
    {
        auto it=hashmap.find(arr[i]);
        if (it->second!=-1&&arr[i]==it->first)
        {
          cout<<it->first<<" "<<it->second<<"\n";
          
        }
        hashmap[it->first]=-1;

        
    }
}

int main(){
   cout<<"Enter test cases"<<"\n";
    int t;
    cin>>t;
    while (t--)
    {
        cout<<"Enter size of array"<<"\n";
        int m;
        cin>>m;
        int arr1[m]; 
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        }
        
       usingHashing(arr1,m);
       

    }
    
}
// link to the question
