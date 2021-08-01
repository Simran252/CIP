#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        vector<vector<pair<int,int>>> adj;
        Graph(int v){
            for(int i=0;i<v;i++){
                vector<pair<int,int>> row;
                adj.push_back(row);


            }

        }
        void addEdge(int u,int v,int w){
            // adj[u].push_back(v);

            pair<int,int> p;
            p.first=v;
            p.second=w;

            adj[u].push_back(p);


        }
        void print(){
            for(int i=0;i<adj.size();i++){
                // cout<<i<<" "
                for(int j=0;j<adj[i].size();j++){
                    cout<<i<<" "<<adj[i][j].first<<" "<<adj[i][j].second<<"\n";
                    
                }
            }
            

        }
        
};
void printVec(vector<int> &res){
    for(auto it:res){
        cout<<it<<" ";
    }
}
void util(vector<vector<pair<int,int>>> &adj,vector<int> &path,vector<int> &dist){
    for(int i=0;i<dist.size();i++){
        int weight=dist[i];
        for(auto it:adj[i]){
            if(weight+(it.second)<dist[it.first]){
                    dist[it.first]=weight+it.second;

            }
        }
    }
}
void topologicalSort(vector<vector<pair<int,int>>> &adj,vector<bool> &visited,vector<int> &inDegree,vector<int> &path){
    //bfs
    queue<int> q;
    int v=adj.size();
    for(int i=0;i<v;i++){
        if(inDegree[i]==0){
            q.push(i);
            visited[i]==true;
        }
    }
    while(q.empty()==false){
        int node=q.front();
        q.pop();
        path.push_back(node);
        for(auto it:adj[node]){
            inDegree[it.first]--;
            if(visited[it.first]==false&&inDegree[it.first]==0){
                q.push(it.first);
                visited[it.first]=true;
            }
        }
    }

}
vector<int> shortestDisInDAG(vector<vector<pair<int,int>>> &adj,int v){
    // find topological sort
    vector<int> path;

    vector<bool> visited(v);
    
    vector<int> inDegree(v);
    fill_n(inDegree.begin(),v,0);
    for(int i=0;i<v;i++){
       for(int j=0;j<adj[i].size();j++){
           if(i==0){
               inDegree[0]=0;
               continue;
           }

           
           inDegree[adj[i][j].first]++;

       }
    }
    fill_n(visited.begin(),v,false);
    topologicalSort(adj,visited,inDegree,path);
    

    vector<int> dist(v);
    dist[0]=0;
    fill_n(dist.begin()+1,v,INT_MAX);
    util(adj,path,dist);

    return dist;
    


}
int main(){
    Graph g(6);
    // edge,weight
    g.addEdge(0,1,2);
    g.addEdge(0,4,1);
    g.addEdge(1,2,3);
    g.addEdge(2,3,6);
    g.addEdge(4,2,2);
    g.addEdge(4,5,4);
    g.addEdge(5,3,1);
   

    auto it=shortestDisInDAG(g.adj,g.adj.size());
    printVec(it);
    // g.print();

}