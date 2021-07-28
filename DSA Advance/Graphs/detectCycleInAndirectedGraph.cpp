#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    public:
    vector<vector<int>> adj;
    Graph(int v){
        for (int i = 0; i <v; i++)
        {
            /* code */
            vector<int> v;
            adj.push_back(v);
        }
        

    }
    
    void addEdge(int u,int v){
        adj[u].push_back(v);

    }
};
bool checkCycle(vector<vector<int>> &res,int s,bool visited[],bool recstack[]){
    visited[s]=true;
    recstack[s]=true;
    for (int i = 0; i<(res[s].size()); i++)
    {
        if (visited[res[s][i]]==false)
        {
            if(checkCycle(res,res[s][i],visited,recstack)){
                
                return true;
            }
            
        }
        else if(visited[res[s][i]]==true&&recstack[res[s][i]]==true){
            
            return true;

        }
    }
    recstack[s]=false;
    return false;


}
bool detectCycleInDG(vector<vector<int>> &res,int v){
    bool visited[v],recstack[v];
    memset(visited,false,sizeof(visited));
    memset(recstack,false,sizeof(recstack));
    for (int i = 0; i < v; i++)
    {
        if (visited[i]==false)
        {
            if(checkCycle(res,i,visited,recstack)){
                return true;
            }
        }
        
        
    }
    return false;
    

}
int main(){

    int v=6;
    vector<vector<int>> arr;
    for (int i = 0; i<v;i++)
    {
        /* code */
        vector<int> r;
        arr.push_back(r);
        

    }
    // //object e contains cycle
    Graph e(v);
    e.addEdge(0,1);
    e.addEdge(2,1);
    e.addEdge(2,3);
    e.addEdge(3,4);
    e.addEdge(4,5);
    e.addEdge(5,3);
    cout<<detectCycleInDG(e.adj,v)<<"\n";
   
    // cout<<detectCycleInDG(arr,v)<<"\n";
   
     //object f does not contains cycle
    Graph f(v);
    f.addEdge(0,1);
    f.addEdge(2,1);
    f.addEdge(2,3);
    f.addEdge(3,4);
    f.addEdge(4,5);
    
    cout<<detectCycleInDG(f.adj,v)<<"\n";


    
}