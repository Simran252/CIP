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
bool khanBfsAlgo(vector<vector<int>> &adj,bool*visited ,int inDegre[]){
    queue<int> q;
    int count=0;

    for(int i=0;i<adj.size();i++){
        if(inDegre[i]==0){
            q.push(i);
            visited[i]=true;

        }
    }
    while(q.empty()==false){
        int node=q.front();
        q.pop();
        if(inDegre[node]==0){
            count+=1;
            
        }
        for(auto it:adj[node]){
            inDegre[it]--;
            if(visited[it]==false&&inDegre[it]==0){
                q.push(it);
                visited[it]=true;

            }

        }
    }
    if(count!=adj.size()){
        return true;

    }
    return false;

}
bool detectCycleInDG(vector<vector<int>> &adj,int v){
    //using kahn's Bfs ALGO
    //count the incoming edges
    bool visited[v];
    memset(visited,false,sizeof(visited));
    int inDegree[v];
    memset(inDegree,0,sizeof(inDegree));

    for(int i=0;i<v;i++){
        for(int j=0;j<adj[i].size();j++){
            inDegree[adj[i][j]]+=1;
            
        }
    }

    if(khanBfsAlgo(adj,visited,inDegree)){
        return true;
    }
    return false;

}
int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    g.addEdge(4,1);

    bool ans=detectCycleInDG(g.adj,g.adj.size());
    ans==1?cout<<"yes cycle is there in an directed graph":cout<<"no cycle not found in directed graph "<<"\n";


}