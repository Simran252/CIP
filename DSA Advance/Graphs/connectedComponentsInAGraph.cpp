#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
class Edge{
    public:  
    static void addEdge(vector<vector<int>> &res,int u,int v){
    res[u].push_back(v);
    res[v].push_back(u);

}
};
void breadthFirstSearch(vector<vector<int>> &res,int s,bool visited[]){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while (q.empty()==false)
    {
        int curr=q.front();
        q.pop();
        auto it=res[curr]; 
        cout<<"array is"<<"\n";
        for (int i = 0; i <it.size(); i++)
        {
            /* code */
            cout<<it[i]<<" ";
        }
        cout<<"\n";
        for (int i=0;i<it.size();i++)
        {
            if(visited[it[i]]==false){
                q.push(it[i]);
                visited[it[i]]=true;

            }
           
            
        }
        

    }
    




}
int connectedComponents(vector<vector<int>> &res,int v){
    int ans=0;
    bool visited[v];
    memset(visited,false,sizeof(visited));
    for (int i = 0; i < v; i++)
    {
        /* code */
        if (visited[i]==false)
        {
            /* code */
            ans++;
            breadthFirstSearch(res,i,visited);
        }
        
    }
    return ans;
}
int main(){
    int v=9;
    vector<vector<int>> arr;
    for (int i = 0; i <v; i++)
    {
        /* code */
        vector<int> r;
        arr.push_back(r);

    }
    Edge e;
    e.addEdge(arr,0,1);
    e.addEdge(arr,1,2);
    e.addEdge(arr,0,2);
    e.addEdge(arr,3,4);
    e.addEdge(arr,5,6);
    e.addEdge(arr,5,7);
    e.addEdge(arr,7,8);
    cout<<connectedComponents(arr,v);


}