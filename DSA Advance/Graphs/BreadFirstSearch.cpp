#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
class Edge{
    public:  
     void addEdge(vector<vector<int>> &res,int u,int v){
    res[u].push_back(v);
    res[v].push_back(u);

}


};



void breadthFirstSearch(vector<vector<int>> &res,int v,int s,bool*visited){
    // bool visited[v];
    // for (int i = 0; i <v; i++).
    // {
    //     visited[i]=false;
    // }
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while (q.empty()==false)
    {
        int a=q.front();
        cout<<a<<" ";
        q.pop();
        for (int i = 0; i<res[a].size(); i++)
        {
            
            if(!visited[res[a][i]])
            {
                /* code */
                q.push(res[a][i]);
                visited[res[a][i]]=true;

            }
            

        }

        

    }
    

}
void disconnecedGraph(vector<vector<int>> &res,int v){
    bool visited[v];
    memset(visited,false,sizeof(visited));
    for (int i = 0; i <v; i++)
    {
        /* code */
        if (visited[i]==false)
        {
            /* code */
             breadthFirstSearch(res,v,i,visited);
        }
        
    }
}

int main(){
    //list
    
    int v=5;
    vector<vector<int>> arr;
    for (int i = 0; i <v; i++)
    {
        /* code */
        vector<int> r;
        arr.push_back(r);

    }

    // addEdge(arr,0,1);
    // addEdge(arr,0,2);
    // addEdge(arr,1,3);
    // addEdge(arr,2,3);
    // addEdge(arr,2,4);
    // breadthFirstSearch(arr,v,0);

    //for disconnected graphs
    v=7;
    Edge e;
    e.addEdge(arr,0,1);
    e.addEdge(arr,1,3);
    e.addEdge(arr,0,2);
    e.addEdge(arr,2,3);

    e.addEdge(arr,4,5);
    e.addEdge(arr,4,6);
    e.addEdge(arr,5,6);
    disconnecedGraph(arr,v);

    


    
}