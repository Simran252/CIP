#include<bits/stdc++.h>
#include"UnDirectedWweightGraph.h"
using namespace std;
void printVector(vector<int> &res,int source){
    
    for(int i=1;i<res.size();i++){
        if(res[i]==INT_MAX){
            res[i]=-1;
        }
        cout<<res[i]<<" ";
    }
    cout<<endl;

}
class Compare{
    public:
    bool operator()(pair<int,int> &a,pair<int,int> &b){
        //sort acc to second valuei.e distance
        if(a.second<b.second){
            return true;
        }
        return false;
    }
};

vector<int> dijkestraAlgo(vector<vector<pair<int,int>>> &adj,int n,int source){
    vector<int> shortestPath(n,INT_MAX);
    //min pq;
    priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> pq;
    //node distance
    pq.push({source,0});
    shortestPath[source]=0;
    while(pq.empty()==false){
        int node=pq.top().first;
        int dist=pq.top().second;
        pq.pop();
        for(auto it:adj[node]){
            if(dist+it.second<shortestPath[it.first]){
                shortestPath[it.first]=dist+it.second;
                pq.push({it.first,shortestPath[it.first]});

            }

        }
    }
    return shortestPath;
}
int main(){
    Graph g(6);
    // cout<<"ans us";
    g.addEdge(1,2,2);
    g.addEdge(1,4,1);
    g.addEdge(2,5,5);
    g.addEdge(2,3,4);
    g.addEdge(4,3,3);
    g.addEdge(3,5,1);
    int source;
    cout<<"enter source"<<"\n";
    cin>>source;
    auto it=dijkestraAlgo(g.adj,g.adj.size(),source);
    printVector(it,source);
    


}