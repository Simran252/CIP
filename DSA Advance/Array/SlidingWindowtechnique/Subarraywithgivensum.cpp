#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
bool subarrayWithGivenSum(int arr[],int n,int sum){
    int sumCount=arr[0];
    for (int i = 1; i < n;i++)
    {
        if (sumCount<sum)
        {
            sumCount+=arr[i];


        }
         if (sumCount==sum)
        {

            return 1;
        }

    }
    
    int j=0;
    while (sumCount!=sum&&j<n)
    {
        if()

    }
    
    
    

}

int main() {
	//code
	int T;
    cout<<"Enter test caeses"<<"\n";
	cin>>T;
	for(int t=1;t<=T;t++){
        cout<<"Enter n and sum"<<"\n";
	    int n,k;
	    cin>>n>>sum;
	    int arr[n];
        cout<<"Enter array ele"<<"\n";
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        bool ans=subarrayWithGivenSum(arr,n,sum);
        ans==0?cout<<" no":cout<<"yes"<<"\n";
      
        
	}
	
}