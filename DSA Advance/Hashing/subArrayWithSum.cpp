#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;
bool subArrayWithZeroSum(int arr[],int n,int sum){
    //using prefix sum and hashing
    unordered_set<int> uset;
    int prefixSum=0;
    for (int i = 0; i <n;i++)
    {
        prefixSum+=arr[i];
       
        
        if (uset.find(prefixSum)!=uset.end())
        {
            return true;
            
        }
        //if arr[]={-3,1,2}
        if (prefixSum==0)
        {
            return 1;
        }
        uset.insert(prefixSum);
       

    }
    return false;


}

int main(){
   cout<<"Enter test cases"<<"\n";
    int t,sum;
    cin>>t;
    while (t--)
    {
         cout<<"Enter size of array"<<"\n";
        int m;
        cin>>m;
        int arr1[m]; 
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        } 

        int res=subArrayWithZeroSum(arr1,m,0);
        res==1?cout<<"true":cout<<"false"<<"\n";



    }
    
}
// link to the question
