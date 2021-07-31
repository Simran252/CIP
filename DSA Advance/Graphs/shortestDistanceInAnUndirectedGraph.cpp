#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
        vector<vector<int>> adj;
        Graph(int v){
            for(int i=0;i<v;i++){
                vector<int> row;
                adj.push_back(row);

            }

        }
        void addEdge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
};
void printVector(vector<int> &vec){
    cout<<"vector is"<<"\n";
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<"\n";
}
void findDistance(vector<vector<int>> &adj,int v,vector<int> &dist){
    queue<int> q;
    q.push(0);
    while(q.empty()==false){
        int node=q.front();
        q.pop();
        for(int i=0;i<adj[node].size();i++){
            if((dist[node]+1)<dist[adj[node][i]]){
                dist[adj[node][i]]=dist[node]+1;
                q.push(adj[node][i]);
                

            }
            
        }
    }

}
vector<int> shortestPathInUG(vector<vector<int>> &adj,int v){
    vector<int> dist(v);
    dist[0]=0;
    fill_n(dist.begin()+1,v,INT_MAX);
    findDistance(adj,v,dist);

    return dist;

}

int main(){
    Graph g(9);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(0,3);
    g.addEdge(2,6);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.addEdge(6,7);
    g.addEdge(6,8);
    g.addEdge(7,8);
    auto it=shortestPathInUG(g.adj,g.adj.size());
    printVector(it);







}