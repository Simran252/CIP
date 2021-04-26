#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;
bool subArrayWithGivemSum(int arr[],int n,int sum){
    //using prefix sum and hashing 
    unordered_set<int> unset;
    int prefix_sum=0;
    for (int i = 0; i <n; i++)
    {
      prefix_sum+=arr[i];
     
      if (prefix_sum==sum)
      {
          return 1;
      }
      
      if (unset.find(prefix_sum-sum)!=unset.end())
      {
          return 1;
      }
      
         unset.insert(prefix_sum);

    }
    return 0;


    


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
        int sum;
        cin>>sum;
        int res=subArrayWithGivemSum(arr1,m,sum); 
        res==1?cout<<"true":cout<<"false"<<"\n";



    }
    
}
// link to the question
