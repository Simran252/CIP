#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;
int longestsubArrayWithGivemSum(int arr[],int n,int sum){
    //using prefix sum and hashing 
    int start=0,end,maximum=INT_MIN;
    unordered_map<int,int> map;
    int prefix_sum=0;
    for (int i = 0; i <n; i++)
    {
        prefix_sum+=arr[i];
        if (map.find(prefix_sum)==map.end())
        {

             map.insert({prefix_sum,i});
        }
        
        if(map.find(prefix_sum-sum)!=map.end())
        {


            auto it=map.find(prefix_sum-sum);
            int end=it->second;
            maximum=max(maximum,i-start);
            start=end++;

            
            
        
        }


        
    }
    return maximum; 
        
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
        int res=longestsubArrayWithGivemSum(arr1,m,sum);
        cout<<"res is "<<res<<"\n";
    }
}