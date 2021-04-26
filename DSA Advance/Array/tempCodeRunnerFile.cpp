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