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
bool checkBfsCycle(vector<vector<int>> &res,bool visited[],int s){
    visited[s]=true;
    int parent=-1;
    queue<pair<int,int>> q;
    q.push({0,-1});
    while (q.empty()!=true)
    {
        int node=q.front().first;
        parent=q.front().second;

        q.pop();
        
        // parent=q.f
        for (int i = 0; i<(res[node].size()); i++)
        {
            /* code */
            if(visited[res[node][i]]==false){
                q.push({res[node][i],node});
                visited[res[node][i]]=true;

            }
            else if(res[node][i]!=parent){
                //cycle
                return true;

            }
        }
        

    }
    return false;


}
bool detectCycleBfs(vector<vector<int>> &res,int v,int s){
    bool visited[v];
    int parent=-1;
    memset(visited,false,sizeof(visited));
    for (int i =0; i <v; i++)
    {
      if (visited[i]==false)
      {
          if(checkBfsCycle(res,visited,0)){
              return true;
          }
        
      }
      
        
    }
    return false;
    


}
bool dfsRecursive(vector<vector<int>> &res,int s,int parent,bool visited[]){
    visited[s]=true;
    int n=res[s].size();
    for (int i = 0; i <n; i++)
    {
        /* code */
        if (visited[res[s][i]]==false)
        {

            if (dfsRecursive(res,res[s][i],s,visited)==true)
            {
                /* code */
                return true;
            }
            

        }
        
        else if (res[s][i]!=parent)
        {
            /* code */
            return true;
        }
           
    }

    return false;
}
bool detectCycle(vector<vector<int>> &res,int v,int s){
    bool visited[v];
    memset(visited,false,sizeof(visited));
    for (int i = 0; i <v; i++)
    {
        /* code */
        if (visited[i]==false)
        {

            if(dfsRecursive(res,i,-1,visited)){
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
    Graph e;
    e.addEdge(arr,0,1);
    e.addEdge(arr,1,2);
    e.addEdge(arr,1,3);
    e.addEdge(arr,3,4);
    e.addEdge(arr,2,3);
    e.addEdge(arr,2,4);


    cout<<detectCycle(arr,v,0)<<"\n";
    cout<<"cheking cycle using bfs traversal"<<"\n";
    cout<<detectCycleBfs(arr,v,0);

}