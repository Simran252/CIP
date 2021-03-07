#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v1{10,43,56,89,10};
    vector<int> v2{43,10,56,10,89};
    if (is_permutation(v1.begin(),v1.end(),v2.begin()))
    {
        
        cout<<"yes"<<"\n";
    }else
    {
        
        cout<<"no"<<"\n";
    }
    vector<int> v3 = {10, 20, 3, 5, 20};
    vector<int> v4 = {20, 10, 5, 3, 5};
    if (is_permutation(v3.begin(),v3.end(),v4.begin()))
    {
        
        cout<<"yes"<<"\n";
    }else
    {
        
        cout<<"no"<<"\n";
    }
    
    
    //using array
    int arr1[]={10,30,4,45,67,10};
    int arr2[]={10,30,4,45,8,10};
    if (is_permutation(arr1,arr1+6,arr2))
    {
        cout<<"yes"<<"\n";
    }else{
        cout<<"no"<<"\n";
    }
    
}