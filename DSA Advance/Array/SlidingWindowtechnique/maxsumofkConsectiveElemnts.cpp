#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int maximumSumOfKConsecutiveEle(int arr[],int n,int k){
    int curr_sum=0;
    for (int i = 0; i <k; i++)
    {
        curr_sum+=arr[i];
    }
    int max_sum=curr_sum;
    for (int j = k; j<n ; j++)
    {
        curr_sum=curr_sum+(arr[j])-(arr[j-k]);
        max_sum=max(max_sum,curr_sum);


    }
    return max_sum;
    

}

int main() {
	//code
	int T;
    cout<<"Enter test caeses"<<"\n";
	cin>>T;
	for(int t=1;t<=T;t++){
        cout<<"Enter n and k"<<"\n";
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
        cout<<"Enter array ele"<<"\n";
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        int ans=maximumSumOfKConsecutiveEle(arr,n,k);
        cout<<"maximumSumOfKConsecutiveEle using sliding window techinqe is "<<ans<<"\n";
      
        
	}
	
}