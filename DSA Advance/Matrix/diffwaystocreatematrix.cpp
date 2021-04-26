#include<iostream>
#include<vector>
using namespace std;
void natrixUSingvectorOfVectors(){
    cout<<"natrixUSingvectorOfVectors"<<"\n";
    int m=3,n=4;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            vec.push_back(90);
        }
        arr.push_back(vec);

    }
    for (int i = 0; i <arr.size(); i++)
    {
        for (int j=0; j <arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    
}
void matrixUsingVectors(){
    cout<<"matrixUsingVectors"<<"\n";
    int m=4,n=3;
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(15);

        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    
}
void matrixUsingarrayOFPointers(){
    
    
     cout<<"matrixUsingarrayOFPointers "<<"\n";
    int m=2,n=3;
    int*arr[m];//array of pointers
    for (int i = 0; i < m; i++)
    {
        arr[i]=new int[n];

    }
    for (int i = 0; i < m; i++)
        {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=20;
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
void matrixUsingDoublePointer(){
    cout<<"matrixUsingDoublePointer"<<"\n";
    int m=2,n=4;
    int**arr;
    arr=new int*[m];
    for (int i = 0; i < m; i++)
    {
        arr[i]=new int[n];
    }
    cout<<"print matrix"<<"\n";
     for (int i = 0; i < m; i++)
        {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
}
int main(){
    int arr[3][2]={{10,20},{30,40},{50,60}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    //variable sized array

    int m,n;
    cin>>m>>n;
    int arr2[m][n];
    cout<<"enter matrix"<<"\n";
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr2[i][j];
        }

    }
    cout<<"print matrix"<<"\n";
     for (int i = 0; i < m; i++)
        {
        for (int j = 0; j < n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
    matrixUsingDoublePointer();
     matrixUsingarrayOFPointers();
      matrixUsingVectors();
      natrixUSingvectorOfVectors();
    
    
}