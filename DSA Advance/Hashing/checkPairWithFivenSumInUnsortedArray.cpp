#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

bool usingHashing(int a[],int m,int givemsum){
    unordered_set<int> hash;
    for (int i = 0; i <m; i++)
    {
        if (hash.find(givemsum-a[i])!=hash.end())
        {
            return true;
        }
        else
        {
            hash.insert(a[i]);
        }
    }
    return false;

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
        int givemsum;
        cout<<"Enter given sum"<<"\n";
        cin>>givemsum;
       int ans=usingHashing(arr1,m,givemsum);
       ans==1?cout<<"true":cout<<"false";

    }
    
}
// link to the question
//https://practice.geeksforgeeks.org/problems/key-pair5616/1#
