#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
        vector<vector<int>> adj;
        Graph(int v){
            for (int i = 0; i <v; i++)
            {
                vector<int> row;
                adj.push_back(row);
            }
            
        }
        void addEdge(int u,int v){
            //directed graph
            adj[u].push_back(v);

        }
        void printGraph(vector<vector<int>> &adj){
        for (int i = 0; i <adj.size()+1; i++)
        {
            cout<<i<<": ";
            for (int j = 0;j<(adj[i].size()); j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<"\n";
            
        }
    
}


};
void printVector(vector<int> &res){
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<"\n";
}
void util(vector<vector<int>> &adj,vector<bool> &visited,int *indegre,int v,vector<int> &res){
    queue<int> q;
    for (int i = 1; i <v; i++)
    {
        if (visited[i]==false&&indegre[i]==0)
        {
            q.push(i);
            visited[i]=true;

        }
        
    }
    while (q.empty()==false)
    {
        int front=q.front();
        res.push_back(front);
        q.pop();
        for (int i = 0; i <adj[front].size(); i++)
        {
            int ele=adj[front][i];
            indegre[ele]--;
            if (visited[ele]==false&&indegre[ele]==0)
            { 
               q.push(ele);
               visited[ele]=true;

           }
        }
        
    }
}

vector<int> topologicalSortKahn(vector<vector<int>> &adj,int v){
    vector<int> r;
    vector<bool> visited(v,0);
    int inDegre[v];
    memset(inDegre,0,sizeof(inDegre));

    for (int i = 1; i <adj.size(); i++)
    {
        if (i==0)
        {
            inDegre[i]=-1;
        }
        for (int j = 0;j<(adj[i].size()); j++)
        {
           inDegre[adj[i][j]]+=1;
        }
    }

    util(adj,visited,inDegre,v,r);
    return r;
}

int main(){
    int v=9;
    Graph g(v);

    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(5,3);
    g.addEdge(6,5);
    g.addEdge(7,2);
    g.addEdge(8,3);

    auto it=topologicalSortKahn(g.adj, v);

    g.printGraph(g.adj);

    printVector(it);
    return 0;
}