#include<iostream>
#include<vector>
using namespace std;
void BoundaryElements( vector<vector<int>>&martix){
        // Code here
       int m=martix.size();
       int n=martix[0].size();
       if(m==1){
           for(int j=0;j<m;j++)
            {
                //row
                cout<<martix[0][j]<<" ";
            }

       }
       else if(n==1){
           for(int j=0;j<n;j++)
            {
                //coloumn
                cout<<martix[j][0]<<" ";
            }



       }
       else
       {
        int i=0,j=0;
        for(int j=0;j<n;j++)
        {
            //row
            cout<<martix[0][j]<<" ";
        }
        for(int j=1;j<m;j++)
        {
            //coloumn
            cout<<martix[j][n-1]<<" ";
        }
        for(int j=n-2;j>=0;j--)
        {
            //coloumn
            cout<<martix[m-1][j]<<" ";
            
        }
        for(int j=m-2;j>=1;j--)
        {
            //coloumn
            cout<<martix[j][0]<<" ";
            
        }
       
       }
       
         cout<<"\n";
       
    }
int main(){
    int t;
    cout<<"enter test "<<"\n";
    cin>>t;
    while (t--)
    {
    int m,n;
    cout<<"enter m and n "<<"\n";
    cin>>m>>n;
    
    cout<<"enter matrix "<<"\n";
     vector<vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector<int> vec;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin>>ele;
            vec.push_back(ele); 
        }
        arr.push_back(vec);

    }
    BoundaryElements(arr);
    }
    
    
}