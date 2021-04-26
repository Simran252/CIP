#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printMatrix(vector<vector<int>> &matrix){
    int r=matrix.size();
    int c=matrix[0].size();
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
        

    }
    cout<<"\n";
    

}
void rotateMatrixBy90(vector<vector<int>> &matrix){
    vector<int> vec;
    int r=matrix.size();
    int c=matrix[0].size();
    //find transpose
    for (int i = 0; i < r; i++)
    {
        for (int j=i ;j<c;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    //swap rows
    int m=0,n=c-1;
    for (int i = 0; i <r/2; i++)
    {
        for (int j=0; j<c; j++)
        {
            swap(matrix[m][j],matrix[n][j]);

        }
        m++;
        n--;

        
    }
    

}
int main(){
    cout<<"Enter test cases"<<"\n";
    int t;
    cin>>t;
    while (t--)
    {
        cout<<"Enter size of array"<<"\n";
        int r,c;
        cin>>r>>c;
        vector<vector<int>> matrix;
        for (int i = 0; i < r; i++)
        {
            /* code */
            vector<int> v;
            for (int j= 0;j<c;j++)
            {
                int ele;
                cin>>ele;
                v.push_back(ele);

            }
            matrix.push_back(v);
            
        }
        cout<<"matrix is"<<"\n";
        rotateMatrixBy90(matrix);
        printMatrix(matrix);
        


        

    }
    
}