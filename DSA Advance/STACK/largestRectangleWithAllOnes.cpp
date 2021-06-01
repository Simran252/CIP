#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
void printMatrix(vector<vector<int>> &ve){
    for (int i = 0; i < ve.size(); i++)
    {
        /* code */
        for (int j = 0; j<ve[i].size(); j++)
        {

            /* code */
            cout<<ve[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    
}
int largestArea(int arr[],int n){
    //find area
    stack<int> st;
   int tp,res=0,curr=0;
    for (int i = 0; i <n; i++)
    { 
         //next smaller
            while (st.empty()==false&&arr[st.top()]>=arr[i])
            { 
                tp=st.top();
                st.pop();
                 curr=arr[tp]*(st.empty()?1:i-st.top()-1);
                res=max(res,curr);
                

            }  
            st.push(i); 
    }

            //previous smaller
            while (st.empty()==false)
            {
                /* code */
                tp=st.top();
                st.pop();
                curr=arr[tp]*(st.empty()?n:n-st.top()-1);
                res=max(res,curr);


            }
 
    return res; 


}
int largestRectangleWithAllOnes(vector<vector<int>> arr){
    int res=0;
    for (int i = 0; i <arr.size(); i++)
    {
        /* code */
        int n=arr[i].size();
        int arre[n];
        int add=0;
    
        for (int j= 0; j<arr[i].size(); j++)
        {
            /* code */
            if (arr[i-1][j]==1&&i!=0)
            {
                /* code */
                arr[i][j]+=arr[i-1][j];
                // add=arr[i][j];
            }
            
            arre[j]=arr[i][j];


        }
        int currmax=largestArea(arre,n);
        res=max(res,currmax); 

        
    } 
    return res;
}

int main(){
    int n,m;
    cout<<"enter row and col"<<endl;
    cin>>n>>m;
    int ele;
    vector<vector<int>> row;
    cout<<"Enter Matrix"<<"\n";
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
    }
    // printMatrix(row);
    cout<<largestRectangleWithAllOnes(row);

    // print2DArray(row);
 0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
    
}