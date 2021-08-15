#include<bits/stdc++.h>
using namespace std;
//UnDirecred Weighted Graph
class Graph{
    public:
        vector<vector<pair<int,int>>> adj;
        Graph(int v){
            vector<pair<int,int>> row;
            for(int i=0;i<v;i++){
                adj.push_back(row);
            }

        }
        void addEdge(int u,int v,int w){
            pair<int,int> p=make_pair(v,w);
            pair<int,int> p2=make_pair(u,w);
            adj[u].push_back(p);
            adj[v].push_back(p2);
        }
         void print(){
            for(int i=0;i<adj.size();i++){
                cout<<i<<":";
                for(int j=0;j<adj[i].size();j++){
                    cout<<adj[i][j].first<<","<<adj[i][j].second<<" ";
                    
                }
                cout<<"\n";
            }
        }

};