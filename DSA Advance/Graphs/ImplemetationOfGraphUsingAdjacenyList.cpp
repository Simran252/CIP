#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<vector<int>> v){
    for (int i = 0; i <v.size(); i++)
    {
        /* code */
        cout<<i<<": ";
        for (auto ix:v[i])
        {
            /* code */
            cout<<ix<<" ";
        }
        cout<<"\n";
        
    }
}
void addEdge(vector<vector<int>> &arr,int u,int v){
    //undi
    arr[u].push_back(v);
    arr[v].push_back(u);
}
int main(){
    int n=4;
    vector<vector<int>> arr;
    
    for (int i = 0; i <n; i++)
    {
        vector<int> r;
        arr.push_back(r);
        
    }
    addEdge(arr,0,1);
    addEdge(arr,0,2);
    addEdge(arr,1,2);
    addEdge(arr,1,3);
    printVector(arr);

    
    
}