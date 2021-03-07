#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    
    vector<int > v={10, 20, 30, 40, 50, 60};
    rotate(v.begin(),v.begin()+2,v.end());
    for (auto i:v)
    {
       cout<<i<<" ";
    }
    cout<<"\n";
    //on array
    int arr[]={10, 20, 30, 40, 50, 60};
    rotate(arr+1,arr+3,arr+6);
    for (auto i:arr)
    {
       cout<<i<<" ";
    }
    


}