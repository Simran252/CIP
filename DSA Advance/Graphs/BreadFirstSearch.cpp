#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void breadthFirstSearch(vector<vector<int>> &res,int v,int s){
    bool visited[v];
    for (int i = 0; i <v; i++)
    {
        visited[i]=false;
    }
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
void addEdge(vector<vector<int>> &res,int u,int v){
    res[u].push_back(v);
    res[v].push_back(u);

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
    addEdge(arr,0,1);
    addEdge(arr,0,2);
    addEdge(arr,1,3);
    addEdge(arr,2,3);
    addEdge(arr,2,4);
    breadthFirstSearch(arr,v,0);
    


    
}