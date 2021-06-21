#include<iostream>
#include<vector>
#include<set>
#include<climits>
using namespace std;
void printVector(vector<int> vec){
    for (auto it:vec)
    {
        /* code */
        cout<<it<<" ";
    }
    cout<<"\n";

}

vector<int> effientSol(int arr[],int n){

    set<int> s;
    vector<int> v;
    v.push_back(-1);
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if (s.lower_bound(arr[i])!=s.end())
        {
            int ceil=*s.lower_bound(arr[i]);
            v.push_back(ceil);
        }
        else{
            v.push_back(-1);
        }
        s.insert(arr[i]);
    }
    return v;
    

}
vector<int> ceilingInArray(int arr[],int n){
    vector<int> v;
    v.push_back(-1);
    int diff=0,res=-1;
    for(int i=1;i<n;i++){
        // diff=min(arr[i],arr[i-1]);
        res=INT_MAX;
        for (int j=i-1;j>=0;j--)
        {

            if(arr[j]>arr[i]){
                res=min(res,arr[j]);
            }
        }
        if(res==INT_MAX){
        v.push_back(-1);
        }
        else{
            v.push_back(res);
        }
    }
        

    // 2 8 30 15 25 12
    // -1 -1 -1 30 30 15 
    
    return v;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    auto it=ceilingInArray(arr,n);
    printVector(it);
    cout<<"using set "<<"\n";
    printVector(effientSol(arr,n));

}