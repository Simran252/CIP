#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;
int longestsubArrayWithGivemSumUsingHashing(int arr[],int n){
    //using hashiing 
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==0)
        {
            arr[i]=-1;
        }
    }
    //longest subarray with sum=0
    unordered_map<int,int> map;
    int prefix_sum=0,maximum=0;
    for (int i = 0; i <n; i++)
    {
        prefix_sum+=arr[i];
        if (prefix_sum==0)
        {
           maximum=i+1;
        }
        if (map.find(prefix_sum)==map.end())
        {
            map.insert({prefix_sum,i}); 
        } 
        if (map.find(prefix_sum-0)!=map.end())
        {
            auto it=map.find(prefix_sum);
            int start=it->second;
            int end=i;
            maximum=max(maximum,end-start);


                
        }
        
        
        
    }
    return maximum;


}
int longestsubArrayWithGivemSumNaiveApproach(int arr[],int n){
    int zeroes=0,ones=0,maximum=0;
    for (int i = 0; i <n; i++)
    {
        zeroes=0,ones=0;
        for (int j = i; j < n; j++)
        {
            if (arr[j]==0)
            {
                zeroes++;
            }
            if (arr[j]==1)
            {
               ones++;
            }
            if (zeroes==ones)
            {
                int noOF0And1=j-i+1;
                maximum=max(maximum,noOF0And1);
            }

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
        cout<<"enter array elements "<<"\n";
        int arr1[m]; 
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        } 
        
        int res=longestsubArrayWithGivemSumNaiveApproach(arr1,m);
        cout<<"res is "<<res<<"\n";
        cout<<"using hasing i.e unordered_map"<<" ";
        int res1=longestsubArrayWithGivemSumUsingHashing(arr1,m);
        cout<<res1<<"\n";
    }
}