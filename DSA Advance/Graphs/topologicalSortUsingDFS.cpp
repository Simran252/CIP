#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
        vector<vector<int>> adj;
        Graph(int v){
            for (int i = 0; i<v; i++)
            {
                vector<int> row;
                adj.push_back(row);
            }
        }
        void addEdge(int u,int v){
            adj[u].push_back(v);

        }
};
void printVector(vector<int> &v){
   for(auto it:v){
       cout<<it<<" ";
   }
    cout<<"\n";

}
void util(vector<vector<int>> &adj,int v,bool visited[],stack<int> &st,int s){

        visited[s]=true;
        for (int i = 0; i <adj[s].size(); i++)
        {
            /* code */
            if (visited[adj[s][i]]==false)
            {
                /* code */
                util(adj,v,visited,st,adj[s][i]);

            }
            

        }
        st.push(s);
        // return;  
}
vector<int> topologicalSorting(vector<vector<int>> adj,int v){
    bool visited[v];
    vector<int> res;
    stack<int> st;
    memset(visited,false,sizeof(visited));
    for (int i = 0; i <v; i++)
    {
        /* code */
        if(visited[i]==false){
            util(adj,v,visited,st,i);
        }
    }
    while (st.empty()==false)
    {
        /* code */
        res.push_back(st.top());
        st.pop();
    }
    return res;
}
int main(){
    int v=6;
    Graph g(v);
    g.addEdge(5,0);
    g.addEdge(5,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    g.addEdge(4,0);
    g.addEdge(4,1);
    auto it=topologicalSorting(g.adj,v);
    printVector(it);

    Graph g1(3);
    g1.addEdge(0,2);
    g1.addEdge(0,1);
    
    // g1.addEdge()
     it=topologicalSorting(g1.adj,g1.adj.size());
    printVector(it);


    
    
    
    


}