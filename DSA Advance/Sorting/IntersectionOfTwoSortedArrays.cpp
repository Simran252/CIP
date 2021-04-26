#include<iostream>
#include<vector>
#include<set>
using namespace std;
void printVector(vector<int>& it){
    for (auto i = it.begin(); i!=it.end(); i++)
        {
            cout<<(*i)<<" ";  
        }
        cout<<"\n";

}

void  intersetionOFTwoSortedArrays1Efficient(int arr1[],int arr2[],int n,int m){
    
    int j=0,i=0;
    while (i<n&&j<m)
    {
        
        
        if(i>0&&arr1[i-1]==arr1[i]){
            i++;
            continue;


        }
        else if(arr1[i]<arr2[j]){
            i++;


        }
        
        else if(arr1[i]>arr2[j]){

            j++;
            

        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;

        }
        
        
    }
    
}
vector<int> intersetionOFTwoSortedArrays(int arr1[],int arr2[],int n,int m){
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if(i>0&&arr1[i]==arr1[i-1]){
            continue;

        }
        for (int j = 0; j < m; j++)
        {
            if(arr1[i]==arr2[j]){
                v.push_back(arr1[i]);
                break;
            }
        }
        
    }
    return v;

}
int main(){
    int t;
    cout<<"Enter test casees"<<"\n";
    cin>>t;
    while (t--)
    {
        int n;
        cout<<"enter size of array 1"<<"\n";
        cin>>n;
      
        cout<<"Enter arr 1 ele"<<"\n";
        int arr[n];
         for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
         int m;
        cout<<"enter size of array 2"<<"\n";
        cin>>m;
      
        cout<<"Enter arr 2 ele"<<"\n";
        int arr2[m];
         for (int i = 0; i < m; i++)
            {
                cin>>arr2[i];
            }
        vector<int> it=intersetionOFTwoSortedArrays(arr,arr2,n,m);
        printVector(it);
         cout<<"efficeint sol using merge fun of merge sort is "<<"\n";
        intersetionOFTwoSortedArrays1Efficient(arr,arr2,n,m);
       
        
    }
}