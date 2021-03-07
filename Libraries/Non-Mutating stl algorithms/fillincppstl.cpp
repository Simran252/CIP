#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main(){

    vector<int> v{4,1,2,3,5,5,11,21};
    fill(v.begin()+2,v.end()-2,-1);
    for (int i:v)
    {
       cout<<i<<" ";
    }
    cout<<"\n";
    //on arrays
    int arr[]={11,32,45,67};
    fill(arr,arr+4,-1);
    for (int i:arr)
    {
       cout<<i<<" ";
    }
 cout<<"\n";
    //doubly list i.e list

    list<int> l{10,20,50,7,9};
    fill(l.begin(),l.end(),-2);
    for ( auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<"\n";

    //string
    string s="geeks";
    fill(s.begin(),s.end(),'@');
    cout<<s<<"\n";

    

    


}