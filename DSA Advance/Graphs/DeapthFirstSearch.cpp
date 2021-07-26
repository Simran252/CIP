#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    public:
    void addEdge(vector<vector<int>> &res,int u,int v){
        res[u].push_back(v);
        res[v].push_back(u);



    }

};
void DFSRecursive(vector<vector<int>> &res,int s,bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
     int n=res[s].size();
    // cout<<"size is"<<n<<"\n";
    for (int i=0;i<n;i++)
    {
        if (visited[res[s][i]]==false)
        {
            /* code */
            DFSRecursive(res,res[s][i],visited);
            
        }
        
    }

}
void deapthFirstSearch(vector<vector<int>> &res,int v,int s){
    bool visited[v];
    memset(visited,0,sizeof(visited));
    DFSRecursive(res,s,visited);


}
int main(){
    int v=5;
    vector<vector<int>> arr;
    for (int i = 0; i<v; i++)
    {
        /* code */
        vector<int> r;
        arr.push_back(r);
        

    }
    Graph e;                    
    e.addEdge(arr,0,1);
    e.addEdge(arr,0,2);
    e.addEdge(arr,1,3);
    e.addEdge(arr,1,4);
    e.addEdge(arr,2,3);
    e.addEdge(arr,3,4);
    deapthFirstSearch(arr,v,0);

    
}