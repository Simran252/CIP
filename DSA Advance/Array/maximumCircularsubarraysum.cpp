#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int linearminimumSubarraySum(int arr[],int n){
    //kandane's algo ie to find maximum subarray sum 
    int res=arr[0];   
    int curr_sum=arr[0];
    for (int i = 1; i < n; i++)
    {
        
        
        curr_sum=min(curr_sum+arr[i],arr[i]);
        res=min(res,curr_sum);
    }
    return res;
    
    
}
int linearmaximumSubarraySum(int arr[],int n){
    //kandane's algo ie to find maximum subarray sum 
    int res=arr[0];
    int curr_sum=arr[0];
    for (int i = 1; i < n; i++)
    {
        
        
        curr_sum=max(curr_sum+arr[i],arr[i]);
        res=max(res,curr_sum);
    }
    return res;
}
int arraySum(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans+=arr[i];
    }
    return ans;
    

}

int linearmaximumCircularSubarraySum(int arr[],int n){
    int maxsubarraysum=linearmaximumSubarraySum(arr,n);
    
    if(maxsubarraysum<0){
        return maxsubarraysum;
    }
    int minsubarraysum=linearminimumSubarraySum(arr,n);
    int sumOfArray=arraySum(arr,n);
    int circularSubarraySum=sumOfArray-minsubarraysum;
    return max(maxsubarraysum,circularSubarraySum);


}
int maximumCircularSubarraySum(int arr[],int n){
    int res=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for (int j = 1; j < n; j++)
        {
            /* code */
            int in=(i+j)%n;
            curr_sum=curr_sum+arr[in];
            curr_max=max(curr_max,curr_sum);

        }
        res=max(res,curr_max);
        
    }
    return res;

}

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }

        cout<<"quadratic time sol"<<"\n";
       
        int maxi= maximumCircularSubarraySum(arr,n);
        cout<<"result is "<<maxi<<"\n";
      //linear time solution
       cout<<"quadratic time sol"<<"\n";
      cout<<"Maximum subarray sum is"<<linearmaximumCircularSubarraySum(arr,n)<<"\n";
        
	}
	
}