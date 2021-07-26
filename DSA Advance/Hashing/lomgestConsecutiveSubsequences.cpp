
#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<climits>
#include<vector>
using namespace std;
int longestsubArrayWithGivemSumUsingHashing(int arr[],int n){
    unordered_set<int> uset(arr,arr+n);
    int maximum=0,count=1;
    for (auto i = uset.begin(); i!=uset.end();)
    {
       int prev=(*i)-1;
        if (uset.find(prev)!=uset.end())
        {
            i++;
            
        }
        
      else if (uset.find(prev)==uset.end())
        {
            int next=(*i)+1;
            while (uset.find(next)!=uset.end())
            {
                   next++;

                    count++;   

                    
            }
            i++;
        }
      maximum=max(maximum,count);
     
        
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
       
        cout<<"using hasing i.e unordered_map"<<" ";
        int res1=longestsubArrayWithGivemSumUsingHashing(arr1,m); 
        cout<<res1<<"\n";
    }
}