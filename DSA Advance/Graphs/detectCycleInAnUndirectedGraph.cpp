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
    int v=5;
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
    e.addEdge(arr,2,3);
    e.addEdge(arr,1,4);


    cout<<detectCycle(arr,v,0);
}