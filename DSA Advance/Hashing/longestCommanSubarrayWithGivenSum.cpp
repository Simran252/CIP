#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;
int longestsubArrayWithGivemSumUsingHashing(int arr1[],int arr2[],int m){
    //using hashiing 
    int temp[m];
    for (int i = 0; i < m; i++)
    {
        temp[i]= arr1[i]-arr2[i];
        
    }
    //find the longest subarray with sum=0 
    unordered_map<int,int> map;
    int prefix_sum=0,maximum=0;
    for (int i = 0; i <m; i++)
    {
      prefix_sum+=temp[i];
      //corner case 
      if (prefix_sum==0)
      {
          maximum=i+1;
        
      }
      if (map.find(prefix_sum-0)!=map.end())
      {
          //find an key-value pair that already exists
            maximum=max(maximum,(i-map.find(prefix_sum-0)->second));


      }

      map.insert({prefix_sum,i});

      
        
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
        cout<<"enter array elements 1"<<"\n";
        int arr1[m]; 
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        } 
         cout<<"enter array elements 2"<<"\n";
        int arr2[m]; 
        for (int i = 0;i<m; i++)
        {
            cin>>arr2[i];
        } 
        
        cout<<"using hasing i.e unordered_map"<<" ";
        int res1=longestsubArrayWithGivemSumUsingHashing(arr1,arr2,m);
        cout<<res1<<"\n";
    }
}