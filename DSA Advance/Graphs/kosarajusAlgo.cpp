#include <bits/stdc++.h>
using namespace std;
class Graph{
    //Directed unWeighted graph
    public:
        vector<vector<int>> adj;
        Graph(int v){
            adj.assign(v,vector<int>());
        }
        void addEdge(int u,int v){
            adj[u].push_back(v);
        }
        void print(){
            for(int i=0;i<adj.size();i++){
                cout<<i<<":";
                for(auto it:adj[i]){
                    cout<<it<<",";
                }
                cout<<"\n";
            }

        }
        

};
void printVector(vector<vector<int>> &reverse){
    cout<<"stronglt connected componentsa are"<<"\n";
    for(int i=0;i<reverse.size();i++){
        for(auto it:reverse[i]){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}
void DFS(int v,vector<vector<int>> &reverse,int source,bool visited[],vector<vector<int>> &stronglyCC,int index){
    visited[source]=true;
    stronglyCC[index].push_back(source);
    for(auto it:reverse[source]){
        if(visited[it]==false){
            DFS(v,reverse,it,visited,stronglyCC,index);
            

        }
    }


}
void reverseEdges(int v,vector<vector<int>> &adj,vector<vector<int>> &reverse){
    for(int i=1;i<v;i++){
        for(auto it:adj[i]){
            reverse[it].push_back(i);

        }
    }
}
void topologicalSort(int v,vector<vector<int>> &adj,bool visited[],stack<int> &st,int source){

    visited[source]=true;
    for(auto it:adj[source]){
        if(visited[it]==false){
            topologicalSort(v,adj,visited,st,it);
        }
    }
    st.push(source);
    
}
vector<vector<int>> kosaRajuAlgo(vector<vector<int>> &adj,int v){
    //find topologocal sort
    bool visited[v];
    memset(visited,false,sizeof(visited));
    stack<int> st;
    for(int i=1;i<v;i++){
        if(visited[i]==false){
            topologicalSort(v,adj,visited,st,i);
            
        }
    }
    //reverse the edges
    vector<vector<int>> reverse(v,vector<int> ());
    reverseEdges(v,adj,reverse);
    
    //call DFS on reversed gragh
    vector<vector<int>> stronglyCC(v,vector<int>());
    memset(visited,false,sizeof(visited));
    int source=-1,index=-1;
    while(st.empty()==false){
        source=st.top();
        st.pop();
        if(visited[source]==false){
            index++;
            DFS(v,reverse,source,visited,stronglyCC,index);
        }
        

    }
    return stronglyCC;
   

}

int main()
{
    // Graph g(6);
    // g.addEdge(1, 2);
    // g.addEdge(2, 3);
    // g.addEdge(3, 1);
    // g.addEdge(2, 4);
    // g.addEdge(4, 5);
    Graph g(8);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(3, 1);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.addEdge(6,4);
    g.addEdge(7,4);
    g.addEdge(6,7);

    g.print();
    auto it = kosaRajuAlgo(g.adj, g.adj.size());
    printVector(it);
    
}