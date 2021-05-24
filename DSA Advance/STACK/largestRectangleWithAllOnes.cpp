#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ele;
    vector<vector<int>> row;
    for (int i = 0; i <n; i++)
    {
        /* code */
        vector<int> col;
        for (int j = 0; j <m; j++)
        {
            /* code */
            cin>>ele;
            col.push_back(ele);
        }
        row.push_back(col);
        //btao 
        
    }
    // print2DArray(row);
    
}